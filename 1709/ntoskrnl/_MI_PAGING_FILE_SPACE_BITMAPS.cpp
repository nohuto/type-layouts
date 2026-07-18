struct _RTL_BITMAP// Size=0x10 (Id=33)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_PAGING_FILE_SPACE_BITMAPS// Size=0x28 (Id=1549)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long RefCount;// Offset=0x0 Size=0x4
        struct _MI_PAGING_FILE_SPACE_BITMAPS * Anchor;// Offset=0x0 Size=0x8
    };
    struct _RTL_BITMAP AllocationBitmap;// Offset=0x8 Size=0x10
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BITMAP ReservationBitmap;// Offset=0x18 Size=0x10
        struct _RTL_BITMAP EvictedBitmap;// Offset=0x18 Size=0x10
    };
};
