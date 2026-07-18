union _LARGE_INTEGER// Size=0x8 (Id=1084)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=13869)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KEY_CACHED_INFORMATION// Size=0x28 (Id=3218)
{
    union _LARGE_INTEGER LastWriteTime;// Offset=0x0 Size=0x8
    unsigned long TitleIndex;// Offset=0x8 Size=0x4
    unsigned long SubKeys;// Offset=0xc Size=0x4
    unsigned long MaxNameLen;// Offset=0x10 Size=0x4
    unsigned long Values;// Offset=0x14 Size=0x4
    unsigned long MaxValueNameLen;// Offset=0x18 Size=0x4
    unsigned long MaxValueDataLen;// Offset=0x1c Size=0x4
    unsigned long NameLength;// Offset=0x20 Size=0x4
};
