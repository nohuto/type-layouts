union _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO::_unnamed_1674// Size=0x8 (Id=1674)
{
    union // Size=0x8 (Id=0)
    {
        struct <unnamed-type-Transmit>// Size=0x8 (Id=7437)
        {
            void * OffloadHandle;// Offset=0x0 Size=0x8
        };
        struct _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO::_unnamed_1675::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x8
        struct <unnamed-type-Receive>// Size=0x4 (Id=7440)
        {
            unsigned long SaDeleteReq:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long CryptoDone:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long NextCryptoDone:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long Reserved:13;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xd
            unsigned long CryptoStatus:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
        };
        struct _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO::_unnamed_1676::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x4
    };
};
