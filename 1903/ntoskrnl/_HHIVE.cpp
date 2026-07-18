struct _CMSI_RW_LOCK// Size=0x8 (Id=885)
{
    void * Reserved;// Offset=0x0 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=33)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _RTL_RB_TREE// Size=0x10 (Id=38)
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

struct _HVP_VIEW_MAP// Size=0x38 (Id=948)
{
    void * SectionReference;// Offset=0x0 Size=0x8
    long long StorageEndFileOffset;// Offset=0x8 Size=0x8
    long long SectionEndFileOffset;// Offset=0x10 Size=0x8
    struct _CMSI_PROCESS_TUPLE * ProcessTuple;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    struct _RTL_RB_TREE ViewTree;// Offset=0x28 Size=0x10
};

struct _FREE_DISPLAY// Size=0x18 (Id=1358)
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

struct _DUAL// Size=0x278 (Id=807)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    struct _HMAP_DIRECTORY * Map;// Offset=0x8 Size=0x8
    struct _HMAP_TABLE * SmallDir;// Offset=0x10 Size=0x8
    unsigned long Guard;// Offset=0x18 Size=0x4
    struct _FREE_DISPLAY FreeDisplay[24];// Offset=0x20 Size=0x240
    struct _LIST_ENTRY FreeBins;// Offset=0x260 Size=0x10
    unsigned long FreeSummary;// Offset=0x270 Size=0x4
};

struct _HHIVE// Size=0x600 (Id=312)
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
