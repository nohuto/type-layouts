struct _NDIS_CO_SAP_BLOCK// Size=0x30 (Id=404)
{
    void * CallMgrContext;// Offset=0x0 Size=0x8
    void * ClientContext;// Offset=0x8 Size=0x8
    struct _NDIS_CO_AF_BLOCK * AfBlock;// Offset=0x10 Size=0x8
    struct CO_SAP * Sap;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    long References;// Offset=0x24 Size=0x4
    unsigned long long Lock;// Offset=0x28 Size=0x8
};
