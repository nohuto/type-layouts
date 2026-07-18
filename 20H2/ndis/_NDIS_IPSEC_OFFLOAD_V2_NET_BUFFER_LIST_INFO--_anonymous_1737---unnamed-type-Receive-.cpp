struct _NDIS_IPSEC_OFFLOAD_V2_NET_BUFFER_LIST_INFO::_anonymous_1737::<unnamed-type-Receive>// Size=0x4 (Id=1737)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SaDeleteReq:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CryptoDone:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NextCryptoDone:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:13;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xd
        unsigned long CryptoStatus:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
};
