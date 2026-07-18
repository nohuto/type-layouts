struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS// Size=0x18 (Id=2581)
{
    long Lock;// Offset=0x0 Size=0x4
    unsigned long EntryCount;// Offset=0x4 Size=0x4
    struct _MMPFN * Flink;// Offset=0x8 Size=0x8
    struct _MMPFN * Blink;// Offset=0x10 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x110 (Id=2143)
{
    struct _MMPTE * PteResumePoint[3];// Offset=0x0 Size=0x18
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long LockedEntries;// Offset=0x20 Size=0x8
    struct _MI_WORKING_SET_HARD_LIMIT * HardLimit;// Offset=0x28 Size=0x8
    unsigned long long TrimmedPageCount;// Offset=0x30 Size=0x8
    unsigned long AttachedThreads;// Offset=0x38 Size=0x4
    long long AddedLeafPages;// Offset=0x40 Size=0x8
    struct _KGATE * ExitOutswapGate;// Offset=0x48 Size=0x8
    struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];// Offset=0x50 Size=0xc0
};
