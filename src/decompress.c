#include "global.h"
#include "gflib.h"
#include "decompress.h"
#include "pokemon.h"

extern const struct CompressedSpriteSheet gMonFrontPicTable[];
extern const struct CompressedSpriteSheet gMonBackPicTable[];

static void DuplicateDeoxysTiles(void *pointer, s32 species);

void LZDecompressWram(const void *src, void *dest)
{
    LZ77UnCompWram(src, dest);
}

void LZDecompressVram(const void *src, void *dest)
{
    LZ77UnCompVram(src, dest);
}

u16 LoadCompressedSpriteSheet(const struct CompressedSpriteSheet *src)
{
    struct SpriteSheet dest;

    LZ77UnCompWram(src->data, gDecompressionBuffer);
    dest.data = gDecompressionBuffer;
    dest.size = src->size;
    dest.tag = src->tag;
    return LoadSpriteSheet(&dest);
}

void LoadCompressedSpriteSheetOverrideBuffer(const struct CompressedSpriteSheet *src, void *buffer)
{
    struct SpriteSheet dest;

    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    LoadSpriteSheet(&dest);
}

void LoadCompressedSpritePalette(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;

    LZ77UnCompWram(src->data, gDecompressionBuffer);
    dest.data = (void *) gDecompressionBuffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
}

void LoadCompressedSpritePaletteOverrideBuffer(const struct CompressedSpritePalette *a, void *buffer)
{
    struct SpritePalette dest;

    LZ77UnCompWram(a->data, buffer);
    dest.data = buffer;
    dest.tag = a->tag;
    LoadSpritePalette(&dest);
}

void DecompressPicFromTable(const struct CompressedSpriteSheet *src, void *buffer, s32 species)
{
    if (species > NUM_SPECIES)
        LZ77UnCompWram(gMonFrontPicTable[0].data, buffer);
    else
        LZ77UnCompWram(src->data, buffer);
    DuplicateDeoxysTiles(buffer, species);
}

void HandleLoadSpecialPokePic(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality)
{
    bool8 isFrontPic;

    if (src == &gMonFrontPicTable[species])
        isFrontPic = TRUE; // frontPic
    else
        isFrontPic = FALSE; // backPic
    LoadSpecialPokePic(src, dest, species, personality, isFrontPic);
}

