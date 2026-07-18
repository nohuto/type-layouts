struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO::_anonymous_1953::<unnamed-type-Receive>// Size=0x4 (Id=1953)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SaDeleteReq:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short CryptoDone:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short NextCryptoDone:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Pad:13;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
    unsigned short CryptoStatus;// Offset=0x2 Size=0x2
};
