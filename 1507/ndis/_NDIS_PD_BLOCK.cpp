struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_PD_BLOCK// Size=0x58 (Id=539)
{
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x0 Size=0x8
    unsigned long DiagnosticCode;// Offset=0x8 Size=0x4
    unsigned char PDEnabledRegistryValue;// Offset=0xc Size=0x1
    unsigned char PDBuffersManagedByDriver;// Offset=0xd Size=0x1
    unsigned char PDNonDmaAdapter;// Offset=0xe Size=0x1
    unsigned long PDDomainId;// Offset=0x10 Size=0x4
    unsigned long PDDmaAddressWidth;// Offset=0x14 Size=0x4
    struct _NDIS_PD_CONFIG * PDCurrentConfig;// Offset=0x18 Size=0x8
    unsigned long PDCurrentConfigSize;// Offset=0x20 Size=0x4
    unsigned long PDCurrentConfigBufferSize;// Offset=0x24 Size=0x4
    struct _LIST_ENTRY PDClientList;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY PDBlockListLink;// Offset=0x38 Size=0x10
    void * PDBMDomain;// Offset=0x48 Size=0x8
    struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ * PDBMDomainMemberHandle;// Offset=0x50 Size=0x8
};
