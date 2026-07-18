struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=313)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

struct _NDIS_OID_REQUEST// Size=0xf8 (Id=403)
{
    union // Size=0x20 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        enum _NDIS_REQUEST_TYPE RequestType;// Offset=0x4 Size=0x4
        unsigned long PortNumber;// Offset=0x8 Size=0x4
        unsigned int Timeout;// Offset=0xc Size=0x4
        void * RequestId;// Offset=0x10 Size=0x8
        void * RequestHandle;// Offset=0x18 Size=0x8
        union _REQUEST_DATA// Size=0x28 (Id=8209)
        {
            struct _QUERY// Size=0x20 (Id=8210)
            {
                unsigned long Oid;// Offset=0x0 Size=0x4
                void * InformationBuffer;// Offset=0x8 Size=0x8
                unsigned int InformationBufferLength;// Offset=0x10 Size=0x4
                unsigned int BytesWritten;// Offset=0x14 Size=0x4
                unsigned int BytesNeeded;// Offset=0x18 Size=0x4
            };
            struct _NDIS_OID_REQUEST::_REQUEST_DATA::_QUERY QUERY_INFORMATION;// Offset=0x0 Size=0x20
            struct _SET// Size=0x20 (Id=8217)
            {
                unsigned long Oid;// Offset=0x0 Size=0x4
                void * InformationBuffer;// Offset=0x8 Size=0x8
                unsigned int InformationBufferLength;// Offset=0x10 Size=0x4
                unsigned int BytesRead;// Offset=0x14 Size=0x4
                unsigned int BytesNeeded;// Offset=0x18 Size=0x4
            };
            struct _NDIS_OID_REQUEST::_REQUEST_DATA::_SET SET_INFORMATION;// Offset=0x0 Size=0x20
            struct _METHOD// Size=0x28 (Id=8224)
            {
                unsigned long Oid;// Offset=0x0 Size=0x4
                void * InformationBuffer;// Offset=0x8 Size=0x8
                unsigned long InputBufferLength;// Offset=0x10 Size=0x4
                unsigned long OutputBufferLength;// Offset=0x14 Size=0x4
                unsigned long MethodId;// Offset=0x18 Size=0x4
                unsigned int BytesWritten;// Offset=0x1c Size=0x4
                unsigned int BytesRead;// Offset=0x20 Size=0x4
                unsigned int BytesNeeded;// Offset=0x24 Size=0x4
            };
            struct _NDIS_OID_REQUEST::_REQUEST_DATA::_METHOD METHOD_INFORMATION;// Offset=0x0 Size=0x28
        };
    };
    union _NDIS_OID_REQUEST::_REQUEST_DATA DATA;// Offset=0x20 Size=0x28
    unsigned char NdisReserved[128];// Offset=0x48 Size=0x80
    unsigned char MiniportReserved[16];// Offset=0xc8 Size=0x10
    unsigned char SourceReserved[16];// Offset=0xd8 Size=0x10
    unsigned char SupportedRevision;// Offset=0xe8 Size=0x1
    unsigned char Reserved1;// Offset=0xe9 Size=0x1
    unsigned short Reserved2;// Offset=0xea Size=0x2
    unsigned long SwitchId;// Offset=0xec Size=0x4
    unsigned long VPortId;// Offset=0xf0 Size=0x4
    unsigned long Flags;// Offset=0xf4 Size=0x4
};
