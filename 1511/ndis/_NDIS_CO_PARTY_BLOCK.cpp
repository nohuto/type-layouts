struct _NDIS_CO_PARTY_BLOCK// Size=0x28 (Id=343)
{
    struct _NDIS_CO_VC_PTR_BLOCK * VcPtr;// Offset=0x0 Size=0x8
    void * CallMgrContext;// Offset=0x8 Size=0x8
    void * ClientContext;// Offset=0x10 Size=0x8
    void  ( * ClIncomingDropPartyHandler)(int ,void * ,void * ,unsigned int );// Offset=0x18 Size=0x8
    void  ( * ClDropPartyCompleteHandler)(int ,void * );// Offset=0x20 Size=0x8
};
