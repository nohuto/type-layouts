struct _ETW_ALL_POSSIBLE_NOTIFY_ROUTINES// Size=0x78 (Id=2483)
{
    void  ( * DiskIoCompletionRoutine)(unsigned long ,unsigned long ,struct _IRP * );// Offset=0x0 Size=0x8
    void  ( * DiskIoInitiationRoutine)(struct _IRP * );// Offset=0x8 Size=0x8
    void  ( * OpticalCompletionRoutine)(unsigned long ,unsigned long ,struct _IRP * ,union _LARGE_INTEGER );// Offset=0x10 Size=0x8
    void  ( * OpticalInitiationRoutine)(struct _IRP * );// Offset=0x18 Size=0x8
    void  ( * FileNameRoutine)(void * ,struct _UNICODE_STRING * ,unsigned long ,unsigned short );// Offset=0x20 Size=0x8
    void  ( * FileInitiationRoutine)(struct _EVENT_DATA_DESCRIPTOR * ,unsigned long ,unsigned long ,unsigned short ,struct _GUID * );// Offset=0x28 Size=0x8
    void  ( * FileCompletionRoutine)(struct _EVENT_DATA_DESCRIPTOR * ,unsigned long ,unsigned long ,unsigned short ,struct _GUID * );// Offset=0x30 Size=0x8
    void  ( * TdiRoutine)(unsigned long ,void * ,unsigned long ,struct _ETHREAD * );// Offset=0x38 Size=0x8
    void  ( * SplitIoRoutine)(struct _IRP * ,struct _IRP * ,unsigned short );// Offset=0x40 Size=0x8
    void  ( * FltIoInitiationRoutine)(void * ,unsigned long ,unsigned long ,unsigned short );// Offset=0x48 Size=0x8
    void  ( * FltIoCompletionRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,struct _ETW_KERNEL_TRACE_TIMESTAMP * );// Offset=0x50 Size=0x8
    void  ( * KernelTraceTimeStampRoutine)(struct _ETW_KERNEL_TRACE_TIMESTAMP * ,unsigned long );// Offset=0x58 Size=0x8
    void  ( * WdfRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x60 Size=0x8
    void  ( * WdfSystemRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x68 Size=0x8
    void  ( * FltIoRedirectionNotifyRoutine)(struct _IRP * ,struct _FILE_OBJECT * );// Offset=0x70 Size=0x8
};
