union _unnamed_705// Size=0x4 (Id=705)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DemoteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PreferZeroedPages:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ZeroOnFree:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LargePageIndex:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};