void LoadSpecialPokePic(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    if (species == SPECIES_UNOWN || species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_HIPPOPOTAS || species == SPECIES_HIPPOWDON
        || species == SPECIES_UNFEZANT || species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_FRILLISH || species == SPECIES_JELLICENT || species == SPECIES_VIVILLON
        || species == SPECIES_PYROAR || species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES
        || species == SPECIES_MINIOR_CORE_RED || species == SPECIES_ALCREMIE || species == SPECIES_MAUSHOLD || species == SPECIES_SQUAWKABILLY 
        || species == SPECIES_TATSUGIRI || species == SPECIES_DUDUNSPARCE || species == SPECIES_KELDEO || species == SPECIES_FURFROU
        || species == SPECIES_MAGEARNA || species == SPECIES_CRAMORANT || species == SPECIES_ZARUDE || species == SPECIES_PIKACHU_CAP)
    {
        u16 i;

        if (species == SPECIES_UNOWN)
        {
            // The other Unowns are separate from Unown A.
            i = GET_UNOWN_LETTER(personality);
            if (i == 0)
                i = SPECIES_UNOWN;
            else
                i += SPECIES_UNOWN_B - 1;
        }
        else if (species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_KELDEO || species == SPECIES_MAGEARNA || species == SPECIES_ZARUDE)
        {
            i = (personality >> 8) % 2;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_SHELLOS)
                    i = SPECIES_SHELLOS_EAST_SEA;
                else if (species == SPECIES_KELDEO)
                    i = SPECIES_KELDEO_RESOLUTE;
                else if (species == SPECIES_MAGEARNA)
                    i = SPECIES_MAGEARNA_ORIGINAL_COLOR;
                else if (species == SPECIES_ZARUDE)
                    i = SPECIES_ZARUDE_DADA;
                else
                    i = SPECIES_GASTRODON_EAST_SEA;
            }
        }
        else if (species == SPECIES_MAUSHOLD || species == SPECIES_DUDUNSPARCE)
        {
            i = (personality >> 8) % 100;
            if (i != 69) //  nice
                i = species;
            else
            {
                if (species == SPECIES_MAUSHOLD)
                    i = SPECIES_MAUSHOLD_FAMILY_OF_THREE;
                else
                    i = SPECIES_DUDUNSPARCE_THREE_SEGMENT;
            }
        }
        else if (species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_SQUAWKABILLY)
        {
            i = (personality >> 8) % 4;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_DEERLING)
                    i += SPECIES_DEERLING_SUMMER - 1;
                else if (species == SPECIES_SAWSBUCK)
                    i += SPECIES_SAWSBUCK_SUMMER - 1;
                else
                    i += SPECIES_SQUAWKABILLY_BLUE_PLUMAGE - 1;
            }
        }
        else if (species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES)
        {
            i = (personality >> 8) % 5;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_FLABEBE)
                    i += SPECIES_FLABEBE_YELLOW_FLOWER - 1;
                else if (species == SPECIES_FLOETTE)
                    i += SPECIES_FLOETTE_YELLOW_FLOWER - 1;
                else
                    i += SPECIES_FLORGES_YELLOW_FLOWER - 1;
            }
        }
        else if (species == SPECIES_VIVILLON || species == SPECIES_CRAMORANT || species == SPECIES_FURFROU)
        {
            i = (personality >> 8) % 20;
            if (species == SPECIES_VIVILLON) {
                if (!i)
                    i = species;
                else
                    i += SPECIES_VIVILLON_POLAR - 1;
            }
            else if (species == SPECIES_CRAMORANT) {
                if (i < 16)
                    i = species;
                else if (i == 19)
                    i = SPECIES_CRAMORANT_GORGING;
                else
                    i = SPECIES_CRAMORANT_GULPING;
            }
            else {
                if (i <= 10)
                    i = species;
                else
                    i += SPECIES_FURFROU_TRIM_1 - 11;
            }
        }
        else if (species == SPECIES_MINIOR_CORE_RED)
        {
            i = (personality >> 8) % 7;
            if (!i)
                i = species;
            else
                i += SPECIES_MINIOR_CORE_ORANGE - 1;
        }
        else if (species == SPECIES_ALCREMIE)
        {
            i = (personality >> 8) % 63;
            if (!i)
                i = species;
            else
                i += SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM - 1;
        }
        else if (species == SPECIES_TATSUGIRI)
        {
            i = (personality >> 8) % 3;
            if (!i)
                i = species;
            else
                i += SPECIES_TATSUGIRI_DROOPY - 1;
        }
        else if (species == SPECIES_PYROAR)
        {
            if ((personality % 0x100) >= 0xDF)
                i = species;
            else
                i = SPECIES_PYROAR_FEMALE;
        }
        else
        {
            if ((personality % 0x100) >= 0x7F) {
                if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 8 == 1)
                        i = SPECIES_PIKACHU_CAP_2;
                    else if ((personality >> 8) % 8 == 2)
                        i = SPECIES_PIKACHU_CAP_3;
                    else if ((personality >> 8) % 8 == 3)
                        i = SPECIES_PIKACHU_CAP_4;
                    else if ((personality >> 8) % 8 == 4)
                        i = SPECIES_PIKACHU_CAP_5;
                    else if ((personality >> 8) % 8 == 5)
                        i = SPECIES_PIKACHU_CAP_6;
                    else if ((personality >> 8) % 8 == 6)
                        i = SPECIES_PIKACHU_CAP_7;
                    else if ((personality >> 8) % 8 == 7)
                        i = SPECIES_PIKACHU_CAP_8;
                    else
                        i = species;
                }
                else
                    i = species;
            }
            else
                if (species == SPECIES_HIPPOPOTAS)
                    i = SPECIES_HIPPOPOTAS_FEMALE;
                else if (species == SPECIES_HIPPOWDON)
                    i = SPECIES_HIPPOWDON_FEMALE;
                else if (species == SPECIES_UNFEZANT)
                    i = SPECIES_UNFEZANT_FEMALE;
                else if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 6 == 0)
                        i = SPECIES_PIKACHU_COSPLAY_1;
                    else if ((personality >> 8) % 6 == 1)
                        i = SPECIES_PIKACHU_COSPLAY_2;
                    else if ((personality >> 8) % 6 == 2)
                        i = SPECIES_PIKACHU_COSPLAY_3;
                    else if ((personality >> 8) % 6 == 3)
                        i = SPECIES_PIKACHU_COSPLAY_4;
                    else if ((personality >> 8) % 6 == 4)
                        i = SPECIES_PIKACHU_COSPLAY_5;
                    else
                        i = SPECIES_PIKACHU_COSPLAY_6;
                }
                else if (species == SPECIES_FRILLISH)
                    i = SPECIES_FRILLISH_FEMALE;
                else
                    i = SPECIES_JELLICENT_FEMALE;
        }

        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else if (species > NUM_SPECIES) // is species unknown? draw the ? icon
        LZ77UnCompWram(gMonFrontPicTable[0].data, dest);
    else
        LZ77UnCompWram(src->data, dest);

    DuplicateDeoxysTiles(dest, species);
    DrawSpindaSpots(species, personality, dest, isFrontPic);
}

