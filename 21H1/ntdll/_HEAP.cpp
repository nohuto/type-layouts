struct _HEAP_UNPACKED_ENTRY// Size=0x8 (Id=631)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short Size;// Offset=0x0 Size=0x2
        unsigned char Flags;// Offset=0x2 Size=0x1
        unsigned char SmallTagIndex;// Offset=0x3 Size=0x1
        unsigned long SubSegmentCode;// Offset=0x0 Size=0x4
    };
    unsigned short PreviousSize;// Offset=0x4 Size=0x2
    union // Size=0x1 (Id=0)
    {
        unsigned char SegmentOffset;// Offset=0x6 Size=0x1
        unsigned char LFHFlags;// Offset=0x6 Size=0x1
    };
    unsigned char UnusedBytes;// Offset=0x7 Size=0x1
};

struct _HEAP_EXTENDED_ENTRY// Size=0x8 (Id=626)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short FunctionIndex;// Offset=0x0 Size=0x2
        unsigned short ContextValue;// Offset=0x2 Size=0x2
        unsigned long InterceptorValue;// Offset=0x0 Size=0x4
    };
    unsigned short UnusedBytesLength;// Offset=0x4 Size=0x2
    unsigned char EntryOffset;// Offset=0x6 Size=0x1
    unsigned char ExtendedBlockSignature;// Offset=0x7 Size=0x1
};

struct _HEAP_ENTRY// Size=0x8 (Id=225)
{
    union // Size=0x8 (Id=0)
    {
        struct _HEAP_UNPACKED_ENTRY UnpackedEntry;// Offset=0x0 Size=0x8
        unsigned short Size;// Offset=0x0 Size=0x2
        unsigned char Flags;// Offset=0x2 Size=0x1
        unsigned char SmallTagIndex;// Offset=0x3 Size=0x1
        unsigned long SubSegmentCode;// Offset=0x0 Size=0x4
        unsigned short PreviousSize;// Offset=0x4 Size=0x2
        union // Size=0x1 (Id=0)
        {
            unsigned char SegmentOffset;// Offset=0x6 Size=0x1
            unsigned char LFHFlags;// Offset=0x6 Size=0x1
        };
        unsigned char UnusedBytes;// Offset=0x7 Size=0x1
        struct _HEAP_EXTENDED_ENTRY ExtendedEntry;// Offset=0x0 Size=0x8
        unsigned short FunctionIndex;// Offset=0x0 Size=0x2
        unsigned short ContextValue;// Offset=0x2 Size=0x2
        unsigned long InterceptorValue;// Offset=0x0 Size=0x4
        unsigned short UnusedBytesLength;// Offset=0x4 Size=0x2
        unsigned char EntryOffset;// Offset=0x6 Size=0x1
        unsigned char ExtendedBlockSignature;// Offset=0x7 Size=0x1
        unsigned long Code1;// Offset=0x0 Size=0x4
        unsigned short Code2;// Offset=0x4 Size=0x2
        unsigned char Code3;// Offset=0x6 Size=0x1
        unsigned char Code4;// Offset=0x7 Size=0x1
        unsigned long Code234;// Offset=0x4 Size=0x4
        unsigned long long AgregateCode;// Offset=0x0 Size=0x8
    };
};

struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
};

struct _HEAP_SEGMENT// Size=0x40 (Id=226)
{
    struct _HEAP_ENTRY Entry;// Offset=0x0 Size=0x8
    unsigned long SegmentSignature;// Offset=0x8 Size=0x4
    unsigned long SegmentFlags;// Offset=0xc Size=0x4
    struct _LIST_ENTRY SegmentListEntry;// Offset=0x10 Size=0x8
    struct _HEAP * Heap;// Offset=0x18 Size=0x4
    void * BaseAddress;// Offset=0x1c Size=0x4
    unsigned long NumberOfPages;// Offset=0x20 Size=0x4
    struct _HEAP_ENTRY * FirstEntry;// Offset=0x24 Size=0x4
    struct _HEAP_ENTRY * LastValidEntry;// Offset=0x28 Size=0x4
    unsigned long NumberOfUnCommittedPages;// Offset=0x2c Size=0x4
    unsigned long NumberOfUnCommittedRanges;// Offset=0x30 Size=0x4
    unsigned short SegmentAllocatorBackTraceIndex;// Offset=0x34 Size=0x2
    unsigned short Reserved;// Offset=0x36 Size=0x2
    struct _LIST_ENTRY UCRSegmentList;// Offset=0x38 Size=0x8
};

