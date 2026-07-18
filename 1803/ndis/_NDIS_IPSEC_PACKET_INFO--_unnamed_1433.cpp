union _NDIS_IPSEC_PACKET_INFO::_unnamed_1433// Size=0x10 (Id=1433)
{
    union // Size=0x10 (Id=0)
    {
        struct <unnamed-type-Transmit>// Size=0x10 (Id=7431)
        {
            void * OffloadHandle;// Offset=0x0 Size=0x8
            void * NextOffloadHandle;// Offset=0x8 Size=0x8
        };
        struct _NDIS_IPSEC_PACKET_INFO::_unnamed_370::<unnamed-type-Transmit> Transmit;// Offset=0x0 Size=0x10
        struct <unnamed-type-Receive>// Size=0x8 (Id=7435)
        {
            unsigned long SA_DELETE_REQ:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long CRYPTO_DONE:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long NEXT_CRYPTO_DONE:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long CryptoStatus;// Offset=0x4 Size=0x4
        };
        struct _NDIS_IPSEC_PACKET_INFO::_unnamed_372::<unnamed-type-Receive> Receive;// Offset=0x0 Size=0x8
    };
};
