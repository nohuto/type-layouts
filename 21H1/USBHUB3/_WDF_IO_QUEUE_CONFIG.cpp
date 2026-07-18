enum _WDF_IO_QUEUE_DISPATCH_TYPE
{
    WdfIoQueueDispatchInvalid=0,
    WdfIoQueueDispatchSequential=1,
    WdfIoQueueDispatchParallel=2,
    WdfIoQueueDispatchManual=3,
    WdfIoQueueDispatchMax=4
};

enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct _anonymous_283// Size=0x4 (Id=283)
{
    unsigned long NumberOfPresentedRequests;// Offset=0x0 Size=0x4
};

union _anonymous_284// Size=0x4 (Id=284)
{
    struct _anonymous_283 Parallel;// Offset=0x0 Size=0x4
};

struct _WDF_IO_QUEUE_CONFIG// Size=0x60 (Id=285)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    enum _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType;// Offset=0x4 Size=0x4
    enum _WDF_TRI_STATE PowerManaged;// Offset=0x8 Size=0x4
    unsigned char AllowZeroLengthRequests;// Offset=0xc Size=0x1
    unsigned char DefaultQueue;// Offset=0xd Size=0x1
    void  ( * EvtIoDefault)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * );// Offset=0x10 Size=0x8
    void  ( * EvtIoRead)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * ,unsigned long long );// Offset=0x18 Size=0x8
    void  ( * EvtIoWrite)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * ,unsigned long long );// Offset=0x20 Size=0x8
    void  ( * EvtIoDeviceControl)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x28 Size=0x8
    void  ( * EvtIoInternalDeviceControl)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * ,unsigned long long ,unsigned long long ,unsigned long );// Offset=0x30 Size=0x8
    void  ( * EvtIoStop)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * ,unsigned long );// Offset=0x38 Size=0x8
    void  ( * EvtIoResume)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * );// Offset=0x40 Size=0x8
    void  ( * EvtIoCanceledOnQueue)(struct WDFQUEUE__ * ,struct WDFREQUEST__ * );// Offset=0x48 Size=0x8
    union _anonymous_284 Settings;// Offset=0x50 Size=0x4
    struct WDFDRIVER__ * Driver;// Offset=0x58 Size=0x8
};
