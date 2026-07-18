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

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _COMMON_BUFFER_CALLBACK_DATA// Size=0x30 (Id=634)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * Owner;// Offset=0x10 Size=0x8
    unsigned long NumberToAcquire;// Offset=0x18 Size=0x4
    unsigned long BufferSize;// Offset=0x1c Size=0x4
    unsigned long Tag;// Offset=0x20 Size=0x4
    void  ( * Callback)(struct _COMMON_BUFFER_CALLBACK_DATA * ,long ,struct _LIST_ENTRY * );// Offset=0x28 Size=0x8
};

struct _TRANSFERRING_COUNTER// Size=0x28 (Id=476)
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

struct _TR_DATA// Size=0x110 (Id=443)
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
    unsigned long long Lock;// Offset=0x58 Size=0x8
    unsigned char SavedIrql;// Offset=0x60 Size=0x1
    enum _MAPPING_STATE MappingState;// Offset=0x64 Size=0x4
    unsigned short InterrupterTarget;// Offset=0x68 Size=0x2
    struct _MDL * ForwardProgressMdl;// Offset=0x70 Size=0x8
    struct _COMMON_BUFFER_CALLBACK_DATA CommonBufferCallbackData;// Offset=0x78 Size=0x30
    struct _BUFFER_DATA * CurrentSegmentBufferData;// Offset=0xa8 Size=0x8
    struct _TRB * CurrentSegment;// Offset=0xb0 Size=0x8
    unsigned long CurrentSegmentIndex;// Offset=0xb8 Size=0x4
    unsigned long MaxSegmentIndex;// Offset=0xbc Size=0x4
    unsigned long CycleState;// Offset=0xc0 Size=0x4
    struct _LIST_ENTRY SegmentList;// Offset=0xc8 Size=0x10
    struct _LIST_ENTRY DoubleBufferDataList;// Offset=0xd8 Size=0x10
    struct _TRANSFERRING_COUNTER Counter;// Offset=0xe8 Size=0x28
};
