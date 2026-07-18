struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS// Size=0x18 (Id=2581)
{
    long Lock;// Offset=0x0 Size=0x4
    unsigned long EntryCount;// Offset=0x4 Size=0x4
    struct _MMPFN * Flink;// Offset=0x8 Size=0x8
    struct _MMPFN * Blink;// Offset=0x10 Size=0x8
};