static void DuplicateDeoxysTiles(void *pointer, s32 species)
{
    if (species == SPECIES_DEOXYS)
        CpuCopy32(pointer + 0x800, pointer, 0x800);
}

static void Unused_LZDecompressWramIndirect(const void **src, void *dest)
{
    LZ77UnCompWram(*src, dest);
}

static void StitchObjectsOn8x8Canvas(s32 object_size, s32 object_count, u8 *src_tiles, u8 *dest_tiles)
{
    /*
      This function appears to emulate behaviour found in the GB(C) versions regarding how the Pokemon images
      are stitched together to be displayed on the battle screen.
      Given "compacted" tiles, an object count and a bounding box/object size, place the tiles in such a way
      that the result will have each object centered in a 8x8 tile canvas.
    */
    s32 i, j, k, l;
    u8 *src = src_tiles, *dest = dest_tiles;
    u8 bottom_off;

    if (object_size & 1)
    {
        // Object size is odd
        bottom_off = (object_size >> 1) + 4;
        for (l = 0; l < object_count; l++)
        {
            // Clear all unused rows of tiles plus the half-tile required due to centering
            for (j = 0; j < 8-object_size; j++)
            {
                for (k = 0; k < 8; k++)
                {
                    for (i = 0; i < 16; i++)
                    {
                        if (j % 2 == 0)
                        {
                            // Clear top half of top tile and bottom half of bottom tile when on even j
                            ((dest+i) + (k << 5))[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                        }
                        else
                        {
                            // Clear bottom half of top tile and top half of tile following bottom tile when on odd j
                            ((dest+i) + (k << 5) + 16)[((j >> 1) << 8)] = 0;
                            ((bottom_off << 8) + (dest+i) + (k << 5) + 256)[((j >> 1) << 8)] = 0;
                        }
                    }
                }
            }

            // Clear the columns to the left and right that wont be used completely
            // Unlike the previous loops, this will clear the later used space as well
            for (j = 0; j < 2; j++)
            {
                for (i = 0; i < 8; i++)
                {
                    for (k = 0; k < 32; k++)
                    {
                        // Left side
                        ((dest+k) + (i << 8))[(j << 5)] = 0;
                        // Right side
                        ((dest+k) + (i << 8))[(j << 5)+192] = 0;
                    }
                }
            }

            // Skip the top row and first tile on the second row for objects of size 5
            if (object_size == 5) dest += 0x120;

            // Copy tile data
            for (j = 0; j < object_size; j++)
            {
                for (k = 0; k < object_size; k++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        // Offset the tile by +4px in both x and y directions
                        (dest + (i << 2))[18] = (src + (i << 2))[0];
                        (dest + (i << 2))[19] = (src + (i << 2))[1];
                        (dest + (i << 2))[48] = (src + (i << 2))[2];
                        (dest + (i << 2))[49] = (src + (i << 2))[3];

                        (dest + (i << 2))[258] = (src + (i << 2))[16];
                        (dest + (i << 2))[259] = (src + (i << 2))[17];
                        (dest + (i << 2))[288] = (src + (i << 2))[18];
                        (dest + (i << 2))[289] = (src + (i << 2))[19];
                    }
                    src += 32;
                    dest += 32;
                }

                // At the end of a row, skip enough tiles to get to the beginning of the next row
                if (object_size == 7) dest += 0x20;
                else if (object_size == 5) dest += 0x60;
            }

            // Skip remaining unused space to go to the beginning of the next object
            if (object_size == 7) dest += 0x100;
            else if (object_size == 5) dest += 0x1e0;
        }
    }
    else
    {
        // Object size is even
        for (i = 0; i < object_count; i++)
        {
            // For objects of size 6, the first and last row and column will be cleared
            // While the remaining space will be filled with actual data
            if (object_size == 6)
            {
                for (k = 0; k < 256; k++) {
                    *dest = 0;
                    dest++;
                }
            }

            for (j = 0; j < object_size; j++)
            {
                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++) {
                        *dest = 0;
                        dest++;
                    }
                }

                // Copy tile data
                for (k = 0; k < 32 * object_size; k++) {
                    *dest = *src;
                    src++;
                    dest++;
                }

                if (object_size == 6)
                {
                    for (k = 0; k < 32; k++) {
                        *dest = 0;
                        dest++;
                    }
                }
            }

            if (object_size == 6)
            {
                for (k = 0; k < 256; k++) {
                    *dest = 0;
                    dest++;
                }
            }
        }
    }
}

