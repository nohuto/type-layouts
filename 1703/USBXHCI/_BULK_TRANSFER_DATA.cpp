struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _TRANSFER_CANCEL_STATE
{
    TCS_NotCancelable=0,
    TCS_Cancelable=1,
    TCS_WaitingForCancelCallback=2,
    TCS_Canceled=3
};

enum _TRANSFER_MECHANISM
{
    TransferMechanism_NoData=0,
    TransferMechanism_ImmediateData=1,
    TransferMechanism_DoubleBufferData=2,
    TransferMechanism_Dma=3
};

struct _STAGE_QUEUE_HEADER// Size=0x8 (Id=786)
{
    unsigned char StageSize;// Offset=0x0 Size=0x1
    unsigned char StageCount;// Offset=0x1 Size=0x1
    unsigned char UsedStageCount;// Offset=0x2 Size=0x1
    unsigned char NextFreeStageIndex;// Offset=0x3 Size=0x1
    unsigned char OldestAcquiredStageIndex;// Offset=0x4 Size=0x1
    unsigned char IteratorIndex;// Offset=0x5 Size=0x1
    unsigned char IterationCount;// Offset=0x6 Size=0x1
    unsigned char Padding;// Offset=0x7 Size=0x1
};

struct _TRB_RANGE// Size=0x20 (Id=803)
{
    struct _BUFFER_DATA * FirstSegment;// Offset=0x0 Size=0x8
    unsigned long FirstSegmentStartIndex;// Offset=0x8 Size=0x4
    struct _BUFFER_DATA * LastSegment;// Offset=0x10 Size=0x8
    unsigned long LastSegmentEndIndex;// Offset=0x18 Size=0x4
};

struct _BULK_STAGE_DATA// Size=0x80 (Id=805)
{
    struct _BULK_TRANSFER_DATA * TransferData;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY FreeSegmentList;// Offset=0x8 Size=0x10
    struct _LIST_ENTRY UsedSegmentList;// Offset=0x18 Size=0x10
    unsigned long TransferSize;// Offset=0x28 Size=0x4
    unsigned char FreeMdl;// Offset=0x2c Size=0x1
    struct _MDL * Mdl;// Offset=0x30 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0x38 Size=0x8
    unsigned char * Buffer;// Offset=0x40 Size=0x8
    struct _BUFFER_DATA * DoubleBufferData;// Offset=0x48 Size=0x8
    unsigned long TrbsPerBurst;// Offset=0x50 Size=0x4
    unsigned long RequiredTrbs;// Offset=0x54 Size=0x4
    unsigned long UsedTrbs;// Offset=0x58 Size=0x4
    struct _TRB_RANGE TrbRange;// Offset=0x60 Size=0x20
};

struct _BULK_STAGE_QUEUE// Size=0x90 (Id=800)
{
    struct _STAGE_QUEUE_HEADER Header;// Offset=0x0 Size=0x8
    struct _BULK_STAGE_DATA StageArray[1];// Offset=0x10 Size=0x80
};

struct _BULK_TRANSFER_DATA// Size=0x100 (Id=680)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char Initialized;// Offset=0x10 Size=0x1
    struct WDFREQUEST__ * WdfRequest;// Offset=0x18 Size=0x8
    struct _TRANSFER_URB * TransferUrb;// Offset=0x20 Size=0x8
    struct _BULK_DATA * BulkData;// Offset=0x28 Size=0x8
    enum _TRANSFER_CANCEL_STATE CancelState;// Offset=0x30 Size=0x4
    unsigned long TrbCompletionCode;// Offset=0x34 Size=0x4
    long WdfRequestStatus;// Offset=0x38 Size=0x4
    enum _TRANSFER_MECHANISM TransferMechanism;// Offset=0x3c Size=0x4
    struct _MDL * Mdl;// Offset=0x40 Size=0x8
    unsigned char * Buffer;// Offset=0x48 Size=0x8
    struct _BUFFER_DATA * DoubleBufferData;// Offset=0x50 Size=0x8
    unsigned long BytesTotal;// Offset=0x58 Size=0x4
    unsigned long BytesTransferred;// Offset=0x5c Size=0x4
    unsigned long BytesMapped;// Offset=0x60 Size=0x4
    unsigned long StagesCompleted;// Offset=0x64 Size=0x4
    unsigned long StagesMapped;// Offset=0x68 Size=0x4
    struct _BULK_STAGE_QUEUE StageQueue;// Offset=0x70 Size=0x90
};
