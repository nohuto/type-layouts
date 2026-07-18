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

struct _NDIS_REQUEST// Size=0xb0 (Id=584)
{
    union // Size=0x24 (Id=0)
    {
        unsigned char MacReserved[32];// Offset=0x0 Size=0x20
        enum _NDIS_REQUEST_TYPE RequestType;// Offset=0x20 Size=0x4
        union _DATA// Size=0x20 (Id=9586)
        {
            struct _QUERY_INFORMATION// Size=0x20 (Id=9587)
            {
                unsigned long Oid;// Offset=0x0 Size=0x4
                void * InformationBuffer;// Offset=0x8 Size=0x8
                unsigned int InformationBufferLength;// Offset=0x10 Size=0x4
                unsigned int BytesWritten;// Offset=0x14 Size=0x4
                unsigned int BytesNeeded;// Offset=0x18 Size=0x4
            };
            struct _NDIS_REQUEST::_DATA::_QUERY_INFORMATION QUERY_INFORMATION;// Offset=0x0 Size=0x20
            struct _SET_INFORMATION// Size=0x20 (Id=9594)
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
