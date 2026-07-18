struct _VPD_IDENTIFICATION_PAGE// Size=0x4 (Id=232)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char DeviceType:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char DeviceTypeQualifier:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char PageCode;// Offset=0x1 Size=0x1
    unsigned char Reserved;// Offset=0x2 Size=0x1
    unsigned char PageLength;// Offset=0x3 Size=0x1
    unsigned char Descriptors[0];
};
