struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _GUID// Size=0x10 (Id=55)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _TRANSFER_MECHANISM
{
    TransferMechanism_NoData=0,
    TransferMechanism_ImmediateData=1,
    TransferMechanism_DoubleBufferData=2,
    TransferMechanism_Dma=3
};

enum _TRANSFER_CANCEL_STATE
{
    TCS_NotCancelable=0,
    TCS_Cancelable=1,
    TCS_WaitingForCancelCallback=2,
    TCS_Canceled=3
};

enum _TRANSFER_TIMEOUT_STATE
{
    TTS_NoTimeout=0,
    TTS_TimeoutSet=1,
    TTS_WaitingForTimerCallback=2,
    TTS_TimedOut=3
};

struct _TRB_RANGE// Size=0x20 (Id=1028)
{
    struct _XIL_BUFFER_DATA * FirstSegment;// Offset=0x0 Size=0x8
    unsigned long FirstSegmentStartIndex;// Offset=0x8 Size=0x4
    struct _XIL_BUFFER_DATA * LastSegment;// Offset=0x10 Size=0x8
    unsigned long LastSegmentEndIndex;// Offset=0x18 Size=0x4
};

enum _SECURE_DMA_RESOURCE_TYPE
{
    DmaNoBuffer=0,
    DmaExposedSection=1,
    DmaSecureSectionGuid=2
};

struct _SECURE_DMA_RESOURCE// Size=0x20 (Id=706)
{
    enum _SECURE_DMA_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Offset;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long StageId;// Offset=0xc Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * ExposedSectionHandle;// Offset=0x10 Size=0x8
        struct _GUID SecureSectionGuid;// Offset=0x10 Size=0x10
    };
};

struct _unnamed_45// Size=0x8 (Id=45)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=46)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_45 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SCATTER_GATHER_ELEMENT// Size=0x18 (Id=1027)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long long Reserved;// Offset=0x10 Size=0x8
};

struct _unnamed_917// Size=0x28 (Id=917)
{
    unsigned long NumberOfElements;// Offset=0x0 Size=0x4
    unsigned long long Reserved;// Offset=0x8 Size=0x8
    struct _SCATTER_GATHER_ELEMENT Elements[1];// Offset=0x10 Size=0x18
};

struct _CONTROL_TRANSFER_DATA// Size=0xf8 (Id=918)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned char Initialized;// Offset=0x10 Size=0x1
    struct WDFREQUEST__ * WdfRequest;// Offset=0x18 Size=0x8
    struct _GUID ActivityId;// Offset=0x20 Size=0x10
    struct _TRANSFER_URB * TransferUrb;// Offset=0x30 Size=0x8
    struct _CONTROL_DATA * ControlData;// Offset=0x38 Size=0x8
    enum _TRANSFER_MECHANISM TransferMechanism;// Offset=0x40 Size=0x4
    struct _MDL * Mdl;// Offset=0x48 Size=0x8
    unsigned char * Buffer;// Offset=0x50 Size=0x8
    struct _XIL_BUFFER_DATA * DoubleBufferData;// Offset=0x58 Size=0x8
    struct _SCATTER_GATHER_LIST * ScatterGatherList;// Offset=0x60 Size=0x8
    unsigned long BytesTotal;// Offset=0x68 Size=0x4
    unsigned long BytesTransferred;// Offset=0x6c Size=0x4
    enum _TRANSFER_CANCEL_STATE CancelState;// Offset=0x70 Size=0x4
    enum _TRANSFER_TIMEOUT_STATE TimeoutState;// Offset=0x74 Size=0x4
    long Status;// Offset=0x78 Size=0x4
    unsigned long TrbCompletionCode;// Offset=0x7c Size=0x4
    unsigned long TDCount;// Offset=0x80 Size=0x4
    unsigned long ReceivedEventCount;// Offset=0x84 Size=0x4
    struct _TRB_RANGE TrbRange;// Offset=0x88 Size=0x20
    struct _SECURE_DMA_RESOURCE SecureDmaResource;// Offset=0xa8 Size=0x20
    unsigned long StageId;// Offset=0xc8 Size=0x4
    struct _unnamed_917 PreallocatedScatterGatherList;// Offset=0xd0 Size=0x28
};
