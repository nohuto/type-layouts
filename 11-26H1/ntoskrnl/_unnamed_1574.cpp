union _unnamed_1574// Size=0x4 (Id=1574)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Inserted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ThreadActive:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AutoBoostAcquired:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EnteredCriticalRegion:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
    };
    unsigned long EntireState;// Offset=0x0 Size=0x4
};