bool8 LoadCompressedSpriteSheetUsingHeap(const struct CompressedSpriteSheet* src)
{
    struct SpriteSheet dest;
    void *buffer;

    buffer = AllocZeroed(*((u32 *)src->data) >> 8);
    if (!buffer)
        return TRUE;
    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.size = src->size;
    dest.tag = src->tag;
    LoadSpriteSheet(&dest);
    Free(buffer);
    return FALSE;
}

bool8 LoadCompressedSpritePaletteUsingHeap(const struct CompressedSpritePalette *src)
{
    struct SpritePalette dest;
    void *buffer;

    buffer = AllocZeroed(*((u32 *)src->data) >> 8);
    if (!buffer)
        return TRUE;
    LZ77UnCompWram(src->data, buffer);
    dest.data = buffer;
    dest.tag = src->tag;
    LoadSpritePalette(&dest);
    Free(buffer);
    return FALSE;
}

u32 GetDecompressedDataSize(const u8 *ptr)
{
    u32 ptr32[1];
    u8 *ptr8 = (u8 *)ptr32;

    ptr8[0] = ptr[1];
    ptr8[1] = ptr[2];
    ptr8[2] = ptr[3];
    ptr8[3] = 0;
    return ptr32[0];
}

void DecompressPicFromTable_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *buffer, s32 species)
{
    if (species > NUM_SPECIES)
        LZ77UnCompWram(gMonFrontPicTable[0].data, buffer);
    else
        LZ77UnCompWram(src->data, buffer);
}

void HandleLoadSpecialPokePic_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality)
{
    bool8 isFrontPic;

    if (src == &gMonFrontPicTable[species])
        isFrontPic = TRUE; // frontPic
    else
        isFrontPic = FALSE; // backPic
    LoadSpecialPokePic_DontHandleDeoxys(src, dest, species, personality, isFrontPic);
}

