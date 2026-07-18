struct _RTL_BITMAP_EX// Size=0x10 (Id=987)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DYNAMIC_BITMAP// Size=0x48 (Id=1571)
{
    struct _RTL_BITMAP_EX Bitmap;// Offset=0x0 Size=0x10
    unsigned long long MaximumSize;// Offset=0x10 Size=0x8
    unsigned long long Hint;// Offset=0x18 Size=0x8
    void * BaseVa;// Offset=0x20 Size=0x8
    unsigned long long SizeTopDown;// Offset=0x28 Size=0x8
    unsigned long long HintTopDown;// Offset=0x30 Size=0x8
    void * BaseVaTopDown;// Offset=0x38 Size=0x8
    unsigned long long SpinLock;// Offset=0x40 Size=0x8
};
