struct _NDIS_WAN_COMPRESS_INFO// Size=0x34 (Id=1746)
{
    unsigned char SessionKey[8];// Offset=0x0 Size=0x8
    unsigned long MSCompType;// Offset=0x8 Size=0x4
    unsigned char CompType;// Offset=0xc Size=0x1
    unsigned short CompLength;// Offset=0xe Size=0x2
    union // Size=0x24 (Id=0)
    {
        struct _NDIS_WAN_COMPRESS_INFO::_anonymous_1755::<unnamed-type-Proprietary> Proprietary;// Offset=0x10 Size=0x24
        struct _NDIS_WAN_COMPRESS_INFO::_anonymous_1756::<unnamed-type-Public> Public;// Offset=0x10 Size=0x20
    };
};

struct _NDIS_WAN_CO_GET_COMP_INFO// Size=0x68 (Id=626)
{
    struct _NDIS_WAN_COMPRESS_INFO SendCapabilities;// Offset=0x0 Size=0x34
    struct _NDIS_WAN_COMPRESS_INFO RecvCapabilities;// Offset=0x34 Size=0x34
};
