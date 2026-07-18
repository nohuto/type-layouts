struct _ETW_LBR_ENTRY// Size=0x18 (Id=2943)
{
    void * FromAddress;// Offset=0x0 Size=0x8
    void * ToAddress;// Offset=0x8 Size=0x8
    void * Reserved;// Offset=0x10 Size=0x8
};

struct _LBR_TRACE_EVENT_DATA// Size=0x30 (Id=1837)
{
    unsigned long long TimeStamp;// Offset=0x0 Size=0x8
    unsigned long ProcessId;// Offset=0x8 Size=0x4
    unsigned long ThreadId;// Offset=0xc Size=0x4
    unsigned long Options;// Offset=0x10 Size=0x4
    struct _ETW_LBR_ENTRY Entries[1];// Offset=0x18 Size=0x18
};
