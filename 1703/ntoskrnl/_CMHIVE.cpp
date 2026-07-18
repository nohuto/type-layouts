struct _RTL_BITMAP// Size=0x10 (Id=32)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_30// Size=0x8 (Id=30)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_30 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=83)
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

struct _HVIEW_MAP_PIN_LOG_ENTRY// Size=0x48 (Id=1522)
{
    unsigned long ViewOffset;// Offset=0x0 Size=0x4
    unsigned char Pinned;// Offset=0x4 Size=0x1
    unsigned long long PinMask;// Offset=0x8 Size=0x8
    struct _KTHREAD * Thread;// Offset=0x10 Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _HVIEW_MAP_PIN_LOG// Size=0x488 (Id=1272)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];// Offset=0x8 Size=0x480
};

struct _HVIEW_MAP// Size=0x4b0 (Id=1176)
{
    unsigned long MappedLength;// Offset=0x0 Size=0x4
    struct _EX_PUSH_LOCK Lock;// Offset=0x8 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x10 Size=0x8
    struct _HVIEW_MAP_DIRECTORY * Directory;// Offset=0x18 Size=0x8
    unsigned long PagesCharged;// Offset=0x20 Size=0x4
    struct _HVIEW_MAP_PIN_LOG PinLog;// Offset=0x28 Size=0x488
};

struct _FREE_DISPLAY// Size=0x18 (Id=1064)
{
    unsigned long RealVectorSize;// Offset=0x0 Size=0x4
    unsigned long Hint;// Offset=0x4 Size=0x4
    struct _RTL_BITMAP Display;// Offset=0x8 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DUAL// Size=0x278 (Id=646)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _HMAP_DIRECTORY * Map;// Offset=0x8 Size=0x8
    struct _HMAP_TABLE * SmallDir;// Offset=0x10 Size=0x8
    unsigned long Guard;// Offset=0x18 Size=0x4
    struct _FREE_DISPLAY FreeDisplay[24];// Offset=0x20 Size=0x240
    struct _LIST_ENTRY FreeBins;// Offset=0x260 Size=0x10
    unsigned long FreeSummary;// Offset=0x270 Size=0x4
};

struct _HHIVE// Size=0xa68 (Id=240)
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

struct _EX_RUNDOWN_REF// Size=0x8 (Id=180)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _UNICODE_STRING// Size=0x10 (Id=197)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _CM_WORKITEM// Size=0x28 (Id=1284)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long Private;// Offset=0x10 Size=0x4
    void  ( * WorkerRoutine)(void * );// Offset=0x18 Size=0x8
    void * Parameter;// Offset=0x20 Size=0x8
};

enum _CM_DIRTY_VECTOR_OPERATION
{
    DirtyVectorModified=0,
    DirtyDataCaptureStart=1,
    DirtyDataCaptureEnd=2
};

struct _unnamed_1502// Size=0x8 (Id=1502)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _unnamed_1503// Size=0x8 (Id=1503)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _unnamed_1504// Size=0x8 (Id=1504)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _unnamed_1505// Size=0x8 (Id=1505)
{
    struct _unnamed_1502 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _unnamed_1503 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _unnamed_1504 Raw;// Offset=0x0 Size=0x8
};

struct _CM_DIRTY_VECTOR_LOG_ENTRY// Size=0x48 (Id=1506)
{
    struct _ETHREAD * Thread;// Offset=0x0 Size=0x8
    enum _CM_DIRTY_VECTOR_OPERATION Operation;// Offset=0x8 Size=0x4
    union _unnamed_1505 Data;// Offset=0xc Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _CM_DIRTY_VECTOR_LOG// Size=0x488 (Id=1481)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];// Offset=0x8 Size=0x480
};

struct _HIVE_WRITE_WAIT_QUEUE// Size=0x18 (Id=937)
{
    struct _ETHREAD * ActiveThread;// Offset=0x0 Size=0x8
    struct _HIVE_WAIT_PACKET * WaitList;// Offset=0x8 Size=0x8
    unsigned long OwnerBoosted;// Offset=0x10 Size=0x4
};

