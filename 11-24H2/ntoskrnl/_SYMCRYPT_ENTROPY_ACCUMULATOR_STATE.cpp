struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=512)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long TargetInfoAsUlong;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Importance;// Offset=0x1 Size=0x1
        unsigned short Number;// Offset=0x2 Size=0x2
    };
    struct _SINGLE_LIST_ENTRY DpcListEntry;// Offset=0x8 Size=0x8
    unsigned long long ProcessorHistory;// Offset=0x10 Size=0x8
    void  ( * DeferredRoutine)(struct _KDPC * ,void * ,void * ,void * );// Offset=0x18 Size=0x8
    void * DeferredContext;// Offset=0x20 Size=0x8
    void * SystemArgument1;// Offset=0x28 Size=0x8
    void * SystemArgument2;// Offset=0x30 Size=0x8
    void * DpcData;// Offset=0x38 Size=0x8
};

struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE// Size=0x180 (Id=1566)
{
    unsigned char buffer[256];// Offset=0x0 Size=0x100
    struct _KDPC Dpc;// Offset=0x100 Size=0x40
    unsigned long long nSamplesAccumulated;// Offset=0x140 Size=0x8
    unsigned long long nHealthTestFailures;// Offset=0x148 Size=0x8
    unsigned char * pCombinedSampleBuffer;// Offset=0x150 Size=0x8
    unsigned long long nRawSamples;// Offset=0x158 Size=0x8
    unsigned int accumulatorId;// Offset=0x160 Size=0x4
    unsigned int nDPCScheduleFailures;// Offset=0x164 Size=0x4
    unsigned char dpcInProgress;// Offset=0x168 Size=0x1
};
