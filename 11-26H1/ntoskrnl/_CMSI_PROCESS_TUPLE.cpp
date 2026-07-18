struct _CMSI_RW_LOCK// Size=0x8 (Id=1418)
{
    void * Reserved;// Offset=0x0 Size=0x8
};

struct _CMSI_PROCESS_TUPLE// Size=0x30 (Id=2166)
{
    void * ProcessHandle;// Offset=0x0 Size=0x8
    void * ProcessReference;// Offset=0x8 Size=0x8
    struct _CMSI_RW_LOCK WorkingSetLock;// Offset=0x10 Size=0x8
    unsigned long long LockedPageCharges;// Offset=0x18 Size=0x8
    unsigned long long WorkingSetMinimum;// Offset=0x20 Size=0x8
    unsigned long long WorkingSetMaximum;// Offset=0x28 Size=0x8
};
