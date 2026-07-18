struct _NDIS_CLIENT_CHARACTERISTICS// Size=0x98 (Id=697)
{
    unsigned char MajorVersion;// Offset=0x0 Size=0x1
    unsigned char MinorVersion;// Offset=0x1 Size=0x1
    unsigned short Filler;// Offset=0x2 Size=0x2
    unsigned int Reserved;// Offset=0x4 Size=0x4
    int  ( * ClCreateVcHandler)(void * ,void * ,void ** );// Offset=0x8 Size=0x8
    int  ( * ClDeleteVcHandler)(void * );// Offset=0x10 Size=0x8
    int  ( * ClRequestHandler)(void * ,void * ,void * ,struct _NDIS_REQUEST * );// Offset=0x18 Size=0x8
    void  ( * ClRequestCompleteHandler)(int ,void * ,void * ,void * ,struct _NDIS_REQUEST * );// Offset=0x20 Size=0x8
    void  ( * ClOpenAfCompleteHandler)(int ,void * ,void * );// Offset=0x28 Size=0x8
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
};
