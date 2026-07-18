struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS// Size=0xa0 (Id=363)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    int  ( * ClCreateVcHandler)(void * ,void * ,void ** );// Offset=0x8 Size=0x8
    int  ( * ClDeleteVcHandler)(void * );// Offset=0x10 Size=0x8
    int  ( * ClOidRequestHandler)(void * ,void * ,void * ,struct _NDIS_OID_REQUEST * );// Offset=0x18 Size=0x8
    void  ( * ClOidRequestCompleteHandler)(void * ,void * ,void * ,struct _NDIS_OID_REQUEST * ,int );// Offset=0x20 Size=0x8
    void  ( * ClOpenAfCompleteHandlerEx)(void * ,void * ,int );// Offset=0x28 Size=0x8
    void  ( * ClCloseAfCompleteHandler)(int ,void * );// Offset=0x30 Size=0x8
    void  ( * ClRegisterSapCompleteHandler)(int ,void * ,struct CO_SAP * ,void * );// Offset=0x38 Size=0x8
    void  ( * ClDeregisterSapCompleteHandler)(int ,void * );// Offset=0x40 Size=0x8
    void  ( * ClMakeCallCompleteHandler)(int ,void * ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x48 Size=0x8
    void  ( * ClModifyCallQoSCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x50 Size=0x8
    void  ( * ClCloseCallCompleteHandler)(int ,void * ,void * );// Offset=0x58 Size=0x8
    void  ( * ClAddPartyCompleteHandler)(int ,void * ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x60 Size=0x8
    void  ( * ClDropPartyCompleteHandler)(int ,void * );// Offset=0x68 Size=0x8
    int  ( * ClIncomingCallHandler)(void * ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x70 Size=0x8
    void  ( * ClIncomingCallQoSChangeHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x78 Size=0x8
    void  ( * ClIncomingCloseCallHandler)(int ,void * ,void * ,unsigned int );// Offset=0x80 Size=0x8
    void  ( * ClIncomingDropPartyHandler)(int ,void * ,void * ,unsigned int );// Offset=0x88 Size=0x8
    void  ( * ClCallConnectedHandler)(void * );// Offset=0x90 Size=0x8
    int  ( * ClNotifyCloseAfHandler)(void * );// Offset=0x98 Size=0x8
};