void LoadSpecialPokePic_DontHandleDeoxys(const struct CompressedSpriteSheet *src, void *dest, s32 species, u32 personality, bool8 isFrontPic)
{
    if (species == SPECIES_UNOWN || species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_HIPPOPOTAS || species == SPECIES_HIPPOWDON
        || species == SPECIES_UNFEZANT || species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_FRILLISH || species == SPECIES_JELLICENT || species == SPECIES_VIVILLON
        || species == SPECIES_PYROAR || species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES
        || species == SPECIES_MINIOR_CORE_RED || species == SPECIES_ALCREMIE || species == SPECIES_MAUSHOLD || species == SPECIES_SQUAWKABILLY 
        || species == SPECIES_TATSUGIRI || species == SPECIES_DUDUNSPARCE || species == SPECIES_KELDEO || species == SPECIES_FURFROU
        || species == SPECIES_MAGEARNA || species == SPECIES_CRAMORANT || species == SPECIES_ZARUDE || species == SPECIES_PIKACHU_CAP)
    {
        u16 i;

        if (species == SPECIES_UNOWN)
        {
            // The other Unowns are separate from Unown A.
            i = GET_UNOWN_LETTER(personality);
            if (i == 0)
                i = SPECIES_UNOWN;
            else
                i += SPECIES_UNOWN_B - 1;
        }
        else if (species == SPECIES_SHELLOS || species == SPECIES_GASTRODON || species == SPECIES_KELDEO || species == SPECIES_MAGEARNA || species == SPECIES_ZARUDE)
        {
            i = (personality >> 8) % 2;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_SHELLOS)
                    i = SPECIES_SHELLOS_EAST_SEA;
                else if (species == SPECIES_KELDEO)
                    i = SPECIES_KELDEO_RESOLUTE;
                else if (species == SPECIES_MAGEARNA)
                    i = SPECIES_MAGEARNA_ORIGINAL_COLOR;
                else if (species == SPECIES_ZARUDE)
                    i = SPECIES_ZARUDE_DADA;
                else
                    i = SPECIES_GASTRODON_EAST_SEA;
            }
        }
        else if (species == SPECIES_MAUSHOLD || species == SPECIES_DUDUNSPARCE)
        {
            i = (personality >> 8) % 100;
            if (i != 69) //  nice
                i = species;
            else
            {
                if (species == SPECIES_MAUSHOLD)
                    i = SPECIES_MAUSHOLD_FAMILY_OF_THREE;
                else
                    i = SPECIES_DUDUNSPARCE_THREE_SEGMENT;
            }
        }
        else if (species == SPECIES_DEERLING || species == SPECIES_SAWSBUCK || species == SPECIES_SQUAWKABILLY)
        {
            i = (personality >> 8) % 4;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_DEERLING)
                    i += SPECIES_DEERLING_SUMMER - 1;
                else if (species == SPECIES_SAWSBUCK)
                    i += SPECIES_SAWSBUCK_SUMMER - 1;
                else
                    i += SPECIES_SQUAWKABILLY_BLUE_PLUMAGE - 1;
            }
        }
        else if (species == SPECIES_FLABEBE || species == SPECIES_FLOETTE || species == SPECIES_FLORGES)
        {
            i = (personality >> 8) % 5;
            if (!i)
                i = species;
            else
            {
                if (species == SPECIES_FLABEBE)
                    i += SPECIES_FLABEBE_YELLOW_FLOWER - 1;
                else if (species == SPECIES_FLOETTE)
                    i += SPECIES_FLOETTE_YELLOW_FLOWER - 1;
                else
                    i += SPECIES_FLORGES_YELLOW_FLOWER - 1;
            }
        }
        else if (species == SPECIES_VIVILLON || species == SPECIES_CRAMORANT || species == SPECIES_FURFROU)
        {
            i = (personality >> 8) % 20;
            if (species == SPECIES_VIVILLON) {
                if (!i)
                    i = species;
                else
                    i += SPECIES_VIVILLON_POLAR - 1;
            }
            else if (species == SPECIES_CRAMORANT) {
                if (i < 16)
                    i = species;
                else if (i == 19)
                    i = SPECIES_CRAMORANT_GORGING;
                else
                    i = SPECIES_CRAMORANT_GULPING;
            }
            else {
                if (i <= 10)
                    i = species;
                else
                    i += SPECIES_FURFROU_TRIM_1 - 11;
            }
        }
        else if (species == SPECIES_MINIOR_CORE_RED)
        {
            i = (personality >> 8) % 7;
            if (!i)
                i = species;
            else
                i += SPECIES_MINIOR_CORE_ORANGE - 1;
        }
        else if (species == SPECIES_ALCREMIE)
        {
            i = (personality >> 8) % 63;
            if (!i)
                i = species;
            else
                i += SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM - 1;
        }
        else if (species == SPECIES_TATSUGIRI)
        {
            i = (personality >> 8) % 3;
            if (!i)
                i = species;
            else
                i += SPECIES_TATSUGIRI_DROOPY - 1;
        }
        else if (species == SPECIES_PYROAR)
        {
            if ((personality % 0x100) >= 0xDF)
                i = species;
            else
                i = SPECIES_PYROAR_FEMALE;
        }
        else
        {
            if ((personality % 0x100) >= 0x7F) {
                if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 8 == 1)
                        i = SPECIES_PIKACHU_CAP_2;
                    else if ((personality >> 8) % 8 == 2)
                        i = SPECIES_PIKACHU_CAP_3;
                    else if ((personality >> 8) % 8 == 3)
                        i = SPECIES_PIKACHU_CAP_4;
                    else if ((personality >> 8) % 8 == 4)
                        i = SPECIES_PIKACHU_CAP_5;
                    else if ((personality >> 8) % 8 == 5)
                        i = SPECIES_PIKACHU_CAP_6;
                    else if ((personality >> 8) % 8 == 6)
                        i = SPECIES_PIKACHU_CAP_7;
                    else if ((personality >> 8) % 8 == 7)
                        i = SPECIES_PIKACHU_CAP_8;
                    else
                        i = species;
                }
                else
                    i = species;
            }
            else
                if (species == SPECIES_HIPPOPOTAS)
                    i = SPECIES_HIPPOPOTAS_FEMALE;
                else if (species == SPECIES_HIPPOWDON)
                    i = SPECIES_HIPPOWDON_FEMALE;
                else if (species == SPECIES_UNFEZANT)
                    i = SPECIES_UNFEZANT_FEMALE;
                else if (species == SPECIES_PIKACHU_CAP) {
                    if ((personality >> 8) % 6 == 0)
                        i = SPECIES_PIKACHU_COSPLAY_1;
                    else if ((personality >> 8) % 6 == 1)
                        i = SPECIES_PIKACHU_COSPLAY_2;
                    else if ((personality >> 8) % 6 == 2)
                        i = SPECIES_PIKACHU_COSPLAY_3;
                    else if ((personality >> 8) % 6 == 3)
                        i = SPECIES_PIKACHU_COSPLAY_4;
                    else if ((personality >> 8) % 6 == 4)
                        i = SPECIES_PIKACHU_COSPLAY_5;
                    else
                        i = SPECIES_PIKACHU_COSPLAY_6;
                }
                else if (species == SPECIES_FRILLISH)
                    i = SPECIES_FRILLISH_FEMALE;
                else
                    i = SPECIES_JELLICENT_FEMALE;
        }

        if (!isFrontPic)
            LZ77UnCompWram(gMonBackPicTable[i].data, dest);
        else
            LZ77UnCompWram(gMonFrontPicTable[i].data, dest);
    }
    else if (species > NUM_SPECIES) // is species unknown? draw the ? icon
    {
        LZ77UnCompWram(gMonFrontPicTable[0].data, dest);
    }
    else
    {
        LZ77UnCompWram(src->data, dest);
    }
    DrawSpindaSpots(species, personality, dest, isFrontPic);
}
