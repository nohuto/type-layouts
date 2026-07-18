struct _UNICODE_STRING// Size=0x10 (Id=187)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_PCW_DATA_BLOCK// Size=0x100 (Id=599)
{
    unsigned long DatapathEventReferences[26];// Offset=0x0 Size=0x68
    unsigned long DatapathCycleReferences[13];// Offset=0x68 Size=0x34
    struct _NDIS_PCW_DATA_BLOCK * Next;// Offset=0xa0 Size=0x8
    unsigned long ReferenceCount;// Offset=0xa8 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0xb0 Size=0x8
    unsigned long TotalInstanceId;// Offset=0xb8 Size=0x4
    struct _UNICODE_STRING TotalInstanceName;// Offset=0xc0 Size=0x10
};
