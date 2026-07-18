union _LARGE_INTEGER// Size=0x8 (Id=371)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12031)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TRANSACTION_PROPERTIES_INFORMATION// Size=0x20 (Id=3334)
{
    unsigned long IsolationLevel;// Offset=0x0 Size=0x4
    unsigned long IsolationFlags;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER Timeout;// Offset=0x8 Size=0x8
    unsigned long Outcome;// Offset=0x10 Size=0x4
    unsigned long DescriptionLength;// Offset=0x14 Size=0x4
    wchar_t Description[1];// Offset=0x18 Size=0x2
};
