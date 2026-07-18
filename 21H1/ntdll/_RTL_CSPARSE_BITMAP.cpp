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
