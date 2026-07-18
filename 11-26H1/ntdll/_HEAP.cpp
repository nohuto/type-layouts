struct _HEAP_UNPACKED_ENTRY// Size=0x10 (Id=788)
{
    void * PreviousBlockPrivateData;// Offset=0x0 Size=0x8
    union // Size=0x10 (Id=0)
    {
        unsigned short Size;// Offset=0x8 Size=0x2
        unsigned char Flags;// Offset=0xa Size=0x1
        unsigned char SmallTagIndex;// Offset=0xb Size=0x1
        unsigned long SubSegmentCode;// Offset=0x8 Size=0x4
        unsigned short PreviousSize;// Offset=0xc Size=0x2
        union // Size=0x1 (Id=0)
        {
            unsigned char SegmentOffset;// Offset=0xe Size=0x1
            unsigned char LFHFlags;// Offset=0xe Size=0x1
        };
        unsigned char UnusedBytes;// Offset=0xf Size=0x1
        unsigned long long CompactHeader;// Offset=0x8 Size=0x8
    };
};

struct _HEAP_EXTENDED_ENTRY// Size=0x10 (Id=779)
{
    void * Reserved;// Offset=0x0 Size=0x8
    union // Size=0xc (Id=0)
    {
        unsigned short FunctionIndex;// Offset=0x8 Size=0x2
        unsigned short ContextValue;// Offset=0xa Size=0x2
        unsigned long InterceptorValue;// Offset=0x8 Size=0x4
    };
    unsigned short UnusedBytesLength;// Offset=0xc Size=0x2
    unsigned char EntryOffset;// Offset=0xe Size=0x1
    unsigned char ExtendedBlockSignature;// Offset=0xf Size=0x1
};

struct _HEAP_ENTRY// Size=0x10 (Id=270)
{
    union // Size=0x10 (Id=0)
    {
        struct _HEAP_UNPACKED_ENTRY UnpackedEntry;// Offset=0x0 Size=0x10
        void * PreviousBlockPrivateData;// Offset=0x0 Size=0x8
        unsigned short Size;// Offset=0x8 Size=0x2
        unsigned char Flags;// Offset=0xa Size=0x1
        unsigned char SmallTagIndex;// Offset=0xb Size=0x1
        unsigned long SubSegmentCode;// Offset=0x8 Size=0x4
        unsigned short PreviousSize;// Offset=0xc Size=0x2
        union // Size=0x1 (Id=0)
        {
            unsigned char SegmentOffset;// Offset=0xe Size=0x1
            unsigned char LFHFlags;// Offset=0xe Size=0x1
        };
        unsigned char UnusedBytes;// Offset=0xf Size=0x1
        unsigned long long CompactHeader;// Offset=0x8 Size=0x8
        struct _HEAP_EXTENDED_ENTRY ExtendedEntry;// Offset=0x0 Size=0x10
        void * Reserved;// Offset=0x0 Size=0x8
        union // Size=0xc (Id=0)
        {
            unsigned short FunctionIndex;// Offset=0x8 Size=0x2
            unsigned short ContextValue;// Offset=0xa Size=0x2
            unsigned long InterceptorValue;// Offset=0x8 Size=0x4
        };
        unsigned short UnusedBytesLength;// Offset=0xc Size=0x2
        unsigned char EntryOffset;// Offset=0xe Size=0x1
        unsigned char ExtendedBlockSignature;// Offset=0xf Size=0x1
        void * ReservedForAlignment;// Offset=0x0 Size=0x8
        unsigned long Code1;// Offset=0x8 Size=0x4
        unsigned short Code2;// Offset=0xc Size=0x2
        unsigned char Code3;// Offset=0xe Size=0x1
        unsigned char Code4;// Offset=0xf Size=0x1
    };
    unsigned long Code234;// Offset=0xc Size=0x4
    unsigned long long AgregateCode;// Offset=0x8 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=33)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HEAP_SEGMENT// Size=0x70 (Id=271)
{
    struct _HEAP_ENTRY Entry;// Offset=0x0 Size=0x10
    unsigned long SegmentSignature;// Offset=0x10 Size=0x4
    unsigned long SegmentFlags;// Offset=0x14 Size=0x4
    struct _LIST_ENTRY SegmentListEntry;// Offset=0x18 Size=0x10
    struct _HEAP * Heap;// Offset=0x28 Size=0x8
    void * BaseAddress;// Offset=0x30 Size=0x8
    unsigned long NumberOfPages;// Offset=0x38 Size=0x4
    struct _HEAP_ENTRY * FirstEntry;// Offset=0x40 Size=0x8
    struct _HEAP_ENTRY * LastValidEntry;// Offset=0x48 Size=0x8
    unsigned long NumberOfUnCommittedPages;// Offset=0x50 Size=0x4
    unsigned long NumberOfUnCommittedRanges;// Offset=0x54 Size=0x4
    unsigned short SegmentAllocatorBackTraceIndex;// Offset=0x58 Size=0x2
    unsigned short Reserved;// Offset=0x5a Size=0x2
    struct _LIST_ENTRY UCRSegmentList;// Offset=0x60 Size=0x10
};

union _RTL_RUN_ONCE// Size=0x8 (Id=440)
{
    void * Ptr;// Offset=0x0 Size=0x8
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long State:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
    };
};

