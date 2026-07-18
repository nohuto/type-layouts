union _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO::_anonymous_1138// Size=0x8 (Id=1138)
{
    union // Size=0x8 (Id=0)
    {
        struct <unnamed-type-Transmit>// Size=0x8 (Id=7561)
        {
            void * OffloadHandle;// Offset=0x0 Size=0x8
        };
        struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO::_anonymous_394::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x8
        struct <unnamed-type-Receive>// Size=0x4 (Id=7564)
        {
            unsigned short SaDeleteReq:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short CryptoDone:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short NextCryptoDone:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short Pad:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
            unsigned short CryptoStatus;// Offset=0x2 Size=0x2
        };
        struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO::_anonymous_396::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x4
    };
};
