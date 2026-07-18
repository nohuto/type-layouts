struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION// Size=0x20 (Id=2441)
{
    struct _GROUP_AFFINITY * GroupAffinity;// Offset=0x0 Size=0x8
    unsigned long NumberOfDomains;// Offset=0x8 Size=0x4
    unsigned long GlobalDomainIndex;// Offset=0xc Size=0x4
    unsigned short GroupAffinityCount;// Offset=0x10 Size=0x2
    unsigned short ProcessorCount[3];// Offset=0x12 Size=0x6
    unsigned short UsableProcessorCount[3];// Offset=0x18 Size=0x6
};

struct _unnamed_2513// Size=0xc (Id=2513)
{
    struct // Size=0xa (Id=0)
    {
        unsigned short NoLocalProcessors:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned long UniformAccess:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned short Spare:14;// Offset=0x8 Size=0x2 BitOffset=0x0 BitSize=0xe
    };
};

struct _MI_NODE_NUMBER_ZERO_BASED// Size=0x4 (Id=699)
{
    unsigned long ZeroBased;// Offset=0x0 Size=0x4
};

struct _GROUP_AFFINITY// Size=0x10 (Id=296)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _MI_WRITE_CALIBRATION// Size=0x38 (Id=2518)
{
    unsigned long MaximumNumberProcessors;// Offset=0x0 Size=0x4
    unsigned char OptimalWriteType;// Offset=0x4 Size=0x1
    unsigned char CalibrationCompleted;// Offset=0x5 Size=0x1
    unsigned char CalibrationFinal[2];// Offset=0x6 Size=0x2
    unsigned long long PerProcessorNumberOfBytes;// Offset=0x8 Size=0x8
    unsigned long long PerProcessorBandwidth[2];// Offset=0x10 Size=0x10
    unsigned long OptimalWriteProcessors[2][2];// Offset=0x20 Size=0x10
    struct _MI_WRITE_MODES * PureZeroing;// Offset=0x30 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _MI_DEFERRED_PFNS_TO_FREE// Size=0x20 (Id=2291)
{
    struct _LIST_ENTRY ListHead;// Offset=0x0 Size=0x10
    unsigned long long NumberOfPages;// Offset=0x10 Size=0x8
    unsigned long TbFlushStamp;// Offset=0x18 Size=0x4
};

struct _MI_SYSTEM_NODE_INFORMATION// Size=0x340 (Id=2514)
{
    struct _MI_SYSTEM_NODE_AFFINITY_INFORMATION Affinities;// Offset=0x0 Size=0x20
    struct _unnamed_2513 Flags;// Offset=0x20 Size=0xc
    struct _MI_NODE_NUMBER_ZERO_BASED ProcessorNode;// Offset=0x2c Size=0x4
    struct _GROUP_AFFINITY ForwardProgressGroupAffinity;// Offset=0x30 Size=0x10
    long LargePageListOpLock;// Offset=0x40 Size=0x4
    struct _MI_WRITE_CALIBRATION WriteCalibration[3][3];// Offset=0x48 Size=0x1f8
    unsigned long long MaximumBandwidth[2][2];// Offset=0x240 Size=0x20
    long IoPfnLock;// Offset=0x280 Size=0x4
    struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsToFree[4];// Offset=0x288 Size=0x80
    struct _MI_DEFERRED_PFNS_TO_FREE DeferredPfnsReady;// Offset=0x308 Size=0x20
    long DeferredPfnsToFreeLock;// Offset=0x328 Size=0x4
};
