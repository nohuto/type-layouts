struct _INQUIRYDATA// Size=0x68 (Id=231)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned char DeviceType:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char DeviceTypeQualifier:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
        unsigned char DeviceTypeModifier:7;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char RemovableMedia:1;// Offset=0x1 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char Versions;// Offset=0x2 Size=0x1
        struct // Size=0x2 (Id=0)
        {
            unsigned char ANSIVersion:3;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char ECMAVersion:3;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x3
            unsigned char ISOVersion:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            unsigned char ResponseDataFormat:4;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char HiSupport:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char NormACA:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char TerminateTask:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char AERC:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
    };
    unsigned char AdditionalLength;// Offset=0x4 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Reserved;// Offset=0x5 Size=0x1
        struct // Size=0x3 (Id=0)
        {
            unsigned char PROTECT:1;// Offset=0x5 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Reserved_1:2;// Offset=0x5 Size=0x1 BitOffset=0x1 BitSize=0x2
            unsigned char ThirdPartyCoppy:1;// Offset=0x5 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char TPGS:2;// Offset=0x5 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char ACC:1;// Offset=0x5 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char SCCS:1;// Offset=0x5 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char Addr16:1;// Offset=0x6 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Addr32:1;// Offset=0x6 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char AckReqQ:1;// Offset=0x6 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char MediumChanger:1;// Offset=0x6 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char MultiPort:1;// Offset=0x6 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char ReservedBit2:1;// Offset=0x6 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char EnclosureServices:1;// Offset=0x6 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char ReservedBit3:1;// Offset=0x6 Size=0x1 BitOffset=0x7 BitSize=0x1
            unsigned char SoftReset:1;// Offset=0x7 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char CommandQueue:1;// Offset=0x7 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char TransferDisable:1;// Offset=0x7 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char LinkedCommands:1;// Offset=0x7 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Synchronous:1;// Offset=0x7 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char Wide16Bit:1;// Offset=0x7 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Wide32Bit:1;// Offset=0x7 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char RelativeAddressing:1;// Offset=0x7 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
    };
    unsigned char VendorId[8];// Offset=0x8 Size=0x8
    unsigned char ProductId[16];// Offset=0x10 Size=0x10
    unsigned char ProductRevisionLevel[4];// Offset=0x20 Size=0x4
    unsigned char VendorSpecific[20];// Offset=0x24 Size=0x14
    unsigned char Reserved3[2];// Offset=0x38 Size=0x2
    unsigned short VersionDescriptors[8];// Offset=0x3a Size=0x10
    unsigned char Reserved4[30];// Offset=0x4a Size=0x1e
};
