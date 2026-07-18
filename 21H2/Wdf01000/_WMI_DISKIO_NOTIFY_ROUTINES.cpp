struct _WMI_DISKIO_NOTIFY_ROUTINES// Size=0x20 (Id=2369)
{
    void  ( * CompletionNotifyRoutine)(unsigned long ,unsigned long ,struct _IRP * );// Offset=0x0 Size=0x8
    void  ( * InitiationNotifyRoutine)(struct _IRP * );// Offset=0x8 Size=0x8
    void  ( * OpticalCompletionRoutine)(unsigned long ,unsigned long ,struct _IRP * ,union _LARGE_INTEGER );// Offset=0x10 Size=0x8
    void  ( * OpticalInitiationRoutine)(struct _IRP * );// Offset=0x18 Size=0x8
};
