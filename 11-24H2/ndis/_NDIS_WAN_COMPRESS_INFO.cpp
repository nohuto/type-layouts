struct _NDIS_WAN_COMPRESS_INFO// Size=0x34 (Id=1965)
{
    unsigned char SessionKey[8];// Offset=0x0 Size=0x8
    unsigned long MSCompType;// Offset=0x8 Size=0x4
    unsigned char CompType;// Offset=0xc Size=0x1
    unsigned short CompLength;// Offset=0xe Size=0x2
    union // Size=0x24 (Id=0)
    {
        struct _NDIS_WAN_COMPRESS_INFO::_unnamed_1975::<unnamed-type-Proprietary> Proprietary;// Offset=0x10 Size=0x24
        struct _NDIS_WAN_COMPRESS_INFO::_unnamed_1976::<unnamed-type-Public> Public;// Offset=0x10 Size=0x20
    };
};
