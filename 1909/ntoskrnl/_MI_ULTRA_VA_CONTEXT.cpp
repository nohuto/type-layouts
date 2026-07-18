struct _RTL_BITMAP_EX// Size=0x10 (Id=751)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_ULTRA_VA_CONTEXT// Size=0x40 (Id=1233)
{
    unsigned long long Lock;// Offset=0x0 Size=0x8
    void * ZeroMapping;// Offset=0x8 Size=0x8
    unsigned long long AllocationHintBit;// Offset=0x10 Size=0x8
    struct _RTL_BITMAP_EX Bitmap[2];// Offset=0x18 Size=0x20
    long ConcurrencyMaximum;// Offset=0x38 Size=0x4
    long ConcurrencyCount;// Offset=0x3c Size=0x4
};
