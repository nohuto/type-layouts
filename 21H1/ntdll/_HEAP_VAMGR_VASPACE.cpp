enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
    HeapAddressUser=0,
    HeapAddressKernel=1,
    HeapAddressSession=2,
    HeapAddressSecureKernel=3,
    HeapAddressTypeMax=4
};

struct _RTL_CSPARSE_BITMAP// Size=0x24 (Id=210)
{
    unsigned long * CommitBitmap;// Offset=0x0 Size=0x4
    unsigned long * UserBitmap;// Offset=0x4 Size=0x4
    unsigned long BitCount;// Offset=0x8 Size=0x4
    unsigned long BitmapLock;// Offset=0xc Size=0x4
    unsigned long DecommitPageIndex;// Offset=0x10 Size=0x4
    unsigned long RtlpCSparseBitmapWakeLock;// Offset=0x14 Size=0x4
    unsigned char LockType;// Offset=0x18 Size=0x1
    unsigned char AddressSpace;// Offset=0x19 Size=0x1
    unsigned char MemType;// Offset=0x1a Size=0x1
    unsigned char AllocAlignment;// Offset=0x1b Size=0x1
    unsigned long CommitDirectoryMaxSize;// Offset=0x1c Size=0x4
    unsigned long CommitDirectory[1];// Offset=0x20 Size=0x4
};

struct _RTL_SPARSE_ARRAY// Size=0x2c (Id=212)
{
    unsigned long ElementCount;// Offset=0x0 Size=0x4
    unsigned long ElementSizeShift;// Offset=0x4 Size=0x4
    struct _RTL_CSPARSE_BITMAP Bitmap;// Offset=0x8 Size=0x24
};

struct _HEAP_VAMGR_VASPACE// Size=0x34 (Id=215)
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;// Offset=0x0 Size=0x4
    unsigned long BaseAddress;// Offset=0x4 Size=0x4
    union // Size=0x2c (Id=0)
    {
        struct _RTL_SPARSE_ARRAY VaRangeArray;// Offset=0x8 Size=0x2c
        unsigned char VaRangeArrayBuffer[44];// Offset=0x8 Size=0x2c
    };
};
