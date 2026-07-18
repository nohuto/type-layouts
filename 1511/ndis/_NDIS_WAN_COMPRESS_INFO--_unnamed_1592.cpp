union _NDIS_WAN_COMPRESS_INFO::_unnamed_1592// Size=0x24 (Id=1592)
{
    union // Size=0x24 (Id=0)
    {
        struct <unnamed-type-Proprietary>// Size=0x24 (Id=10090)
        {
            unsigned char CompOUI[3];// Offset=0x0 Size=0x3
            unsigned char CompSubType;// Offset=0x3 Size=0x1
            unsigned char CompValues[32];// Offset=0x4 Size=0x20
        };
        struct _NDIS_WAN_COMPRESS_INFO::_unnamed_1593::<unnamed-type-Proprietary> Proprietary;// Offset=0x0 Size=0x24
        struct <unnamed-type-Public>// Size=0x20 (Id=10095)
        {
            unsigned char CompValues[32];// Offset=0x0 Size=0x20
        };
        struct _NDIS_WAN_COMPRESS_INFO::_unnamed_1594::<unnamed-type-Public> Public;// Offset=0x0 Size=0x20
    };
};
