struct _unnamed_118// Size=0x8 (Id=118)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_118 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _KEY_NODE_INFORMATION// Size=0x20 (Id=2925)
{
    union _LARGE_INTEGER LastWriteTime;// Offset=0x0 Size=0x8
    unsigned long TitleIndex;// Offset=0x8 Size=0x4
    unsigned long ClassOffset;// Offset=0xc Size=0x4
    unsigned long ClassLength;// Offset=0x10 Size=0x4
    unsigned long NameLength;// Offset=0x14 Size=0x4
    wchar_t Name[1];// Offset=0x18 Size=0x2
};
