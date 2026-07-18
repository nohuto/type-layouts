union _unnamed_1143// Size=0x2 (Id=1143)
{
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short AllowScaling:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Disabled:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short Reserved:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
};

struct PROCESSOR_IDLESTATE_POLICY// Size=0x20 (Id=1144)
{
    unsigned short Revision;// Offset=0x0 Size=0x2
    union _unnamed_1143 Flags;// Offset=0x2 Size=0x2
    unsigned long PolicyCount;// Offset=0x4 Size=0x4
    struct PROCESSOR_IDLESTATE_INFO Policy[3];// Offset=0x8 Size=0x18
};
