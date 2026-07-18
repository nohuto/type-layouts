struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=253)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _FSRTL_ADVANCED_FCB_HEADER// Size=0x78 (Id=631)
{
    short NodeTypeCode;// Offset=0x0 Size=0x2
    short NodeByteSize;// Offset=0x2 Size=0x2
    unsigned char Flags;// Offset=0x4 Size=0x1
    unsigned char IsFastIoPossible;// Offset=0x5 Size=0x1
    unsigned char Flags2;// Offset=0x6 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char Reserved:4;// Offset=0x7 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Version:4;// Offset=0x7 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    struct _ERESOURCE * Resource;// Offset=0x8 Size=0x8
    struct _ERESOURCE * PagingIoResource;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER AllocationSize;// Offset=0x18 Size=0x8
    union _LARGE_INTEGER FileSize;// Offset=0x20 Size=0x8
    union _LARGE_INTEGER ValidDataLength;// Offset=0x28 Size=0x8
    struct _FAST_MUTEX * FastMutex;// Offset=0x30 Size=0x8
    struct _LIST_ENTRY FilterContexts;// Offset=0x38 Size=0x10
    struct _EX_PUSH_LOCK PushLock;// Offset=0x48 Size=0x8
    void ** FileContextSupportPointer;// Offset=0x50 Size=0x8
    union // Size=0x8 (Id=0)
    {
        void * Oplock;// Offset=0x58 Size=0x8
        void * ReservedForRemote;// Offset=0x58 Size=0x8
    };
    void * AePushLock;// Offset=0x60 Size=0x8
    unsigned long BypassIoOpenCount;// Offset=0x68 Size=0x4
    struct _FSRTL_PER_STREAM_CONTEXT * ReservedContext;// Offset=0x70 Size=0x8
};
