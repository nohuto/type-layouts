struct _unnamed_73// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=74)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_73 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KEY_FULL_INFORMATION// Size=0x30 (Id=3180)
{
    union _LARGE_INTEGER LastWriteTime;// Offset=0x0 Size=0x8
    unsigned long TitleIndex;// Offset=0x8 Size=0x4
    unsigned long ClassOffset;// Offset=0xc Size=0x4
    unsigned long ClassLength;// Offset=0x10 Size=0x4
    unsigned long SubKeys;// Offset=0x14 Size=0x4
    unsigned long MaxNameLen;// Offset=0x18 Size=0x4
    unsigned long MaxClassLen;// Offset=0x1c Size=0x4
    unsigned long Values;// Offset=0x20 Size=0x4
    unsigned long MaxValueNameLen;// Offset=0x24 Size=0x4
    unsigned long MaxValueDataLen;// Offset=0x28 Size=0x4
    wchar_t Class[1];// Offset=0x2c Size=0x2
};
