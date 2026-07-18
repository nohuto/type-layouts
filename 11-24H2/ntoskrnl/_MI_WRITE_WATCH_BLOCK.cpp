struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_WRITE_WATCH_BLOCK// Size=0x18 (Id=1713)
{
    long Lock;// Offset=0x0 Size=0x4
    struct _RTL_BITMAP_EX BitMap;// Offset=0x8 Size=0x10
};
