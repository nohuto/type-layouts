struct _UNICODE_STRING// Size=0x10 (Id=39)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_PENDING_IM_INSTANCE// Size=0x20 (Id=1112)
{
    struct _NDIS_PENDING_IM_INSTANCE * Next;// Offset=0x0 Size=0x8
    void * Context;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING Name;// Offset=0x10 Size=0x10
};
