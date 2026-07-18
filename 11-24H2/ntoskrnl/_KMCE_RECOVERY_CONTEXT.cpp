struct _KMCE_RECOVERY_CONTEXT// Size=0x10 (Id=1482)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long PhysicalAddress;// Offset=0x8 Size=0x8
        void * Record;// Offset=0x8 Size=0x8
    };
};
