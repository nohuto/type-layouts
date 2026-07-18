struct _unnamed_307// Size=0x4 (Id=307)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EHandler:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UHandler:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HasAlignment:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

union _unnamed_308// Size=0x4 (Id=308)
{
    struct _unnamed_307 Bits;// Offset=0x0 Size=0x4
    long CookieOffset;// Offset=0x0 Size=0x4
};
