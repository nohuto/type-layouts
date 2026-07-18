struct _RTL_BITMAP_EX// Size=0x10 (Id=1199)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_SUB64K_FREE_RANGES// Size=0x38 (Id=1533)
{
    struct _RTL_BITMAP_EX BitMap;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY ListEntry;// Offset=0x10 Size=0x10
    struct _MMVAD_SHORT * Vad;// Offset=0x20 Size=0x8
    unsigned long SetBits;// Offset=0x28 Size=0x4
    unsigned long FullSetBits;// Offset=0x2c Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SubListIndex:2;// Offset=0x30 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Hint:30;// Offset=0x30 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};
