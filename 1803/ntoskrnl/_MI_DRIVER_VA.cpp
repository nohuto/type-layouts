struct _RTL_BITMAP// Size=0x10 (Id=33)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DRIVER_VA// Size=0x28 (Id=1238)
{
    struct _MI_DRIVER_VA * Next;// Offset=0x0 Size=0x8
    struct _MMPTE * PointerPte;// Offset=0x8 Size=0x8
    struct _RTL_BITMAP BitMap;// Offset=0x10 Size=0x10
    unsigned long Hint;// Offset=0x20 Size=0x4
    unsigned long Flags;// Offset=0x24 Size=0x4
};
