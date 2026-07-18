union _NDIS_REQUEST::_DATA// Size=0x20 (Id=1366)
{
    struct _QUERY_INFORMATION// Size=0x20 (Id=10967)
    {
        unsigned long Oid;// Offset=0x0 Size=0x4
        void * InformationBuffer;// Offset=0x8 Size=0x8
        unsigned int InformationBufferLength;// Offset=0x10 Size=0x4
        unsigned int BytesWritten;// Offset=0x14 Size=0x4
        unsigned int BytesNeeded;// Offset=0x18 Size=0x4
    };
    struct _NDIS_REQUEST::_DATA::_QUERY_INFORMATION QUERY_INFORMATION;// Offset=0x0 Size=0x20
    struct _SET_INFORMATION// Size=0x20 (Id=10974)
    {
        unsigned long Oid;// Offset=0x0 Size=0x4
        void * InformationBuffer;// Offset=0x8 Size=0x8
        unsigned int InformationBufferLength;// Offset=0x10 Size=0x4
        unsigned int BytesRead;// Offset=0x14 Size=0x4
        unsigned int BytesNeeded;// Offset=0x18 Size=0x4
    };
    struct _NDIS_REQUEST::_DATA::_SET_INFORMATION SET_INFORMATION;// Offset=0x0 Size=0x20
};
