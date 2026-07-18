struct _RTL_BITMAP// Size=0x10 (Id=30)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

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

struct _EX_PUSH_LOCK// Size=0x8 (Id=76)
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

struct _HVIEW_MAP_PIN_LOG_ENTRY// Size=0x48 (Id=1370)
{
    unsigned long ViewOffset;// Offset=0x0 Size=0x4
    unsigned char Pinned;// Offset=0x4 Size=0x1
    unsigned long long PinMask;// Offset=0x8 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x10 Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _HVIEW_MAP_PIN_LOG// Size=0x488 (Id=1188)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];// Offset=0x8 Size=0x480
};

struct _HVIEW_MAP// Size=0x4b0 (Id=785)
{
    unsigned long MappedLength;// Offset=0x0 Size=0x4
    struct _EX_PUSH_LOCK Lock;// Offset=0x8 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x10 Size=0x8
    struct _HVIEW_MAP_DIRECTORY * Directory;// Offset=0x18 Size=0x8
    unsigned long PagesCharged;// Offset=0x20 Size=0x4
    struct _HVIEW_MAP_PIN_LOG PinLog;// Offset=0x28 Size=0x488
};

struct _FREE_DISPLAY// Size=0x18 (Id=1387)
{
    unsigned long RealVectorSize;// Offset=0x0 Size=0x4
    unsigned long Hint;// Offset=0x4 Size=0x4
    struct _RTL_BITMAP Display;// Offset=0x8 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DUAL// Size=0x278 (Id=1170)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _HMAP_DIRECTORY * Map;// Offset=0x8 Size=0x8
    struct _HMAP_TABLE * SmallDir;// Offset=0x10 Size=0x8
    unsigned long Guard;// Offset=0x18 Size=0x4
    struct _FREE_DISPLAY FreeDisplay[24];// Offset=0x20 Size=0x240
    struct _LIST_ENTRY FreeBins;// Offset=0x260 Size=0x10
    unsigned long FreeSummary;// Offset=0x270 Size=0x4
};

struct _HHIVE// Size=0xa68 (Id=770)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    struct _CELL_DATA *  ( * GetCellRoutine)(struct _HHIVE * ,unsigned long ,struct _HV_GET_CELL_CONTEXT * );// Offset=0x8 Size=0x8
    void  ( * ReleaseCellRoutine)(struct _HHIVE * ,struct _HV_GET_CELL_CONTEXT * );// Offset=0x10 Size=0x8
    void *  ( * Allocate)(unsigned long ,unsigned char ,unsigned long );// Offset=0x18 Size=0x8
    void  ( * Free)(void * ,unsigned long );// Offset=0x20 Size=0x8
    unsigned char  ( * FileWrite)(struct _HHIVE * ,unsigned long ,struct CMP_OFFSET_ARRAY * ,unsigned long ,unsigned long * ,unsigned long );// Offset=0x28 Size=0x8
    unsigned char  ( * FileRead)(struct _HHIVE * ,unsigned long ,unsigned long * ,void * ,unsigned long );// Offset=0x30 Size=0x8
    void * HiveLoadFailure;// Offset=0x38 Size=0x8
    struct _HBASE_BLOCK * BaseBlock;// Offset=0x40 Size=0x8
    struct _RTL_BITMAP DirtyVector;// Offset=0x48 Size=0x10
    unsigned long DirtyCount;// Offset=0x58 Size=0x4
    unsigned long DirtyAlloc;// Offset=0x5c Size=0x4
    struct _RTL_BITMAP UnreconciledVector;// Offset=0x60 Size=0x10
    unsigned long UnreconciledCount;// Offset=0x70 Size=0x4
    unsigned long BaseBlockAlloc;// Offset=0x74 Size=0x4
    unsigned long Cluster;// Offset=0x78 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Flat:1;// Offset=0x7c Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ReadOnly:1;// Offset=0x7c Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char SystemCacheBacked:1;// Offset=0x7c Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:5;// Offset=0x7c Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char DirtyFlag;// Offset=0x7d Size=0x1
    unsigned long HvBinHeadersUse;// Offset=0x80 Size=0x4
    unsigned long HvFreeCellsUse;// Offset=0x84 Size=0x4
    unsigned long HvUsedCellsUse;// Offset=0x88 Size=0x4
    unsigned long CmUsedCellsUse;// Offset=0x8c Size=0x4
    unsigned long HiveFlags;// Offset=0x90 Size=0x4
    unsigned long CurrentLog;// Offset=0x94 Size=0x4
    unsigned long CurrentLogSequence;// Offset=0x98 Size=0x4
    unsigned long CurrentLogMinimumSequence;// Offset=0x9c Size=0x4
    unsigned long CurrentLogOffset;// Offset=0xa0 Size=0x4
    unsigned long MinimumLogSequence;// Offset=0xa4 Size=0x4
    unsigned long LogFileSizeCap;// Offset=0xa8 Size=0x4
    unsigned char LogDataPresent[2];// Offset=0xac Size=0x2
    unsigned char PrimaryFileValid;// Offset=0xae Size=0x1
    unsigned char BaseBlockDirty;// Offset=0xaf Size=0x1
    union _LARGE_INTEGER LastLogSwapTime;// Offset=0xb0 Size=0x8
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short FirstLogFile:3;// Offset=0xb8 Size=0x2 BitOffset=0x0 BitSize=0x3
            unsigned short SecondLogFile:3;// Offset=0xb8 Size=0x2 BitOffset=0x3 BitSize=0x3
            unsigned short HeaderRecovered:1;// Offset=0xb8 Size=0x2 BitOffset=0x6 BitSize=0x1
            unsigned short LegacyRecoveryIndicated:1;// Offset=0xb8 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short RecoveryInformationReserved:8;// Offset=0xb8 Size=0x2 BitOffset=0x8 BitSize=0x8
        };
        unsigned short RecoveryInformation;// Offset=0xb8 Size=0x2
    };
    unsigned char LogEntriesRecovered[2];// Offset=0xba Size=0x2
    unsigned long RefreshCount;// Offset=0xbc Size=0x4
    unsigned long StorageTypeCount;// Offset=0xc0 Size=0x4
    unsigned long Version;// Offset=0xc4 Size=0x4
    struct _HVIEW_MAP ViewMap;// Offset=0xc8 Size=0x4b0
    struct _DUAL Storage[2];// Offset=0x578 Size=0x4f0
};
