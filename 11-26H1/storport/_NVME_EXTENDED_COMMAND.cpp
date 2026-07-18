struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=513)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SLIST_ENTRY// Size=0x10 (Id=449)
{
    struct _SLIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

union _unnamed_723// Size=0x4 (Id=723)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long InUse:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Zombie:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long IsAsyncEventRequest:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved0:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _NVME_EXTENDED_COMMAND// Size=0x80 (Id=724)
{
    struct _NVME_COMMAND_EXTENSION * CommandExt;// Offset=0x0 Size=0x8
    union _LARGE_INTEGER CommandExtPhysicalAddress;// Offset=0x8 Size=0x8
    struct _SLIST_ENTRY Entry;// Offset=0x10 Size=0x10
    struct _SLIST_ENTRY CommandQueueEntry;// Offset=0x20 Size=0x10
    union _unnamed_723 State;// Offset=0x30 Size=0x4
    unsigned short TimeoutInSeconds;// Offset=0x34 Size=0x2
    unsigned short SQID;// Offset=0x36 Size=0x2
    void * ScatterGatherBuffer;// Offset=0x38 Size=0x8
    unsigned long InitiatingProcessor;// Offset=0x40 Size=0x4
    unsigned long CDW0Snapshot;// Offset=0x44 Size=0x4
    unsigned long CDW10Snapshot;// Offset=0x48 Size=0x4
    unsigned long CDW11Snapshot;// Offset=0x4c Size=0x4
    union _LARGE_INTEGER Timestamp;// Offset=0x50 Size=0x8
};
