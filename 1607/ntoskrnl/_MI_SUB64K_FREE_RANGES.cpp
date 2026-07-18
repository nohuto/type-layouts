struct _RTL_BITMAP_EX// Size=0x10 (Id=598)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_SUB64K_FREE_RANGES// Size=0x30 (Id=837)
{
    struct _RTL_BITMAP_EX BitMap;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY ListEntry;// Offset=0x10 Size=0x10
    struct _MMVAD_SHORT * Vad;// Offset=0x20 Size=0x8
    unsigned short SubListIndex;// Offset=0x28 Size=0x2
    unsigned short Hint;// Offset=0x2a Size=0x2
    unsigned long SetBits;// Offset=0x2c Size=0x4
};
