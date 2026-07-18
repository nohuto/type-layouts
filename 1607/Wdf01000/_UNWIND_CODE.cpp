struct _unnamed_302// Size=0x2 (Id=302)
{
    unsigned char OffsetLow;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UnwindOp:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char OffsetHigh:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

union _UNWIND_CODE// Size=0x2 (Id=303)
{
    unsigned char CodeOffset;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UnwindOp:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char OpInfo:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    struct _unnamed_302 EpilogueCode;// Offset=0x0 Size=0x2
    unsigned short FrameOffset;// Offset=0x0 Size=0x2
};
