struct _NDIS_OID_REQUEST::_REQUEST_DATA::_METHOD// Size=0x28 (Id=747)
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
