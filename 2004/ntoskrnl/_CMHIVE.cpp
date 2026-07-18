struct _CMSI_RW_LOCK// Size=0x8 (Id=1110)
{
    void * Reserved;// Offset=0x0 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

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

struct _RTL_RB_TREE// Size=0x10 (Id=118)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _HVP_VIEW_MAP// Size=0x38 (Id=1172)
{
    void * SectionReference;// Offset=0x0 Size=0x8
    long long StorageEndFileOffset;// Offset=0x8 Size=0x8
    long long SectionEndFileOffset;// Offset=0x10 Size=0x8
    struct _CMSI_PROCESS_TUPLE * ProcessTuple;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    struct _RTL_RB_TREE ViewTree;// Offset=0x28 Size=0x10
};

struct _FREE_DISPLAY// Size=0x18 (Id=1536)
{
    unsigned long RealVectorSize;// Offset=0x0 Size=0x4
    unsigned long Hint;// Offset=0x4 Size=0x4
    struct _RTL_BITMAP Display;// Offset=0x8 Size=0x10
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DUAL// Size=0x278 (Id=1037)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _HMAP_DIRECTORY * Map;// Offset=0x8 Size=0x8
    struct _HMAP_TABLE * SmallDir;// Offset=0x10 Size=0x8
    unsigned long Guard;// Offset=0x18 Size=0x4
    struct _FREE_DISPLAY FreeDisplay[24];// Offset=0x20 Size=0x240
    struct _LIST_ENTRY FreeBins;// Offset=0x260 Size=0x10
    unsigned long FreeSummary;// Offset=0x270 Size=0x4
};

struct _HHIVE// Size=0x600 (Id=560)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    struct _CELL_DATA *  ( * GetCellRoutine)(struct _HHIVE * ,unsigned long ,struct _HV_GET_CELL_CONTEXT * );// Offset=0x8 Size=0x8
    void  ( * ReleaseCellRoutine)(struct _HHIVE * ,struct _HV_GET_CELL_CONTEXT * );// Offset=0x10 Size=0x8
    void *  ( * Allocate)(unsigned long ,unsigned char ,unsigned long );// Offset=0x18 Size=0x8
    void  ( * Free)(void * ,unsigned long );// Offset=0x20 Size=0x8
    long  ( * FileWrite)(struct _HHIVE * ,unsigned long ,struct CMP_OFFSET_ARRAY * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    long  ( * FileRead)(struct _HHIVE * ,unsigned long ,unsigned long ,void * ,unsigned long );// Offset=0x30 Size=0x8
    void * HiveLoadFailure;// Offset=0x38 Size=0x8
    struct _HBASE_BLOCK * BaseBlock;// Offset=0x40 Size=0x8
    struct _CMSI_RW_LOCK FlusherLock;// Offset=0x48 Size=0x8
    struct _CMSI_RW_LOCK WriterLock;// Offset=0x50 Size=0x8
    struct _RTL_BITMAP DirtyVector;// Offset=0x58 Size=0x10
    unsigned long DirtyCount;// Offset=0x68 Size=0x4
    unsigned long DirtyAlloc;// Offset=0x6c Size=0x4
    struct _RTL_BITMAP UnreconciledVector;// Offset=0x70 Size=0x10
    unsigned long UnreconciledCount;// Offset=0x80 Size=0x4
    unsigned long BaseBlockAlloc;// Offset=0x84 Size=0x4
    unsigned long Cluster;// Offset=0x88 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char Flat:1;// Offset=0x8c Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ReadOnly:1;// Offset=0x8c Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x8c Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char DirtyFlag;// Offset=0x8d Size=0x1
    unsigned long HvBinHeadersUse;// Offset=0x90 Size=0x4
    unsigned long HvFreeCellsUse;// Offset=0x94 Size=0x4
    unsigned long HvUsedCellsUse;// Offset=0x98 Size=0x4
    unsigned long CmUsedCellsUse;// Offset=0x9c Size=0x4
    unsigned long HiveFlags;// Offset=0xa0 Size=0x4
    unsigned long CurrentLog;// Offset=0xa4 Size=0x4
    unsigned long CurrentLogSequence;// Offset=0xa8 Size=0x4
    unsigned long CurrentLogMinimumSequence;// Offset=0xac Size=0x4
    unsigned long CurrentLogOffset;// Offset=0xb0 Size=0x4
    unsigned long MinimumLogSequence;// Offset=0xb4 Size=0x4
    unsigned long LogFileSizeCap;// Offset=0xb8 Size=0x4
    unsigned char LogDataPresent[2];// Offset=0xbc Size=0x2
    unsigned char PrimaryFileValid;// Offset=0xbe Size=0x1
    unsigned char BaseBlockDirty;// Offset=0xbf Size=0x1
    union _LARGE_INTEGER LastLogSwapTime;// Offset=0xc0 Size=0x8
    union // Size=0x2 (Id=0)
    {
        struct // Size=0x2 (Id=0)
        {
            unsigned short FirstLogFile:3;// Offset=0xc8 Size=0x2 BitOffset=0x0 BitSize=0x3
            unsigned short SecondLogFile:3;// Offset=0xc8 Size=0x2 BitOffset=0x3 BitSize=0x3
            unsigned short HeaderRecovered:1;// Offset=0xc8 Size=0x2 BitOffset=0x6 BitSize=0x1
            unsigned short LegacyRecoveryIndicated:1;// Offset=0xc8 Size=0x2 BitOffset=0x7 BitSize=0x1
            unsigned short RecoveryInformationReserved:8;// Offset=0xc8 Size=0x2 BitOffset=0x8 BitSize=0x8
        };
        unsigned short RecoveryInformation;// Offset=0xc8 Size=0x2
    };
    unsigned char LogEntriesRecovered[2];// Offset=0xca Size=0x2
    unsigned long RefreshCount;// Offset=0xcc Size=0x4
    unsigned long StorageTypeCount;// Offset=0xd0 Size=0x4
    unsigned long Version;// Offset=0xd4 Size=0x4
    struct _HVP_VIEW_MAP ViewMap;// Offset=0xd8 Size=0x38
    struct _DUAL Storage[2];// Offset=0x110 Size=0x4f0
};

struct _EX_RUNDOWN_REF// Size=0x8 (Id=456)
{
    union // Size=0x8 (Id=0)
    {
        unsigned long long Count;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
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

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _CM_WORKITEM// Size=0x28 (Id=1198)
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

struct _anonymous_1265// Size=0x8 (Id=1265)
{
    unsigned long Start;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
};

struct _anonymous_1266// Size=0x8 (Id=1266)
{
    unsigned long RangeCount;// Offset=0x0 Size=0x4
    unsigned long SetBitCount;// Offset=0x4 Size=0x4
};

struct _anonymous_1267// Size=0x8 (Id=1267)
{
    unsigned long Context1;// Offset=0x0 Size=0x4
    unsigned long Context2;// Offset=0x4 Size=0x4
};

union _anonymous_1268// Size=0x8 (Id=1268)
{
    struct _anonymous_1265 DirtyVectorModifiedContext;// Offset=0x0 Size=0x8
    struct _anonymous_1266 DirtyDataCaptureContext;// Offset=0x0 Size=0x8
    struct _anonymous_1267 Raw;// Offset=0x0 Size=0x8
};

struct _CM_DIRTY_VECTOR_LOG_ENTRY// Size=0x48 (Id=1269)
{
    struct _ETHREAD * Thread;// Offset=0x0 Size=0x8
    enum _CM_DIRTY_VECTOR_OPERATION Operation;// Offset=0x8 Size=0x4
    union _anonymous_1268 Data;// Offset=0xc Size=0x8
    void * Stack[6];// Offset=0x18 Size=0x30
};

struct _CM_DIRTY_VECTOR_LOG// Size=0x488 (Id=1167)
{
    unsigned long Next;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];// Offset=0x8 Size=0x480
};

struct _HIVE_WRITE_WAIT_QUEUE// Size=0x10 (Id=1175)
{
    struct _ETHREAD * ActiveThread;// Offset=0x0 Size=0x8
    struct _HIVE_WAIT_PACKET * WaitList;// Offset=0x8 Size=0x8
};

struct _CMHIVE// Size=0x12e8 (Id=568)
{
    struct _HHIVE Hive;// Offset=0x0 Size=0x600
    void * FileHandles[6];// Offset=0x600 Size=0x30
    struct _LIST_ENTRY NotifyList;// Offset=0x630 Size=0x10
    struct _LIST_ENTRY HiveList;// Offset=0x640 Size=0x10
    struct _LIST_ENTRY PreloadedHiveList;// Offset=0x650 Size=0x10
    struct _EX_RUNDOWN_REF HiveRundown;// Offset=0x660 Size=0x8
    struct _CM_KEY_HASH_TABLE_ENTRY * KcbCacheTable;// Offset=0x668 Size=0x8
    unsigned long KcbCacheTableSize;// Offset=0x670 Size=0x4
    struct _CM_KEY_HASH_TABLE_ENTRY * DeletedKcbTable;// Offset=0x678 Size=0x8
    unsigned long DeletedKcbTableSize;// Offset=0x680 Size=0x4
    unsigned long Identity;// Offset=0x684 Size=0x4
    struct _CMSI_RW_LOCK HiveLock;// Offset=0x688 Size=0x8
    struct _RTL_BITMAP FlushDirtyVector;// Offset=0x690 Size=0x10
    unsigned long FlushDirtyVectorSize;// Offset=0x6a0 Size=0x4
    struct CMP_OFFSET_ARRAY * FlushLogEntryOffsetArray;// Offset=0x6a8 Size=0x8
    unsigned long FlushLogEntryOffsetArrayCount;// Offset=0x6b0 Size=0x4
    unsigned long FlushLogEntrySize;// Offset=0x6b4 Size=0x4
    unsigned long FlushHiveTruncated;// Offset=0x6b8 Size=0x4
    unsigned char FlushBaseBlockDirty;// Offset=0x6bc Size=0x1
    struct _RTL_BITMAP CapturedUnreconciledVector;// Offset=0x6c0 Size=0x10
    unsigned long CapturedUnreconciledVectorSize;// Offset=0x6d0 Size=0x4
    struct CMP_OFFSET_ARRAY * UnreconciledOffsetArray;// Offset=0x6d8 Size=0x8
    unsigned long UnreconciledOffsetArrayCount;// Offset=0x6e0 Size=0x4
    struct _HBASE_BLOCK * UnreconciledBaseBlock;// Offset=0x6e8 Size=0x8
    struct _EX_PUSH_LOCK SecurityLock;// Offset=0x6f0 Size=0x8
    unsigned long LastShrinkHiveSize;// Offset=0x6f8 Size=0x4
    union _LARGE_INTEGER ActualFileSize;// Offset=0x700 Size=0x8
    union _LARGE_INTEGER LogFileSizes[2];// Offset=0x708 Size=0x10
    struct _UNICODE_STRING FileFullPath;// Offset=0x718 Size=0x10
    struct _UNICODE_STRING FileUserName;// Offset=0x728 Size=0x10
    struct _UNICODE_STRING HiveRootPath;// Offset=0x738 Size=0x10
    unsigned long SecurityCount;// Offset=0x748 Size=0x4
    unsigned long SecurityCacheSize;// Offset=0x74c Size=0x4
    long SecurityHitHint;// Offset=0x750 Size=0x4
    struct _CM_KEY_SECURITY_CACHE_ENTRY * SecurityCache;// Offset=0x758 Size=0x8
    struct _LIST_ENTRY SecurityHash[64];// Offset=0x760 Size=0x400
    unsigned long UnloadEventCount;// Offset=0xb60 Size=0x4
    struct _KEVENT ** UnloadEventArray;// Offset=0xb68 Size=0x8
    struct _CM_KEY_CONTROL_BLOCK * RootKcb;// Offset=0xb70 Size=0x8
    unsigned char Frozen;// Offset=0xb78 Size=0x1
    struct _CM_WORKITEM * UnloadWorkItem;// Offset=0xb80 Size=0x8
    struct _CM_WORKITEM UnloadWorkItemHolder;// Offset=0xb88 Size=0x28
    struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;// Offset=0xbb0 Size=0x488
    unsigned long Flags;// Offset=0x1038 Size=0x4
    struct _LIST_ENTRY TrustClassEntry;// Offset=0x1040 Size=0x10
    unsigned long long DirtyTime;// Offset=0x1050 Size=0x8
    unsigned long long UnreconciledTime;// Offset=0x1058 Size=0x8
    struct _CM_RM * CmRm;// Offset=0x1060 Size=0x8
    unsigned long CmRmInitFailPoint;// Offset=0x1068 Size=0x4
    long CmRmInitFailStatus;// Offset=0x106c Size=0x4
    struct _KTHREAD * CreatorOwner;// Offset=0x1070 Size=0x8
    struct _KTHREAD * RundownThread;// Offset=0x1078 Size=0x8
    union _LARGE_INTEGER LastWriteTime;// Offset=0x1080 Size=0x8
    struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;// Offset=0x1088 Size=0x10
    struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;// Offset=0x1098 Size=0x10
    union // Size=0x4 (Id=0)
    {
        unsigned long FlushFlags;// Offset=0x10a8 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long PrimaryFilePurged:1;// Offset=0x10a8 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DiskFileBad:1;// Offset=0x10a8 Size=0x4 BitOffset=0x1 BitSize=0x1
        };
    };
    unsigned long PrimaryFileSizeBeforeLastFlush;// Offset=0x10ac Size=0x4
    long ReferenceCount;// Offset=0x10b0 Size=0x4
    long UnloadHistoryIndex;// Offset=0x10b4 Size=0x4
    unsigned long UnloadHistory[128];// Offset=0x10b8 Size=0x200
    unsigned long BootStart;// Offset=0x12b8 Size=0x4
    unsigned long UnaccessedStart;// Offset=0x12bc Size=0x4
    unsigned long UnaccessedEnd;// Offset=0x12c0 Size=0x4
    unsigned long LoadedKeyCount;// Offset=0x12c4 Size=0x4
    unsigned long HandleClosePending;// Offset=0x12c8 Size=0x4
    struct _EX_PUSH_LOCK HandleClosePendingEvent;// Offset=0x12d0 Size=0x8
    unsigned char FinalFlushSucceeded;// Offset=0x12d8 Size=0x1
    struct _CMP_VOLUME_CONTEXT * VolumeContext;// Offset=0x12e0 Size=0x8
};
