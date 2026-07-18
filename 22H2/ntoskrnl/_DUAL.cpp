struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _FREE_DISPLAY// Size=0x18 (Id=1541)
{
    unsigned long RealVectorSize;// Offset=0x0 Size=0x4
    unsigned long Hint;// Offset=0x4 Size=0x4
    struct _RTL_BITMAP Display;// Offset=0x8 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DUAL// Size=0x278 (Id=1040)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _HMAP_DIRECTORY * Map;// Offset=0x8 Size=0x8
    struct _HMAP_TABLE * SmallDir;// Offset=0x10 Size=0x8
    unsigned long Guard;// Offset=0x18 Size=0x4
    struct _FREE_DISPLAY FreeDisplay[24];// Offset=0x20 Size=0x240
    struct _LIST_ENTRY FreeBins;// Offset=0x260 Size=0x10
    unsigned long FreeSummary;// Offset=0x270 Size=0x4
};
