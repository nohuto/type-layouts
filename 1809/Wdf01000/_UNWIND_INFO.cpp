struct _unnamed_311// Size=0x2 (Id=311)
{
    unsigned char OffsetLow;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UnwindOp:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char OffsetHigh:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
};

union _UNWIND_CODE// Size=0x2 (Id=312)
{
    unsigned char CodeOffset;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char UnwindOp:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char OpInfo:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    struct _unnamed_311 EpilogueCode;// Offset=0x0 Size=0x2
    unsigned short FrameOffset;// Offset=0x0 Size=0x2
};

struct _UNWIND_INFO// Size=0x6 (Id=320)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Version:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char Flags:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char SizeOfProlog;// Offset=0x1 Size=0x1
    unsigned char CountOfCodes;// Offset=0x2 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char FrameRegister:4;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char FrameOffset:4;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    union _UNWIND_CODE UnwindCode[1];// Offset=0x4 Size=0x2
};
