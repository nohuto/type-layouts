struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_TCP_CONNECTION_OFFLOAD// Size=0x14 (Id=1953)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Encapsulation;// Offset=0x4 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long SupportIPv4:2;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long SupportIPv6:2;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x2
        unsigned long SupportIPv6ExtensionHeaders:2;// Offset=0x8 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long SupportSack:2;// Offset=0x8 Size=0x4 BitOffset=0x6 BitSize=0x2
        unsigned long CongestionAlgorithm:4;// Offset=0x8 Size=0x4 BitOffset=0x8 BitSize=0x4
    };
    unsigned long TcpConnectionOffloadCapacity;// Offset=0xc Size=0x4
    unsigned long Flags;// Offset=0x10 Size=0x4
};