union _RTL_RUN_ONCE// Size=0x4 (Id=343)
{
    void * Ptr;// Offset=0x0 Size=0x4
    unsigned long Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long State:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
};

struct _RTL_HEAP_MEMORY_LIMIT_DATA// Size=0x10 (Id=311)
{
    unsigned long CommitLimitBytes;// Offset=0x0 Size=0x4
    unsigned long CommitLimitFailureCode;// Offset=0x4 Size=0x4
    unsigned long MaxAllocationSizeBytes;// Offset=0x8 Size=0x4
    unsigned long AllocationLimitFailureCode;// Offset=0xc Size=0x4
};

struct _HEAP_COUNTERS// Size=0x5c (Id=300)
{
    unsigned long TotalMemoryReserved;// Offset=0x0 Size=0x4
    unsigned long TotalMemoryCommitted;// Offset=0x4 Size=0x4
    unsigned long TotalMemoryLargeUCR;// Offset=0x8 Size=0x4
    unsigned long TotalSizeInVirtualBlocks;// Offset=0xc Size=0x4
    unsigned long TotalSegments;// Offset=0x10 Size=0x4
    unsigned long TotalUCRs;// Offset=0x14 Size=0x4
    unsigned long CommittOps;// Offset=0x18 Size=0x4
    unsigned long DeCommitOps;// Offset=0x1c Size=0x4
    unsigned long LockAcquires;// Offset=0x20 Size=0x4
    unsigned long LockCollisions;// Offset=0x24 Size=0x4
    unsigned long CommitRate;// Offset=0x28 Size=0x4
    unsigned long DecommittRate;// Offset=0x2c Size=0x4
    unsigned long CommitFailures;// Offset=0x30 Size=0x4
    unsigned long InBlockCommitFailures;// Offset=0x34 Size=0x4
    unsigned long PollIntervalCounter;// Offset=0x38 Size=0x4
    unsigned long DecommitsSinceLastCheck;// Offset=0x3c Size=0x4
    unsigned long HeapPollInterval;// Offset=0x40 Size=0x4
    unsigned long AllocAndFreeOps;// Offset=0x44 Size=0x4
    unsigned long AllocationIndicesActive;// Offset=0x48 Size=0x4
    unsigned long InBlockDeccommits;// Offset=0x4c Size=0x4
    unsigned long InBlockDeccomitSize;// Offset=0x50 Size=0x4
    unsigned long HighWatermarkSize;// Offset=0x54 Size=0x4
    unsigned long LastPolledSize;// Offset=0x58 Size=0x4
};

struct _HEAP_TUNING_PARAMETERS// Size=0x8 (Id=334)
{
    unsigned long CommittThresholdShift;// Offset=0x0 Size=0x4
    unsigned long MaxPreCommittThreshold;// Offset=0x4 Size=0x4
};

