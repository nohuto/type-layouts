struct _POSITION_TO_ELEMENT// Size=0xa (Id=374)
{
    unsigned char OperationCode;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved1:5;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char LogicalUnitNumber:3;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
    unsigned char TransportElementAddress[2];// Offset=0x2 Size=0x2
    unsigned char DestinationElementAddress[2];// Offset=0x4 Size=0x2
    unsigned char Reserved2[2];// Offset=0x6 Size=0x2
    struct // Size=0x1 (Id=0)
    {
        unsigned char Flip:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved3:7;// Offset=0x8 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char Control;// Offset=0x9 Size=0x1
};
