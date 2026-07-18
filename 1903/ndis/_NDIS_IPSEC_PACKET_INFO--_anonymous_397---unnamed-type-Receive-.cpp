struct _NDIS_IPSEC_PACKET_INFO::_anonymous_397::<unnamed-type-Receive>// Size=0x8 (Id=397)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SA_DELETE_REQ:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CRYPTO_DONE:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NEXT_CRYPTO_DONE:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
    };
    unsigned long CryptoStatus;// Offset=0x4 Size=0x4
};
