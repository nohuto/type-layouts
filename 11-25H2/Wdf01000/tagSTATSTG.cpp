union _ULARGE_INTEGER// Size=0x8 (Id=2149)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=20400)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        unsigned long HighPart;// Offset=0x4 Size=0x4
    };
    struct _ULARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _FILETIME// Size=0x8 (Id=2845)
{
    unsigned long dwLowDateTime;// Offset=0x0 Size=0x4
    unsigned long dwHighDateTime;// Offset=0x4 Size=0x4
};

struct _GUID// Size=0x10 (Id=118)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct tagSTATSTG// Size=0x50 (Id=784)
{
    wchar_t * pwcsName;// Offset=0x0 Size=0x8
    unsigned long type;// Offset=0x8 Size=0x4
    union _ULARGE_INTEGER cbSize;// Offset=0x10 Size=0x8
    struct _FILETIME mtime;// Offset=0x18 Size=0x8
    struct _FILETIME ctime;// Offset=0x20 Size=0x8
    struct _FILETIME atime;// Offset=0x28 Size=0x8
    unsigned long grfMode;// Offset=0x30 Size=0x4
    unsigned long grfLocksSupported;// Offset=0x34 Size=0x4
    struct _GUID clsid;// Offset=0x38 Size=0x10
    unsigned long grfStateBits;// Offset=0x48 Size=0x4
    unsigned long reserved;// Offset=0x4c Size=0x4
};
