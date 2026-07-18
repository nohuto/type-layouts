struct _ETW_SCHEDULE_THREAD_EVENT// Size=0xc (Id=3132)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long TargetProcessorNumber;// Offset=0x4 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Reserved:32;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x20
        };
        unsigned long Flags;// Offset=0x8 Size=0x4
    };
};
