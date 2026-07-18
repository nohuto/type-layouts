union _LARGE_INTEGER// Size=0x8 (Id=206)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=10311)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KEY_BASIC_INFORMATION// Size=0x18 (Id=2378)
{
    union _LARGE_INTEGER LastWriteTime;// Offset=0x0 Size=0x8
    unsigned long TitleIndex;// Offset=0x8 Size=0x4
    unsigned long NameLength;// Offset=0xc Size=0x4
    wchar_t Name[1];// Offset=0x10 Size=0x2
};
