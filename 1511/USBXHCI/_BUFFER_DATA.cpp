struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=58)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TRACKING_DATA// Size=0x20 (Id=501)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long Tag;// Offset=0x10 Size=0x4
    void * Owner;// Offset=0x18 Size=0x8
};

struct _BUFFER_DATA// Size=0x50 (Id=405)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char * VirtualAddress;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LogicalAddress;// Offset=0x18 Size=0x8
    struct WDFCOMMONBUFFER__ * WdfCommonBuffer;// Offset=0x20 Size=0x8
    unsigned long Size;// Offset=0x28 Size=0x4
    struct _TRACKING_DATA TrackingData;// Offset=0x30 Size=0x20
};