struct _HEAP// Size=0x258 (Id=221)
{
    union // Size=0x40 (Id=0)
    {
        struct _HEAP_SEGMENT Segment;// Offset=0x0 Size=0x40
        struct _HEAP_ENTRY Entry;// Offset=0x0 Size=0x8
        unsigned long SegmentSignature;// Offset=0x8 Size=0x4
        unsigned long SegmentFlags;// Offset=0xc Size=0x4
        struct _LIST_ENTRY SegmentListEntry;// Offset=0x10 Size=0x8
        struct _HEAP * Heap;// Offset=0x18 Size=0x4
        void * BaseAddress;// Offset=0x1c Size=0x4
        unsigned long NumberOfPages;// Offset=0x20 Size=0x4
        struct _HEAP_ENTRY * FirstEntry;// Offset=0x24 Size=0x4
        struct _HEAP_ENTRY * LastValidEntry;// Offset=0x28 Size=0x4
        unsigned long NumberOfUnCommittedPages;// Offset=0x2c Size=0x4
        unsigned long NumberOfUnCommittedRanges;// Offset=0x30 Size=0x4
        unsigned short SegmentAllocatorBackTraceIndex;// Offset=0x34 Size=0x2
        unsigned short Reserved;// Offset=0x36 Size=0x2
        struct _LIST_ENTRY UCRSegmentList;// Offset=0x38 Size=0x8
    };
    unsigned long Flags;// Offset=0x40 Size=0x4
    unsigned long ForceFlags;// Offset=0x44 Size=0x4
    unsigned long CompatibilityFlags;// Offset=0x48 Size=0x4
    unsigned long EncodeFlagMask;// Offset=0x4c Size=0x4
    struct _HEAP_ENTRY Encoding;// Offset=0x50 Size=0x8
    unsigned long Interceptor;// Offset=0x58 Size=0x4
    unsigned long VirtualMemoryThreshold;// Offset=0x5c Size=0x4
    unsigned long Signature;// Offset=0x60 Size=0x4
    unsigned long SegmentReserve;// Offset=0x64 Size=0x4
    unsigned long SegmentCommit;// Offset=0x68 Size=0x4
    unsigned long DeCommitFreeBlockThreshold;// Offset=0x6c Size=0x4
    unsigned long DeCommitTotalFreeThreshold;// Offset=0x70 Size=0x4
    unsigned long TotalFreeSize;// Offset=0x74 Size=0x4
    unsigned long MaximumAllocationSize;// Offset=0x78 Size=0x4
    unsigned short ProcessHeapsListIndex;// Offset=0x7c Size=0x2
    unsigned short HeaderValidateLength;// Offset=0x7e Size=0x2
    void * HeaderValidateCopy;// Offset=0x80 Size=0x4
    unsigned short NextAvailableTagIndex;// Offset=0x84 Size=0x2
    unsigned short MaximumTagIndex;// Offset=0x86 Size=0x2
    struct _HEAP_TAG_ENTRY * TagEntries;// Offset=0x88 Size=0x4
    struct _LIST_ENTRY UCRList;// Offset=0x8c Size=0x8
    unsigned long AlignRound;// Offset=0x94 Size=0x4
    unsigned long AlignMask;// Offset=0x98 Size=0x4
    struct _LIST_ENTRY VirtualAllocdBlocks;// Offset=0x9c Size=0x8
    struct _LIST_ENTRY SegmentList;// Offset=0xa4 Size=0x8
    unsigned short AllocatorBackTraceIndex;// Offset=0xac Size=0x2
    unsigned long NonDedicatedListLength;// Offset=0xb0 Size=0x4
    void * BlocksIndex;// Offset=0xb4 Size=0x4
    void * UCRIndex;// Offset=0xb8 Size=0x4
    struct _HEAP_PSEUDO_TAG_ENTRY * PseudoTagEntries;// Offset=0xbc Size=0x4
    struct _LIST_ENTRY FreeLists;// Offset=0xc0 Size=0x8
    struct _HEAP_LOCK * LockVariable;// Offset=0xc8 Size=0x4
    long  ( * CommitRoutine)(void * ,void ** ,unsigned long * );// Offset=0xcc Size=0x4
    union _RTL_RUN_ONCE StackTraceInitVar;// Offset=0xd0 Size=0x4
    struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;// Offset=0xd4 Size=0x10
    void * FrontEndHeap;// Offset=0xe4 Size=0x4
    unsigned short FrontHeapLockCount;// Offset=0xe8 Size=0x2
    unsigned char FrontEndHeapType;// Offset=0xea Size=0x1
    unsigned char RequestedFrontEndHeapType;// Offset=0xeb Size=0x1
    wchar_t * FrontEndHeapUsageData;// Offset=0xec Size=0x4
    unsigned short FrontEndHeapMaximumIndex;// Offset=0xf0 Size=0x2
    unsigned char FrontEndHeapStatusBitmap[257];// Offset=0xf2 Size=0x101
    struct _HEAP_COUNTERS Counters;// Offset=0x1f4 Size=0x5c
    struct _HEAP_TUNING_PARAMETERS TuningParameters;// Offset=0x250 Size=0x8
};
