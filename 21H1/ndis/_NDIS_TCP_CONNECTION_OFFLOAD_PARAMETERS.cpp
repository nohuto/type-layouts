struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_OFFLOAD_ENCAPSULATION// Size=0x1c (Id=1518)
{
    union // Size=0x10 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        struct <unnamed-type-IPv4>// Size=0xc (Id=9148)
        {
            unsigned long Enabled;// Offset=0x0 Size=0x4
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
        struct _NDIS_OFFLOAD_ENCAPSULATION::<unnamed-type-IPv4> IPv4;// Offset=0x4 Size=0xc
        struct <unnamed-type-IPv6>// Size=0xc (Id=9153)
        {
            unsigned long Enabled;// Offset=0x0 Size=0x4
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
        struct _NDIS_OFFLOAD_ENCAPSULATION::<unnamed-type-IPv6> IPv6;// Offset=0x10 Size=0xc
    };
};

struct _NDIS_TCP_CONNECTION_OFFLOAD_PARAMETERS// Size=0x3c (Id=1377)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_OFFLOAD_ENCAPSULATION Encapsulation;// Offset=0x4 Size=0x1c
    unsigned long TicksPerSecond;// Offset=0x20 Size=0x4
    unsigned char TcpAckFrequency;// Offset=0x24 Size=0x1
    unsigned char TcpDelayedAckTicks;// Offset=0x25 Size=0x1
    unsigned char TcpMaximumRetransmissions;// Offset=0x26 Size=0x1
    unsigned char TcpDoubtReachabilityRetransmissions;// Offset=0x27 Size=0x1
    unsigned long TcpSwsPreventionTicks;// Offset=0x28 Size=0x4
    unsigned long TcpDuplicateAckThreshold;// Offset=0x2c Size=0x4
    unsigned long TcpPushTicks;// Offset=0x30 Size=0x4
    unsigned long NceStaleTicks;// Offset=0x34 Size=0x4
    unsigned long CongestionAlgorithm;// Offset=0x38 Size=0x4
};
