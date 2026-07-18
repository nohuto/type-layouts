enum _WDF_IO_QUEUE_DISPATCH_TYPE
{
    WdfIoQueueDispatchInvalid=0,
    WdfIoQueueDispatchSequential=1,
    WdfIoQueueDispatchParallel=2,
    WdfIoQueueDispatchManual=3,
    WdfIoQueueDispatchMax=4
};

enum _MAPPING_STATE
{
    MS_Stopped=0,
    MS_Stopping=1,
    MS_Paused=2,
    MS_Mapping=3,
    MS_WaitingForTransferRingEmptyEvent=4,
    MS_Any=5
};

struct _LIST_ENTRY// Size=0x10 (Id=37)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _COMMON_BUFFER_CALLBACK_DATA// Size=0x30 (Id=686)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * Owner;// Offset=0x10 Size=0x8
    unsigned long NumberToAcquire;// Offset=0x18 Size=0x4
    unsigned long BufferSize;// Offset=0x1c Size=0x4
    unsigned long Tag;// Offset=0x20 Size=0x4
    void  ( * Callback)(struct _COMMON_BUFFER_CALLBACK_DATA * ,long ,struct _LIST_ENTRY * );// Offset=0x28 Size=0x8
};

struct _TRANSFERRING_COUNTER// Size=0x28 (Id=586)
{
    unsigned long TransferCount;// Offset=0x0 Size=0x4
    unsigned long FailedTransferCount;// Offset=0x4 Size=0x4
    unsigned long long BytesTransferred;// Offset=0x8 Size=0x8
    unsigned long IsochTDCount;// Offset=0x10 Size=0x4
    unsigned long IsochTDFailCount;// Offset=0x14 Size=0x4
    unsigned long MissedServiceErrorCount;// Offset=0x18 Size=0x4
    unsigned long UnderrunOverrunCount;// Offset=0x1c Size=0x4
    struct _PCW_INSTANCE * PcwInstanceHandle;// Offset=0x20 Size=0x8
};

union _ISOCH_DATA_FLAGS// Size=0x4 (Id=1041)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DoorbellRungSinceMappingStart:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long OkToReclaimTransfersOnCancel:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AtleastOneTransferCanceled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ReclaimTransfersAndAcknowledge:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long TransferRingEmptyEventExpected:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long FrameNumberOfLastTDInScheduleValid:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long FSEReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SplitTransactionErrorReceived:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
    };
};

struct _ISOCH_DATA// Size=0x1b8 (Id=898)
{
    unsigned long TransferType;// Offset=0x0 Size=0x4
    unsigned long MaxStageSize;// Offset=0x4 Size=0x4
    unsigned long MapRegisterCount;// Offset=0x8 Size=0x4
    enum _WDF_IO_QUEUE_DISPATCH_TYPE QueueDispatchType;// Offset=0xc Size=0x4
    unsigned long ContextSize;// Offset=0x10 Size=0x4
    unsigned long SegmentSize;// Offset=0x14 Size=0x4
    unsigned long DoubleBufferSize;// Offset=0x18 Size=0x4
    struct _TR_FUNCTION_TABLE * FunctionTable;// Offset=0x20 Size=0x8
    void * ControllerHandle;// Offset=0x28 Size=0x8
    void * UsbDeviceHandle;// Offset=0x30 Size=0x8
    void * EndpointHandle;// Offset=0x38 Size=0x8
    unsigned long StreamId;// Offset=0x40 Size=0x4
    struct WDFQUEUE__ * WdfQueue;// Offset=0x48 Size=0x8
    struct WDFDPC__ * WdfDpcForTransferCompletion;// Offset=0x50 Size=0x8
    struct WDFWORKITEM__ * WdfWorkItemForTransferCompletion;// Offset=0x58 Size=0x8
    unsigned long long Lock;// Offset=0x60 Size=0x8
    unsigned char SavedIrql;// Offset=0x68 Size=0x1
    enum _MAPPING_STATE MappingState;// Offset=0x6c Size=0x4
    unsigned short InterrupterTarget;// Offset=0x70 Size=0x2
    struct _MDL * ForwardProgressMdl;// Offset=0x78 Size=0x8
    struct _COMMON_BUFFER_CALLBACK_DATA CommonBufferCallbackData;// Offset=0x80 Size=0x30
    struct _XIL_BUFFER_DATA * CurrentSegmentBufferData;// Offset=0xb0 Size=0x8
    struct _TRB * CurrentSegment;// Offset=0xb8 Size=0x8
    unsigned long CurrentSegmentIndex;// Offset=0xc0 Size=0x4
    unsigned long MaxSegmentIndex;// Offset=0xc4 Size=0x4
    unsigned long CycleState;// Offset=0xc8 Size=0x4
    struct _LIST_ENTRY SegmentList;// Offset=0xd0 Size=0x10
    struct _LIST_ENTRY DoubleBufferDataList;// Offset=0xe0 Size=0x10
    struct _TRANSFERRING_COUNTER Counter;// Offset=0xf0 Size=0x28
    unsigned char IsProxyTransferRing;// Offset=0x118 Size=0x1
    struct TRUSTLET_OBJECT_HANDLE__ * SecureObjectHandle;// Offset=0x120 Size=0x8
    unsigned long StageId;// Offset=0x128 Size=0x4
    struct _TR_ADD_TRB_RANGE_IN * AddTrbRangeInputBuffer;// Offset=0x130 Size=0x8
    unsigned long MaxNumberOfTrbsInBuffer;// Offset=0x138 Size=0x4
    struct WDFTIMER__ * WdfRingEmptyTimer;// Offset=0x140 Size=0x8
    union _ISOCH_DATA_FLAGS Flags;// Offset=0x148 Size=0x4
    unsigned char DpcRunning;// Offset=0x14c Size=0x1
    unsigned char RingDoorbellOnFirstTD;// Offset=0x14d Size=0x1
    unsigned char IsochPure;// Offset=0x14e Size=0x1
    unsigned long CommonBufferAcquireAttemptCount;// Offset=0x150 Size=0x4
    long ContinueMapping;// Offset=0x154 Size=0x4
    long AttemptMapping;// Offset=0x158 Size=0x4
    long TransferRingEmptyEventReceived;// Offset=0x15c Size=0x4
    long LateDetected;// Offset=0x160 Size=0x4
    unsigned long PacketsPerFrame;// Offset=0x164 Size=0x4
    unsigned long NextTransferStartFrame;// Offset=0x168 Size=0x4
    unsigned long FrameNumberOfLastTDInSchedule;// Offset=0x16c Size=0x4
    struct _ISOCH_STAGE_DATA * CurrentStage;// Offset=0x170 Size=0x8
    unsigned long PendingStageCount;// Offset=0x178 Size=0x4
    struct _LIST_ENTRY PendingTransferList;// Offset=0x180 Size=0x10
    struct _LIST_ENTRY WaitingForCancelCallbackTransferList;// Offset=0x190 Size=0x10
    struct _LIST_ENTRY CompletionTransferList;// Offset=0x1a0 Size=0x10
    unsigned long EstimatedTrbsPerTD;// Offset=0x1b0 Size=0x4
};
