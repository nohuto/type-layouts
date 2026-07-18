struct _EISA_PORT_DESCRIPTOR// Size=0x1 (Id=3755)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char NumberPorts:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Shared:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MoreEntries:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _EISA_PORT_CONFIGURATION// Size=0x3 (Id=3702)
{
    struct _EISA_PORT_DESCRIPTOR Configuration;// Offset=0x0 Size=0x1
    unsigned short PortAddress;// Offset=0x1 Size=0x2
};
