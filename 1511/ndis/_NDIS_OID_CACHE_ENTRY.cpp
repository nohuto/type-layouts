struct _NDIS_OID_CACHE_ENTRY// Size=0x18 (Id=898)
{
    unsigned long Oid;// Offset=0x0 Size=0x4
    unsigned int InfoBufferLength;// Offset=0x4 Size=0x4
    void * InfoBuffer;// Offset=0x8 Size=0x8
    int LastStatus;// Offset=0x10 Size=0x4
    unsigned char ValueValid;// Offset=0x14 Size=0x1
};
