struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD// Size=0x2 (Id=1650)
{
    union // Size=0x1 (Id=0)
    {
        struct <unnamed-type-IPv4>// Size=0x1 (Id=9971)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
        };
        struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD::<unnamed-type-IPv4> IPv4;// Offset=0x0 Size=0x1
        struct <unnamed-type-IPv6>// Size=0x1 (Id=9974)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
        };
    };
    struct _NDIS_TCP_RECV_SEG_COALESCE_OFFLOAD::<unnamed-type-IPv6> IPv6;// Offset=0x1 Size=0x1
};
