union _MI_NO_STEAL_NON_PAGED_POOL_LOG_ENTRY// Size=0x8 (Id=1666)
{
    unsigned long Tag;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long AllocationSize:31;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1f
        unsigned long Valid:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long long EntireEntry;// Offset=0x0 Size=0x8
};