struct _CMHIVE// Size=0x17a8 (Id=889)
{
    struct _HHIVE Hive;// Offset=0x0 Size=0xa68
    void * FileHandles[6];// Offset=0xa68 Size=0x30
    struct _LIST_ENTRY NotifyList;// Offset=0xa98 Size=0x10
    struct _LIST_ENTRY HiveList;// Offset=0xaa8 Size=0x10
    struct _LIST_ENTRY PreloadedHiveList;// Offset=0xab8 Size=0x10
    struct _LIST_ENTRY FailedUnloadList;// Offset=0xac8 Size=0x10
    struct _EX_RUNDOWN_REF HiveRundown;// Offset=0xad8 Size=0x8
    struct _LIST_ENTRY ParseCacheEntries;// Offset=0xae0 Size=0x10
    struct _CM_KEY_HASH_TABLE_ENTRY * KcbCacheTable;// Offset=0xaf0 Size=0x8
    unsigned long KcbCacheTableSize;// Offset=0xaf8 Size=0x4
    struct _CM_KEY_HASH_TABLE_ENTRY * DeletedKcbTable;// Offset=0xb00 Size=0x8
    unsigned long DeletedKcbTableSize;// Offset=0xb08 Size=0x4
    unsigned long Identity;// Offset=0xb0c Size=0x4
    struct _FAST_MUTEX * HiveLock;// Offset=0xb10 Size=0x8
    struct _FAST_MUTEX * WriterLock;// Offset=0xb18 Size=0x8
    struct _ERESOURCE * FlusherLock;// Offset=0xb20 Size=0x8
    struct _RTL_BITMAP FlushDirtyVector;// Offset=0xb28 Size=0x10
    unsigned long FlushDirtyVectorSize;// Offset=0xb38 Size=0x4
    unsigned char * FlushLogEntry;// Offset=0xb40 Size=0x8
    unsigned long FlushLogEntrySize;// Offset=0xb48 Size=0x4
    unsigned long FlushHiveTruncated;// Offset=0xb4c Size=0x4
    unsigned char FlushBaseBlockDirty;// Offset=0xb50 Size=0x1
    struct _RTL_BITMAP CapturedUnreconciledVector;// Offset=0xb58 Size=0x10
    unsigned long CapturedUnreconciledVectorSize;// Offset=0xb68 Size=0x4
    struct CMP_OFFSET_ARRAY * UnreconciledOffsetArray;// Offset=0xb70 Size=0x8
    unsigned long UnreconciledOffsetArrayCount;// Offset=0xb78 Size=0x4
    struct _HBASE_BLOCK * UnreconciledBaseBlock;// Offset=0xb80 Size=0x8
    struct _EX_PUSH_LOCK SecurityLock;// Offset=0xb88 Size=0x8
    unsigned long UseCount;// Offset=0xb90 Size=0x4
    unsigned long LastShrinkHiveSize;// Offset=0xb94 Size=0x4
    union _LARGE_INTEGER ActualFileSize;// Offset=0xb98 Size=0x8
    union _LARGE_INTEGER LogFileSizes[2];// Offset=0xba0 Size=0x10
    struct _UNICODE_STRING FileFullPath;// Offset=0xbb0 Size=0x10
    struct _UNICODE_STRING FileUserName;// Offset=0xbc0 Size=0x10
    struct _UNICODE_STRING HiveRootPath;// Offset=0xbd0 Size=0x10
    unsigned long SecurityCount;// Offset=0xbe0 Size=0x4
    unsigned long SecurityCacheSize;// Offset=0xbe4 Size=0x4
    long SecurityHitHint;// Offset=0xbe8 Size=0x4
    struct _CM_KEY_SECURITY_CACHE_ENTRY * SecurityCache;// Offset=0xbf0 Size=0x8
    struct _LIST_ENTRY SecurityHash[64];// Offset=0xbf8 Size=0x400
    unsigned long UnloadEventCount;// Offset=0xff8 Size=0x4
    struct _KEVENT ** UnloadEventArray;// Offset=0x1000 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * RootKcb;// Offset=0x1008 Size=0x8
    unsigned char Frozen;// Offset=0x1010 Size=0x1
    struct _CM_WORKITEM * UnloadWorkItem;// Offset=0x1018 Size=0x8
    struct _CM_WORKITEM UnloadWorkItemHolder;// Offset=0x1020 Size=0x28
    unsigned char GrowOnlyMode;// Offset=0x1048 Size=0x1
    unsigned long GrowOffset;// Offset=0x104c Size=0x4
    struct _LIST_ENTRY KcbConvertListHead;// Offset=0x1050 Size=0x10
    struct _CM_CELL_REMAP_BLOCK * CellRemapArray;// Offset=0x1060 Size=0x8
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;// Offset=0x1068 Size=0x488
    unsigned long Flags;// Offset=0x14f0 Size=0x4
    struct _LIST_ENTRY TrustClassEntry;// Offset=0x14f8 Size=0x10
    unsigned long long DirtyTime;// Offset=0x1508 Size=0x8
    unsigned long long UnreconciledTime;// Offset=0x1510 Size=0x8
    struct _CM_RM * CmRm;// Offset=0x1518 Size=0x8
    unsigned long CmRmInitFailPoint;// Offset=0x1520 Size=0x4
    long CmRmInitFailStatus;// Offset=0x1524 Size=0x4
    struct _KTHREAD * CreatorOwner;// Offset=0x1528 Size=0x8
    struct _KTHREAD * RundownThread;// Offset=0x1530 Size=0x8
    union _LARGE_INTEGER LastWriteTime;// Offset=0x1538 Size=0x8
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;// Offset=0x1540 Size=0x18
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;// Offset=0x1558 Size=0x18
    union // Size=0x4 (Id=0)
    {
        unsigned long FlushFlags;// Offset=0x1570 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long FlushActive:1;// Offset=0x1570 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ReconcileActive:1;// Offset=0x1570 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long PrimaryFilePurged:1;// Offset=0x1570 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DiskFileBad:1;// Offset=0x1570 Size=0x4 BitOffset=0x3 BitSize=0x1
        };
    };
    unsigned long PrimaryFileSizeBeforeLastFlush;// Offset=0x1574 Size=0x4
    long ReferenceCount;// Offset=0x1578 Size=0x4
    long UnloadHistoryIndex;// Offset=0x157c Size=0x4
    unsigned long UnloadHistory[128];// Offset=0x1580 Size=0x200
    unsigned long BootStart;// Offset=0x1780 Size=0x4
    unsigned long UnaccessedStart;// Offset=0x1784 Size=0x4
    unsigned long UnaccessedEnd;// Offset=0x1788 Size=0x4
    unsigned long LoadedKeyCount;// Offset=0x178c Size=0x4
    unsigned long HandleClosePending;// Offset=0x1790 Size=0x4
    struct _EX_PUSH_LOCK HandleClosePendingEvent;// Offset=0x1798 Size=0x8
    unsigned char FinalFlushSucceeded;// Offset=0x17a0 Size=0x1
    unsigned char FailedUnload;// Offset=0x17a1 Size=0x1
};
