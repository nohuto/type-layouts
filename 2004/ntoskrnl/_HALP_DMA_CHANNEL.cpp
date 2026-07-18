enum _DMA_INTERRUPT_TYPE
{
    InterruptTypeCompletion=0,
    InterruptTypeError=1,
    InterruptTypeCancelled=2
};

struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=838)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _KDPC// Size=0x40 (Id=88)
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

enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown=0,
    InterruptActiveHigh=1,
    InterruptRisingEdge=1,
    InterruptActiveLow=2,
    InterruptFallingEdge=2,
    InterruptActiveBoth=3,
    InterruptActiveBothTriggerLow=3,
    InterruptActiveBothTriggerHigh=4
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
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

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _HALP_DMA_CHANNEL// Size=0xa0 (Id=254)
{
    unsigned long ChannelNumber;// Offset=0x0 Size=0x4
    unsigned char Initialized;// Offset=0x4 Size=0x1
    unsigned char Busy;// Offset=0x5 Size=0x1
    unsigned char Complete;// Offset=0x6 Size=0x1
    void  ( * CurrentCompletionRoutine)(struct _DMA_ADAPTER * ,struct _DEVICE_OBJECT * ,void * ,enum DMA_COMPLETION_STATUS );// Offset=0x8 Size=0x8
    void * CurrentCompletionContext;// Offset=0x10 Size=0x8
    struct _ADAPTER_OBJECT * CurrentChildAdapter;// Offset=0x18 Size=0x8
    enum _DMA_INTERRUPT_TYPE CurrentInterruptType;// Offset=0x20 Size=0x4
    struct _KDPC Dpc;// Offset=0x28 Size=0x40
    unsigned char GeneratesInterrupt;// Offset=0x68 Size=0x1
    long Gsi;// Offset=0x6c Size=0x4
    enum _KINTERRUPT_POLARITY InterruptPolarity;// Offset=0x70 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x74 Size=0x4
    unsigned long CommonBufferLength;// Offset=0x78 Size=0x4
    void * CommonBufferVirtualAddress;// Offset=0x80 Size=0x8
    union _LARGE_INTEGER CommonBufferLogicalAddress;// Offset=0x88 Size=0x8
    struct _LIST_ENTRY AdapterQueue;// Offset=0x90 Size=0x10
};
