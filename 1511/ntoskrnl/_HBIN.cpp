struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _HBIN// Size=0x20 (Id=558)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long FileOffset;// Offset=0x4 Size=0x4
    unsigned long Size;// Offset=0x8 Size=0x4
    unsigned long Reserved1[2];// Offset=0xc Size=0x8
    union _LARGE_INTEGER TimeStamp;// Offset=0x14 Size=0x8
    unsigned long Spare;// Offset=0x1c Size=0x4
};
