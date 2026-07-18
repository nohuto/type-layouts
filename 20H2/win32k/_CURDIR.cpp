struct _UNICODE_STRING// Size=0x10 (Id=233)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _CURDIR// Size=0x18 (Id=524)
{
    struct _UNICODE_STRING DosPath;// Offset=0x0 Size=0x10
    void * Handle;// Offset=0x10 Size=0x8
};
