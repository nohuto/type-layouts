struct _NDIS_CALL_MANAGER_CHARACTERISTICS// Size=0x88 (Id=914)
{
    unsigned char MajorVersion;// Offset=0x0 Size=0x1
    unsigned char MinorVersion;// Offset=0x1 Size=0x1
    unsigned short Filler;// Offset=0x2 Size=0x2
    unsigned int Reserved;// Offset=0x4 Size=0x4
    int  ( * CmCreateVcHandler)(void * ,void * ,void ** );// Offset=0x8 Size=0x8
    int  ( * CmDeleteVcHandler)(void * );// Offset=0x10 Size=0x8
    int  ( * CmOpenAfHandler)(void * ,struct CO_ADDRESS_FAMILY * ,void * ,void ** );// Offset=0x18 Size=0x8
    int  ( * CmCloseAfHandler)(void * );// Offset=0x20 Size=0x8
    int  ( * CmRegisterSapHandler)(void * ,struct CO_SAP * ,void * ,void ** );// Offset=0x28 Size=0x8
    int  ( * CmDeregisterSapHandler)(void * );// Offset=0x30 Size=0x8
    int  ( * CmMakeCallHandler)(void * ,struct _CO_CALL_PARAMETERS * ,void * ,void ** );// Offset=0x38 Size=0x8
    int  ( * CmCloseCallHandler)(void * ,void * ,void * ,unsigned int );// Offset=0x40 Size=0x8
    void  ( * CmIncomingCallCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x48 Size=0x8
    int  ( * CmAddPartyHandler)(void * ,struct _CO_CALL_PARAMETERS * ,void * ,void ** );// Offset=0x50 Size=0x8
    int  ( * CmDropPartyHandler)(void * ,void * ,unsigned int );// Offset=0x58 Size=0x8
    void  ( * CmActivateVcCompleteHandler)(int ,void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x60 Size=0x8
    void  ( * CmDeactivateVcCompleteHandler)(int ,void * );// Offset=0x68 Size=0x8
    int  ( * CmModifyCallQoSHandler)(void * ,struct _CO_CALL_PARAMETERS * );// Offset=0x70 Size=0x8
    int  ( * CmRequestHandler)(void * ,void * ,void * ,struct _NDIS_REQUEST * );// Offset=0x78 Size=0x8
    void  ( * CmRequestCompleteHandler)(int ,void * ,void * ,void * ,struct _NDIS_REQUEST * );// Offset=0x80 Size=0x8
};
