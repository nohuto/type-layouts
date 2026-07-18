struct _DESCRIPTOR_SENSE_DATA// Size=0x9 (Id=135)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned char ErrorCode:7;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Reserved1:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char SenseKey:4;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved2:4;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned char AdditionalSenseCode;// Offset=0x2 Size=0x1
    unsigned char AdditionalSenseCodeQualifier;// Offset=0x3 Size=0x1
    unsigned char Reserved3[3];// Offset=0x4 Size=0x3
    unsigned char AdditionalSenseLength;// Offset=0x7 Size=0x1
    unsigned char DescriptorBuffer[1];// Offset=0x8 Size=0x1
};
