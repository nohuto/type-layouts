struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=21)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RTL_SPARSE_BITMAP_RANGE// Size=0x18 (Id=298)
{
    union // Size=0x18 (Id=0)
    {
        unsigned long long Lock;// Offset=0x0 Size=0x8
        struct _RTL_BITMAP RangeBitmap;// Offset=0x8 Size=0x10
        struct _SINGLE_LIST_ENTRY Next;// Offset=0x0 Size=0x8
    };
};
