union _unnamed_565// Size=0x4 (Id=565)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};

struct _RAID_MINIPORT_SYSTEM_THREAD_CONTEXT// Size=0x10 (Id=566)
{
    union _unnamed_565 StateFlags;// Offset=0x0 Size=0x4
    unsigned long SystemThreadMaxCount;// Offset=0x4 Size=0x4
    unsigned long SystemThreadCurrentCount;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};
