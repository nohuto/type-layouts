struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _FREE_DISPLAY// Size=0x18 (Id=1401)
{
    unsigned long RealVectorSize;// Offset=0x0 Size=0x4
    unsigned long Hint;// Offset=0x4 Size=0x4
    struct _RTL_BITMAP Display;// Offset=0x8 Size=0x10
};
