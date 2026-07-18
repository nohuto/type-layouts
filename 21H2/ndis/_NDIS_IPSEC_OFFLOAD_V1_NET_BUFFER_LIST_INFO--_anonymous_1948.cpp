union _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO::_anonymous_1948// Size=0x8 (Id=1948)
{
    union // Size=0x8 (Id=0)
    {
        struct <unnamed-type-Transmit>// Size=0x8 (Id=7128)
        {
            void * OffloadHandle;// Offset=0x0 Size=0x8
        };
        struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO::_anonymous_1949::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x8
        struct <unnamed-type-Receive>// Size=0x4 (Id=7131)
        {
            unsigned short SaDeleteReq:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short CryptoDone:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short NextCryptoDone:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
            unsigned short Pad:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
            unsigned short CryptoStatus;// Offset=0x2 Size=0x2
        };
        struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO::_anonymous_1950::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x4
    };
};
