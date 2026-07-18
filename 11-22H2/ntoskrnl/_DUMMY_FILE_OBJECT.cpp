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

struct _QUAD// Size=0x8 (Id=512)
{
    union // Size=0x8 (Id=0)
    {
        long long UseThisFieldToCopy;// Offset=0x0 Size=0x8
        float DoNotUseThisField;// Offset=0x0 Size=0x8
    };
};

struct _OBJECT_HEADER// Size=0x38 (Id=961)
{
    long long PointerCount;// Offset=0x0 Size=0x8
    union // Size=0x8 (Id=0)
    {
        long long HandleCount;// Offset=0x8 Size=0x8
        void * NextToFree;// Offset=0x8 Size=0x8
    };
    struct _EX_PUSH_LOCK Lock;// Offset=0x10 Size=0x8
    unsigned char TypeIndex;// Offset=0x18 Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char TraceFlags;// Offset=0x19 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char DbgRefTrace:1;// Offset=0x19 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char DbgTracePermanent:1;// Offset=0x19 Size=0x1 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned char InfoMask;// Offset=0x1a Size=0x1
    union // Size=0x1 (Id=0)
    {
        unsigned char Flags;// Offset=0x1b Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char NewObject:1;// Offset=0x1b Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char KernelObject:1;// Offset=0x1b Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char KernelOnlyAccess:1;// Offset=0x1b Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ExclusiveObject:1;// Offset=0x1b Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PermanentObject:1;// Offset=0x1b Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DefaultSecurityQuota:1;// Offset=0x1b Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char SingleHandleEntry:1;// Offset=0x1b Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char DeletedInline:1;// Offset=0x1b Size=0x1 BitOffset=0x7 BitSize=0x1
        };
    };
    unsigned long Reserved;// Offset=0x1c Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _OBJECT_CREATE_INFORMATION * ObjectCreateInfo;// Offset=0x20 Size=0x8
        void * QuotaBlockCharged;// Offset=0x20 Size=0x8
    };
    void * SecurityDescriptor;// Offset=0x28 Size=0x8
    struct _QUAD Body;// Offset=0x30 Size=0x8
};

struct _DUMMY_FILE_OBJECT// Size=0x110 (Id=1074)
{
    struct _OBJECT_HEADER ObjectHeader;// Offset=0x0 Size=0x38
    char FileObjectBody[216];// Offset=0x38 Size=0xd8
};
