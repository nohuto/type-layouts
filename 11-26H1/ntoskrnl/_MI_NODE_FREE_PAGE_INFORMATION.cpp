struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_NODE_FREE_PAGE_INFORMATION// Size=0x400 (Id=1808)
{
    unsigned long PageColorHand;// Offset=0x0 Size=0x4
    unsigned long long FreeCount[2];// Offset=0x8 Size=0x10
    unsigned long long FreeZeroCountByAttribute[2][3];// Offset=0x18 Size=0x30
    struct _RTL_BITMAP_EX FreePageListHeadsBitmap[2][3][2];// Offset=0x80 Size=0xc0
    unsigned long long FreePageListHeadsBitmapBuffer[48];// Offset=0x140 Size=0x180
    unsigned long long LargePageFreeCountHiLow[2][2];// Offset=0x2c0 Size=0x20
    unsigned long long LargePageCount[2][2][2];// Offset=0x2e0 Size=0x40
    struct _MMPFNLIST * LargePageEntries[2][2][2][3];// Offset=0x320 Size=0xc0
};
