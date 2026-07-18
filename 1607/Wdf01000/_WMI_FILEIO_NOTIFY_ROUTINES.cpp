struct _WMI_FILEIO_NOTIFY_ROUTINES// Size=0x20 (Id=1887)
{
    void  ( * FileNameRundownRoutine)(void * ,struct _UNICODE_STRING * ,unsigned long ,unsigned short );// Offset=0x0 Size=0x8
    void  ( * FileNameNotifyRoutine)(void * ,struct _UNICODE_STRING * ,unsigned long ,unsigned short );// Offset=0x8 Size=0x8
    void  ( * InitiationNotifyRoutine)(struct _EVENT_DATA_DESCRIPTOR * ,unsigned long ,unsigned long ,unsigned short ,struct _GUID * );// Offset=0x10 Size=0x8
    void  ( * CompletionNotifyRoutine)(struct _EVENT_DATA_DESCRIPTOR * ,unsigned long ,unsigned long ,unsigned short ,struct _GUID * );// Offset=0x18 Size=0x8
};
