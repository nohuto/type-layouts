struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _IPSEC_OFFLOAD_V2_OPERATION
{
    IPsecOffloadV2Ah=1,
    IPsecOffloadV2Esp=2,
    IPsecOffloadV2Max=3
};

struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO// Size=0x10 (Id=968)
{
    unsigned long Identifier;// Offset=0x0 Size=0x4
    unsigned long KeyLength;// Offset=0x4 Size=0x4
    unsigned long KeyOffsetBytes;// Offset=0x8 Size=0x4
    unsigned long AdditionalInfo;// Offset=0xc Size=0x4
};

struct _IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION// Size=0x30 (Id=660)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    enum _IPSEC_OFFLOAD_V2_OPERATION Operation;// Offset=0x4 Size=0x4
    unsigned long Spi;// Offset=0x8 Size=0x4
    struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO AuthenticationAlgorithm;// Offset=0xc Size=0x10
    struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO EncryptionAlgorithm;// Offset=0x1c Size=0x10
    unsigned long SequenceNumberHighOrder;// Offset=0x2c Size=0x4
};

struct _IPSEC_OFFLOAD_V2_ADD_SA// Size=0xb0 (Id=909)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _IPSEC_OFFLOAD_V2_ADD_SA * Next;// Offset=0x8 Size=0x8
    unsigned long NumExtHdrs;// Offset=0x10 Size=0x4
    unsigned long Flags;// Offset=0x14 Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _IPSEC_OFFLOAD_V2_ADD_SA::_anonymous_1898::<unnamed-type-IPv4Endpoints> IPv4Endpoints;// Offset=0x18 Size=0x8
        struct _IPSEC_OFFLOAD_V2_ADD_SA::_anonymous_1899::<unnamed-type-IPv6Endpoints> IPv6Endpoints;// Offset=0x18 Size=0x20
    };
    void * OffloadHandle;// Offset=0x38 Size=0x8
    unsigned long UdpEspEncapsulation;// Offset=0x40 Size=0x4
    struct _IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION SecAssoc[2];// Offset=0x44 Size=0x60
    unsigned long KeyLength;// Offset=0xa4 Size=0x4
    unsigned char KeyData[1];// Offset=0xa8 Size=0x1
};
