struct _GET_CONFIGURATION// Size=0xa (Id=458)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char RequestType:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved1:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char StartingFeature[2];// Offset=0x2 Size=0x2
    unsigned char Reserved2[3];// Offset=0x4 Size=0x3
    unsigned char AllocationLength[2];// Offset=0x7 Size=0x2
    unsigned char Control;// Offset=0x9 Size=0x1
};
