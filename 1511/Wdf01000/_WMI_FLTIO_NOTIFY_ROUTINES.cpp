struct _WMI_FLTIO_NOTIFY_ROUTINES// Size=0x30 (Id=2410)
{
    void  ( * TimeStampRoutine)(struct _ETW_KERNEL_TRACE_TIMESTAMP * ,unsigned long );// Offset=0x0 Size=0x8
    void  ( * FailureNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short );// Offset=0x8 Size=0x8
    void  ( * InitiationNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short );// Offset=0x10 Size=0x8
    void  ( * CompletionNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,struct _ETW_KERNEL_TRACE_TIMESTAMP * );// Offset=0x18 Size=0x8
    void  ( * FastCompletionNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,struct _ETW_KERNEL_TRACE_TIMESTAMP * );// Offset=0x20 Size=0x8
    void  ( * IoRedirectionNotifyRoutine)(struct _IRP * ,struct _FILE_OBJECT * );// Offset=0x28 Size=0x8
};
