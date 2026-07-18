struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY// Size=0x8 (Id=248)
{
    unsigned long BeginAddress;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long UnwindData;// Offset=0x4 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Flag:2;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long FunctionLength:11;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0xb
            unsigned long RegF:3;// Offset=0x4 Size=0x4 BitOffset=0xd BitSize=0x3
            unsigned long RegI:4;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x4
            unsigned long H:1;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long CR:2;// Offset=0x4 Size=0x4 BitOffset=0x15 BitSize=0x2
            unsigned long FrameSize:9;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x9
        };
    };
};
