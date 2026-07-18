struct _STOR_WMI_TRACE_MESSAGE_ARGS// Size=0x30 (Id=204)
{
    unsigned long long TraceHandle;// Offset=0x0 Size=0x8
    unsigned long MessageFlags;// Offset=0x8 Size=0x4
    struct _GUID * MessageGuid;// Offset=0x10 Size=0x8
    unsigned short MessageNumber;// Offset=0x18 Size=0x2
    char * Args;// Offset=0x20 Size=0x8
    unsigned long result;// Offset=0x28 Size=0x4
};
