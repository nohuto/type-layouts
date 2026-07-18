struct _UNICODE_STRING// Size=0x8 (Id=306)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x4 Size=0x4
};

struct _CURDIR// Size=0xc (Id=630)
{
    struct _UNICODE_STRING DosPath;// Offset=0x0 Size=0x8
    void * Handle;// Offset=0x8 Size=0x4
};
