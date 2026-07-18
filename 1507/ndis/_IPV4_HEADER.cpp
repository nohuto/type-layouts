struct _IPV4_HEADER// Size=0x14 (Id=146)
{
    union // Size=0x1 (Id=0)
    {
        unsigned char VersionAndHeaderLength;// Offset=0x0 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char HeaderLength:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char Version:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
        };
    };
    union // Size=0x1 (Id=0)
    {
        unsigned char TypeOfServiceAndEcnField;// Offset=0x1 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char EcnField:2;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x2
            unsigned char TypeOfService:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
        };
    };
    unsigned short TotalLength;// Offset=0x2 Size=0x2
    unsigned short Identification;// Offset=0x4 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short FlagsAndOffset;// Offset=0x6 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short DontUse1:5;// Offset=0x6 Size=0x2 BitOffset=0x0 BitSize=0x5
            unsigned short MoreFragments:1;// Offset=0x6 Size=0x2 BitOffset=0x5 BitSize=0x1
            unsigned short DontFragment:1;// Offset=0x6 Size=0x2 BitOffset=0x6 BitSize=0x1
            unsigned short Reserved:1;// Offset=0x6 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short DontUse2:8;// Offset=0x6 Size=0x2 BitOffset=0x8 BitSize=0x8
        };
    };
    unsigned char TimeToLive;// Offset=0x8 Size=0x1
    unsigned char Protocol;// Offset=0x9 Size=0x1
    unsigned short HeaderChecksum;// Offset=0xa Size=0x2
    struct in_addr SourceAddress;// Offset=0xc Size=0x4
    struct in_addr DestinationAddress;// Offset=0x10 Size=0x4
};
