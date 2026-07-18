struct _UNICODE_STRING// Size=0x10 (Id=36)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_BIND_PATHS// Size=0x18 (Id=755)
{
    unsigned int Number;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING Paths[1];// Offset=0x8 Size=0x10
};
