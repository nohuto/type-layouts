struct _ETW_UMS_EVENT_DISASSOCIATE// Size=0x14 (Id=3310)
{
    unsigned long ProcessId;// Offset=0x0 Size=0x4
    unsigned long ScheduledThreadId;// Offset=0x4 Size=0x4
    unsigned long PrimaryThreadId;// Offset=0x8 Size=0x4
    unsigned long UmsApcControlFlags;// Offset=0xc Size=0x4
    long Status;// Offset=0x10 Size=0x4
};
