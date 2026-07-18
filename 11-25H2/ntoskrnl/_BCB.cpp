struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _BITMAP_RANGE// Size=0x30 (Id=2470)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    long long BasePage;// Offset=0x10 Size=0x8
    unsigned long FirstDirtyPage;// Offset=0x18 Size=0x4
    unsigned long LastDirtyPage;// Offset=0x1c Size=0x4
    unsigned long DirtyPages;// Offset=0x20 Size=0x4
    unsigned long * Bitmap;// Offset=0x28 Size=0x8
};

struct _MBCB// Size=0xc0 (Id=2144)
{
    short NodeTypeCode;// Offset=0x0 Size=0x2
    short NodeIsInZone;// Offset=0x2 Size=0x2
    unsigned long PagesToWrite;// Offset=0x4 Size=0x4
    unsigned long DirtyPages;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    struct _LIST_ENTRY BitmapRanges;// Offset=0x10 Size=0x10
    long long ResumeWritePage;// Offset=0x20 Size=0x8
    long long MostRecentlyDirtiedPage;// Offset=0x28 Size=0x8
    struct _BITMAP_RANGE BitmapRange1;// Offset=0x30 Size=0x30
    struct _BITMAP_RANGE BitmapRange2;// Offset=0x60 Size=0x30
    struct _BITMAP_RANGE BitmapRange3;// Offset=0x90 Size=0x30
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _OWNER_ENTRY// Size=0x10 (Id=439)
{
    unsigned long long OwnerThread;// Offset=0x0 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long IoPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long OwnerReferenced:1;// Offset=0x8 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long IoQoSPriorityBoosted:1;// Offset=0x8 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long OwnerCount:29;// Offset=0x8 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long TableSize;// Offset=0x8 Size=0x4
    };
};

struct _ERESOURCE// Size=0x68 (Id=415)
{
    struct _LIST_ENTRY SystemResourcesList;// Offset=0x0 Size=0x10
    struct _OWNER_ENTRY * OwnerTable;// Offset=0x10 Size=0x8
    short ActiveCount;// Offset=0x18 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short Flag;// Offset=0x1a Size=0x2
        unsigned char ReservedLowFlags;// Offset=0x1a Size=0x1
    };
    unsigned char WaiterPriority;// Offset=0x1b Size=0x1
    void * SharedWaiters;// Offset=0x20 Size=0x8
    void * ExclusiveWaiters;// Offset=0x28 Size=0x8
    struct _OWNER_ENTRY OwnerEntry;// Offset=0x30 Size=0x10
    unsigned long ActiveEntries;// Offset=0x40 Size=0x4
    unsigned long ContentionCount;// Offset=0x44 Size=0x4
    unsigned long NumberOfSharedWaiters;// Offset=0x48 Size=0x4
    unsigned long NumberOfExclusiveWaiters;// Offset=0x4c Size=0x4
    char MiscFlags;// Offset=0x50 Size=0x1
    unsigned char Reserved1[3];// Offset=0x51 Size=0x3
    unsigned long ResourceTimeoutCount;// Offset=0x54 Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * Address;// Offset=0x58 Size=0x8
        unsigned long long CreatorBackTraceIndex;// Offset=0x58 Size=0x8
    };
    unsigned long long SpinLock;// Offset=0x60 Size=0x8
};

struct _BCB// Size=0xc0 (Id=1155)
{
    union // Size=0xc0 (Id=0)
    {
        struct _MBCB Dummy;// Offset=0x0 Size=0xc0
        short NodeTypeCode;// Offset=0x0 Size=0x2
        unsigned char Dirty;// Offset=0x2 Size=0x1
        unsigned char Reserved;// Offset=0x3 Size=0x1
        unsigned long ByteLength;// Offset=0x4 Size=0x4
        union _LARGE_INTEGER FileOffset;// Offset=0x8 Size=0x8
        struct _LIST_ENTRY BcbLinks;// Offset=0x10 Size=0x10
        union _LARGE_INTEGER BeyondLastByte;// Offset=0x20 Size=0x8
        union _LARGE_INTEGER OldestLsn;// Offset=0x28 Size=0x8
        union _LARGE_INTEGER NewestLsn;// Offset=0x30 Size=0x8
        struct _VACB * Vacb;// Offset=0x38 Size=0x8
        unsigned long PinCount;// Offset=0x40 Size=0x4
        struct _ERESOURCE Resource;// Offset=0x48 Size=0x68
        struct _SHARED_CACHE_MAP * SharedCacheMap;// Offset=0xb0 Size=0x8
        void * BaseAddress;// Offset=0xb8 Size=0x8
    };
};
