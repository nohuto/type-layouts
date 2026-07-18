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

struct _UNICODE_STRING// Size=0x10 (Id=192)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _OBJECT_SYMBOLIC_LINK// Size=0x28 (Id=807)
{
    union _LARGE_INTEGER CreationTime;// Offset=0x0 Size=0x8
    struct _UNICODE_STRING LinkTarget;// Offset=0x8 Size=0x10
    unsigned long DosDeviceDriveIndex;// Offset=0x18 Size=0x4
    unsigned long Flags;// Offset=0x1c Size=0x4
    unsigned long AccessMask;// Offset=0x20 Size=0x4
};
