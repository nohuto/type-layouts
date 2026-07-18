struct _RTL_BITMAP_EX// Size=0x10 (Id=1199)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_NODE_FREE_PAGE_INFORMATION// Size=0x500 (Id=1722)
{
    unsigned long PageColorHand;// Offset=0x0 Size=0x4
    unsigned long long FreeCount[2];// Offset=0x8 Size=0x10
    unsigned long long FreeZeroCountByAttribute[2][4];// Offset=0x18 Size=0x40
    struct _RTL_BITMAP_EX FreePageListHeadsBitmap[2][4][2];// Offset=0x80 Size=0x100
    unsigned long long FreePageListHeadsBitmapBuffer[64];// Offset=0x180 Size=0x200
    unsigned long long LargePageFreeCountHiLow[2][2];// Offset=0x380 Size=0x20
    unsigned long long LargePageCount[2][2][2];// Offset=0x3a0 Size=0x40
    struct _MMPFNLIST * LargePageEntries[2][2][2][4];// Offset=0x3e0 Size=0x100
};
