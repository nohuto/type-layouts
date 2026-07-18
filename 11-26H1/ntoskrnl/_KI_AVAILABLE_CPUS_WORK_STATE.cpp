union _KI_AVAILABLE_CPUS_WORK_STATE// Size=0x4 (Id=1505)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long WorkerExecuting:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long WorkPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AllFields;// Offset=0x0 Size=0x4
};
