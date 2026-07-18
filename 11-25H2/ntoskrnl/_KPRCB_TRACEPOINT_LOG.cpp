struct _KPRCB_TRACEPOINT_LOG_ENTRY// Size=0x20 (Id=2101)
{
    unsigned long long OldPc;// Offset=0x0 Size=0x8
    unsigned long long OldSp;// Offset=0x8 Size=0x8
    unsigned long long NewPc;// Offset=0x10 Size=0x8
    unsigned long long NewSp;// Offset=0x18 Size=0x8
};

struct _KPRCB_TRACEPOINT_LOG// Size=0x2008 (Id=1793)
{
    struct _KPRCB_TRACEPOINT_LOG_ENTRY Entries[256];// Offset=0x0 Size=0x2000
    unsigned long LogIndex;// Offset=0x2000 Size=0x4
};
