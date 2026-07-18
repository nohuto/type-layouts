struct _WMI_FILEIO_NOTIFY_ROUTINES// Size=0x20 (Id=2063)
{
    void  ( * FileNameRundownRoutine)(struct _EPROCESS * ,void * ,struct _UNICODE_STRING * ,struct _EJOB * ,unsigned long ,unsigned short );// Offset=0x0 Size=0x8
    void  ( * FileNameNotifyRoutine)(struct _EPROCESS * ,void * ,struct _UNICODE_STRING * ,struct _EJOB * ,unsigned long ,unsigned short );// Offset=0x8 Size=0x8
    void  ( * InitiationNotifyRoutine)(struct _ETHREAD * ,struct _EVENT_DATA_DESCRIPTOR * ,unsigned long ,unsigned long ,unsigned short ,struct _GUID * );// Offset=0x10 Size=0x8
    void  ( * CompletionNotifyRoutine)(struct _ETHREAD * ,struct _EVENT_DATA_DESCRIPTOR * ,unsigned long ,unsigned long ,unsigned short ,struct _GUID * );// Offset=0x18 Size=0x8
};
