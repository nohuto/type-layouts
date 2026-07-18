enum _IPSEC_OFFLOAD_V2_OPERATION
{
    IPsecOffloadV2Ah=1,
    IPsecOffloadV2Esp=2,
    IPsecOffloadV2Max=3
};

struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO// Size=0x10 (Id=1038)
{
    unsigned long Identifier;// Offset=0x0 Size=0x4
    unsigned long KeyLength;// Offset=0x4 Size=0x4
    unsigned long KeyOffsetBytes;// Offset=0x8 Size=0x4
    unsigned long AdditionalInfo;// Offset=0xc Size=0x4
};

struct _IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION// Size=0x30 (Id=739)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    enum _IPSEC_OFFLOAD_V2_OPERATION Operation;// Offset=0x4 Size=0x4
    unsigned long Spi;// Offset=0x8 Size=0x4
    struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO AuthenticationAlgorithm;// Offset=0xc Size=0x10
    struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO EncryptionAlgorithm;// Offset=0x1c Size=0x10
    unsigned long SequenceNumberHighOrder;// Offset=0x2c Size=0x4
};
