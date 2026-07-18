struct _PERFINFO_LONG_DPC_MITIGATION_INFORMATION// Size=0xc (Id=3375)
{
    unsigned long CurrentThreadId;// Offset=0x0 Size=0x4
    unsigned long NextThreadId;// Offset=0x4 Size=0x4
    char CurrentThreadPriority;// Offset=0x8 Size=0x1
    char NextThreadPriority;// Offset=0x9 Size=0x1
    unsigned char ScheduleDpcDelegate;// Offset=0xa Size=0x1
    unsigned char SwapToDpcDelegate;// Offset=0xb Size=0x1
};
