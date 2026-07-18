union _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO::_anonymous_1735// Size=0x8 (Id=1735)
{
    union // Size=0x8 (Id=0)
    {
        struct <unnamed-type-Transmit>// Size=0x8 (Id=7265)
        {
            void * OffloadHandle;// Offset=0x0 Size=0x8
        };
        struct _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO::_anonymous_1736::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x8
        struct <unnamed-type-Receive>// Size=0x4 (Id=7268)
        {
            unsigned long SaDeleteReq:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long CryptoDone:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long NextCryptoDone:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Reserved:13;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xd
            unsigned long CryptoStatus:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
        };
        struct _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO::_anonymous_1737::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x4
    };
};
