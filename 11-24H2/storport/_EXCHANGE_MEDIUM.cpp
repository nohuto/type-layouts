struct _EXCHANGE_MEDIUM// Size=0xc (Id=1182)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransportElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char SourceElementAddress[2];// Offset=0x4 Size=0x2
    unsigned char Destination1ElementAddress[2];// Offset=0x6 Size=0x2
    unsigned char Destination2ElementAddress[2];// Offset=0x8 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Flip1:1;// Offset=0xa Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Flip2:1;// Offset=0xa Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved3:6;// Offset=0xa Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char Control;// Offset=0xb Size=0x1
};