struct _RTLP_HEAP_COMMIT_LIMIT_DATA// Size=0x10 (Id=807)
{
    unsigned long long CommitLimitBytes;// Offset=0x0 Size=0x8
    unsigned long long CommitLimitFailureCode;// Offset=0x8 Size=0x8
};

struct _HEAP_COUNTERS// Size=0x78 (Id=385)
{
    unsigned long long TotalMemoryReserved;// Offset=0x0 Size=0x8
    unsigned long long TotalMemoryCommitted;// Offset=0x8 Size=0x8
    unsigned long long TotalMemoryLargeUCR;// Offset=0x10 Size=0x8
    unsigned long long TotalSizeInVirtualBlocks;// Offset=0x18 Size=0x8
    unsigned long TotalSegments;// Offset=0x20 Size=0x4
    unsigned long TotalUCRs;// Offset=0x24 Size=0x4
    unsigned long CommittOps;// Offset=0x28 Size=0x4
    unsigned long DeCommitOps;// Offset=0x2c Size=0x4
    unsigned long LockAcquires;// Offset=0x30 Size=0x4
    unsigned long LockCollisions;// Offset=0x34 Size=0x4
    unsigned long CommitRate;// Offset=0x38 Size=0x4
    unsigned long DecommittRate;// Offset=0x3c Size=0x4
    unsigned long CommitFailures;// Offset=0x40 Size=0x4
    unsigned long InBlockCommitFailures;// Offset=0x44 Size=0x4
    unsigned long PollIntervalCounter;// Offset=0x48 Size=0x4
    unsigned long DecommitsSinceLastCheck;// Offset=0x4c Size=0x4
    unsigned long HeapPollInterval;// Offset=0x50 Size=0x4
    unsigned long AllocAndFreeOps;// Offset=0x54 Size=0x4
    unsigned long AllocationIndicesActive;// Offset=0x58 Size=0x4
    unsigned long InBlockDeccommits;// Offset=0x5c Size=0x4
    unsigned long long InBlockDeccomitSize;// Offset=0x60 Size=0x8
    unsigned long long HighWatermarkSize;// Offset=0x68 Size=0x8
    unsigned long long LastPolledSize;// Offset=0x70 Size=0x8
};

struct _HEAP_TUNING_PARAMETERS// Size=0x10 (Id=432)
{
    unsigned long CommittThresholdShift;// Offset=0x0 Size=0x4
    unsigned long long MaxPreCommittThreshold;// Offset=0x8 Size=0x8
};

