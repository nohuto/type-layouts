union _MI_NO_STEAL_NON_PAGED_POOL_LOG_STATE// Size=0x4 (Id=2522)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Table0EntryIndex:11;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xb
        unsigned long Table1EntryIndex:11;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0xb
        unsigned long ActiveTableIndex:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
    };
    unsigned long EntireState;// Offset=0x0 Size=0x4
};
