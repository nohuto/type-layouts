enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
    HeapAddressUser=0,
    HeapAddressKernel=1,
    HeapAddressSession=2,
    HeapAddressSecure=3,
    HeapAddressTypeMax=4
};

struct _RTL_CSPARSE_BITMAP// Size=0x40 (Id=822)
{
    unsigned long long * CommitBitmap;// Offset=0x0 Size=0x8
    unsigned long long * UserBitmap;// Offset=0x8 Size=0x8
    unsigned long long BitCount;// Offset=0x10 Size=0x8
    unsigned long long BitmapLock;// Offset=0x18 Size=0x8
    unsigned long long DecommitPageIndex;// Offset=0x20 Size=0x8
    unsigned long long RtlpCSparseBitmapWakeLock;// Offset=0x28 Size=0x8
    unsigned char LockType;// Offset=0x30 Size=0x1
    unsigned char AddressSpace;// Offset=0x31 Size=0x1
    unsigned char MemType;// Offset=0x32 Size=0x1
    unsigned char AllocAlignment;// Offset=0x33 Size=0x1
    unsigned long CommitDirectoryMaxSize;// Offset=0x34 Size=0x4
    unsigned long long CommitDirectory[1];// Offset=0x38 Size=0x8
};

struct _RTL_SPARSE_ARRAY// Size=0x50 (Id=824)
{
    unsigned long long ElementCount;// Offset=0x0 Size=0x8
    unsigned long ElementSizeShift;// Offset=0x8 Size=0x4
    struct _RTL_CSPARSE_BITMAP Bitmap;// Offset=0x10 Size=0x40
};

struct _HEAP_VAMGR_VASPACE// Size=0x860 (Id=827)
{
    enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;// Offset=0x0 Size=0x4
    unsigned long long BaseAddress;// Offset=0x8 Size=0x8
    union // Size=0x50 (Id=0)
    {
        struct _RTL_SPARSE_ARRAY VaRangeArray;// Offset=0x10 Size=0x50
        unsigned char VaRangeArrayBuffer[2128];// Offset=0x10 Size=0x850
    };
};
