struct _NDIS_CLIENT_CHARACTERISTICS// Size=0x98 (Id=947)
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

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=236)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS// Size=0xa0 (Id=534)
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

enum _NDIS_REQUEST_TYPE
{
    NdisRequestQueryInformation=0,
    NdisRequestSetInformation=1,
    NdisRequestQueryStatistics=2,
    NdisRequestOpen=3,
    NdisRequestClose=4,
    NdisRequestSend=5,
    NdisRequestTransferData=6,
    NdisRequestReset=7,
    NdisRequestGeneric1=8,
    NdisRequestGeneric2=9,
    NdisRequestGeneric3=10,
    NdisRequestGeneric4=11,
    NdisRequestMethod=12
};

struct _NDIS_REQUEST// Size=0xb0 (Id=909)
{
    union // Size=0x24 (Id=0)
    {
        unsigned char MacReserved[32];// Offset=0x0 Size=0x20
        enum _NDIS_REQUEST_TYPE RequestType;// Offset=0x20 Size=0x4
        union _DATA// Size=0x20 (Id=11052)
        {
            struct _QUERY_INFORMATION// Size=0x20 (Id=11053)
            {
                unsigned long Oid;// Offset=0x0 Size=0x4
                void * InformationBuffer;// Offset=0x8 Size=0x8
                unsigned int InformationBufferLength;// Offset=0x10 Size=0x4
                unsigned int BytesWritten;// Offset=0x14 Size=0x4
                unsigned int BytesNeeded;// Offset=0x18 Size=0x4
            };
            struct _NDIS_REQUEST::_DATA::_QUERY_INFORMATION QUERY_INFORMATION;// Offset=0x0 Size=0x20
            struct _SET_INFORMATION// Size=0x20 (Id=11060)
            {
                unsigned long Oid;// Offset=0x0 Size=0x4
                void * InformationBuffer;// Offset=0x8 Size=0x8
                unsigned int InformationBufferLength;// Offset=0x10 Size=0x4
                unsigned int BytesRead;// Offset=0x14 Size=0x4
                unsigned int BytesNeeded;// Offset=0x18 Size=0x4
            };
            struct _NDIS_REQUEST::_DATA::_SET_INFORMATION SET_INFORMATION;// Offset=0x0 Size=0x20
        };
        union _NDIS_REQUEST::_DATA DATA;// Offset=0x28 Size=0x20
    };
    unsigned char NdisReserved[72];// Offset=0x48 Size=0x48
    union // Size=0x10 (Id=0)
    {
        unsigned char CallMgrReserved[16];// Offset=0x90 Size=0x10
        unsigned char ProtocolReserved[16];// Offset=0x90 Size=0x10
    };
    unsigned char MiniportReserved[16];// Offset=0xa0 Size=0x10
};

struct _NDIS_CO_AF_BLOCK// Size=0x258 (Id=566)
{
    struct _NDIS_CO_AF_BLOCK * NextAf;// Offset=0x0 Size=0x8
    unsigned long Flags;// Offset=0x8 Size=0x4
    long References;// Offset=0xc Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x10 Size=0x8
    struct _NDIS_CALL_MANAGER_CHARACTERISTICS * CallMgrEntries;// Offset=0x18 Size=0x8
    struct _NDIS_CO_CALL_MANAGER_OPTIONAL_HANDLERS * CallMgrChars;// Offset=0x20 Size=0x8
    struct _NDIS_OPEN_BLOCK * CallMgrOpen;// Offset=0x28 Size=0x8
    void * CallMgrContext;// Offset=0x30 Size=0x8
    struct _NDIS_CLIENT_CHARACTERISTICS ClientEntries;// Offset=0x38 Size=0x98
    struct _NDIS_CO_CLIENT_OPTIONAL_HANDLERS ClientChars;// Offset=0xd0 Size=0xa0
    struct _NDIS_OPEN_BLOCK * ClientOpen;// Offset=0x170 Size=0x8
    void * ClientContext;// Offset=0x178 Size=0x8
    unsigned long long Lock;// Offset=0x180 Size=0x8
    unsigned long CmMajorNdisVersion;// Offset=0x188 Size=0x4
    unsigned long ClMajorNdisVersion;// Offset=0x18c Size=0x4
    struct _NDIS_REQUEST * Ndis5CmRequest;// Offset=0x190 Size=0x8
    struct _NDIS_REQUEST Request;// Offset=0x198 Size=0xb0
    struct _NDIS_REQUEST * CloseAfNdisRequest;// Offset=0x248 Size=0x8
    unsigned char CloseAfRequested;// Offset=0x250 Size=0x1
};
