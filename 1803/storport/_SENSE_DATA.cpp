struct _SENSE_DATA// Size=0x12 (Id=124)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ErrorCode:7;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char Valid:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char SegmentNumber;// Offset=0x1 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char SenseKey:4;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Reserved:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char IncorrectLength:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char EndOfMedia:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char FileMark:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char Information[4];// Offset=0x3 Size=0x4
    unsigned char AdditionalSenseLength;// Offset=0x7 Size=0x1
    unsigned char CommandSpecificInformation[4];// Offset=0x8 Size=0x4
    unsigned char AdditionalSenseCode;// Offset=0xc Size=0x1
    unsigned char AdditionalSenseCodeQualifier;// Offset=0xd Size=0x1
    unsigned char FieldReplaceableUnitCode;// Offset=0xe Size=0x1
    unsigned char SenseKeySpecific[3];// Offset=0xf Size=0x3
};
