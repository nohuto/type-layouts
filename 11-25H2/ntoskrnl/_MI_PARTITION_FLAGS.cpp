struct _MI_PARTITION_FLAGS// Size=0x4 (Id=2193)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long BeingDeleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long PageListsInitialized:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long StoreReservedPagesCharged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long UseProtectedSlabAllocators:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long PureHolding:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long ZeroPagesOptional:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long BackgroundZeroingDisabled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long SpecialPurposeMemory:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        };
        long EntireField;// Offset=0x0 Size=0x4
    };
};
