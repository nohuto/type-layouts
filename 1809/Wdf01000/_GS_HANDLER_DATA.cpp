struct _unnamed_316// Size=0x4 (Id=316)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EHandler:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UHandler:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HasAlignment:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
};

union _unnamed_317// Size=0x4 (Id=317)
{
    struct _unnamed_316 Bits;// Offset=0x0 Size=0x4
    long CookieOffset;// Offset=0x0 Size=0x4
};

struct _GS_HANDLER_DATA// Size=0xc (Id=318)
{
    union _unnamed_317 u;// Offset=0x0 Size=0x4
    long AlignedBaseOffset;// Offset=0x4 Size=0x4
    long Alignment;// Offset=0x8 Size=0x4
};
