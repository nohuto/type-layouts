struct _WMI_WDF_NOTIFY_ROUTINES// Size=0x20 (Id=1006)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * DpcNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x8 Size=0x8
    void  ( * InterruptNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x10 Size=0x8
    void  ( * WorkItemNotifyRoutine)(void * ,unsigned long ,unsigned long ,unsigned short ,unsigned char );// Offset=0x18 Size=0x8
};