struct _HEAP// Size=0x2c0 (Id=266)
{
    union // Size=0x70 (Id=0)
    {
        struct _HEAP_SEGMENT Segment;// Offset=0x0 Size=0x70
        struct _HEAP_ENTRY Entry;// Offset=0x0 Size=0x10
        unsigned long SegmentSignature;// Offset=0x10 Size=0x4
        unsigned long SegmentFlags;// Offset=0x14 Size=0x4
        struct _LIST_ENTRY SegmentListEntry;// Offset=0x18 Size=0x10
        struct _HEAP * Heap;// Offset=0x28 Size=0x8
        void * BaseAddress;// Offset=0x30 Size=0x8
        unsigned long NumberOfPages;// Offset=0x38 Size=0x4
        struct _HEAP_ENTRY * FirstEntry;// Offset=0x40 Size=0x8
        struct _HEAP_ENTRY * LastValidEntry;// Offset=0x48 Size=0x8
        unsigned long NumberOfUnCommittedPages;// Offset=0x50 Size=0x4
        unsigned long NumberOfUnCommittedRanges;// Offset=0x54 Size=0x4
        unsigned short SegmentAllocatorBackTraceIndex;// Offset=0x58 Size=0x2
        unsigned short Reserved;// Offset=0x5a Size=0x2
        struct _LIST_ENTRY UCRSegmentList;// Offset=0x60 Size=0x10
    };
    unsigned long Flags;// Offset=0x70 Size=0x4
    unsigned long ForceFlags;// Offset=0x74 Size=0x4
    unsigned long CompatibilityFlags;// Offset=0x78 Size=0x4
    unsigned long EncodeFlagMask;// Offset=0x7c Size=0x4
    struct _HEAP_ENTRY Encoding;// Offset=0x80 Size=0x10
    unsigned long Interceptor;// Offset=0x90 Size=0x4
    unsigned long VirtualMemoryThreshold;// Offset=0x94 Size=0x4
    unsigned long Signature;// Offset=0x98 Size=0x4
    unsigned long long SegmentReserve;// Offset=0xa0 Size=0x8
    unsigned long long SegmentCommit;// Offset=0xa8 Size=0x8
    unsigned long long DeCommitFreeBlockThreshold;// Offset=0xb0 Size=0x8
    unsigned long long DeCommitTotalFreeThreshold;// Offset=0xb8 Size=0x8
    unsigned long long TotalFreeSize;// Offset=0xc0 Size=0x8
    unsigned long long MaximumAllocationSize;// Offset=0xc8 Size=0x8
    unsigned short ProcessHeapsListIndex;// Offset=0xd0 Size=0x2
    unsigned short HeaderValidateLength;// Offset=0xd2 Size=0x2
    void * HeaderValidateCopy;// Offset=0xd8 Size=0x8
    unsigned short NextAvailableTagIndex;// Offset=0xe0 Size=0x2
    unsigned short MaximumTagIndex;// Offset=0xe2 Size=0x2
    struct _HEAP_TAG_ENTRY * TagEntries;// Offset=0xe8 Size=0x8
    struct _LIST_ENTRY UCRList;// Offset=0xf0 Size=0x10
    unsigned long long AlignRound;// Offset=0x100 Size=0x8
    unsigned long long AlignMask;// Offset=0x108 Size=0x8
    struct _LIST_ENTRY VirtualAllocdBlocks;// Offset=0x110 Size=0x10
    struct _LIST_ENTRY SegmentList;// Offset=0x120 Size=0x10
    unsigned short AllocatorBackTraceIndex;// Offset=0x130 Size=0x2
    unsigned long NonDedicatedListLength;// Offset=0x134 Size=0x4
    void * BlocksIndex;// Offset=0x138 Size=0x8
    void * UCRIndex;// Offset=0x140 Size=0x8
    struct _HEAP_PSEUDO_TAG_ENTRY * PseudoTagEntries;// Offset=0x148 Size=0x8
    struct _LIST_ENTRY FreeLists;// Offset=0x150 Size=0x10
    struct _HEAP_LOCK * LockVariable;// Offset=0x160 Size=0x8
    long  ( * CommitRoutine)(void * ,void ** ,unsigned long long * );// Offset=0x168 Size=0x8
    union _RTL_RUN_ONCE StackTraceInitVar;// Offset=0x170 Size=0x8
    struct _RTLP_HEAP_COMMIT_LIMIT_DATA CommitLimitData;// Offset=0x178 Size=0x10
    void * UserContext;// Offset=0x188 Size=0x8
    unsigned long long Spare;// Offset=0x190 Size=0x8
    void * FrontEndHeap;// Offset=0x198 Size=0x8
    unsigned short FrontHeapLockCount;// Offset=0x1a0 Size=0x2
    unsigned char FrontEndHeapType;// Offset=0x1a2 Size=0x1
    unsigned char RequestedFrontEndHeapType;// Offset=0x1a3 Size=0x1
    unsigned short * FrontEndHeapUsageData;// Offset=0x1a8 Size=0x8
    unsigned short FrontEndHeapMaximumIndex;// Offset=0x1b0 Size=0x2
    unsigned char FrontEndHeapStatusBitmap[129];// Offset=0x1b2 Size=0x81
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char ReadOnly:1;// Offset=0x233 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        unsigned char InternalFlags;// Offset=0x233 Size=0x1
    };
    struct _HEAP_COUNTERS Counters;// Offset=0x238 Size=0x78
    struct _HEAP_TUNING_PARAMETERS TuningParameters;// Offset=0x2b0 Size=0x10
};
