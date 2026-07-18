struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _OBJECT_SYMBOLIC_LINK// Size=0x28 (Id=1230)
{
    union _LARGE_INTEGER CreationTime;// Offset=0x0 Size=0x8
    union // Size=0x10 (Id=0)
    {
        struct _UNICODE_STRING LinkTarget;// Offset=0x8 Size=0x10
        long  ( * Callback)(struct _OBJECT_SYMBOLIC_LINK * ,void * ,struct _UNICODE_STRING * ,void ** );// Offset=0x8 Size=0x8
    };
    void * CallbackContext;// Offset=0x10 Size=0x8
    unsigned long DosDeviceDriveIndex;// Offset=0x18 Size=0x4
    unsigned long Flags;// Offset=0x1c Size=0x4
    unsigned long AccessMask;// Offset=0x20 Size=0x4
};
