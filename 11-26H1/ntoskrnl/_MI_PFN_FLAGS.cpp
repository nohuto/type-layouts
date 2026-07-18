struct _MI_PFN_FLAGS// Size=0x4 (Id=655)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ReferenceCount:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long PageLocation:3;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x3
            unsigned long WriteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Modified:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long ReadInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long CacheAttribute:2;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x2
            unsigned long Priority:3;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x3
            unsigned long OnProtectedStandby:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long InPageError:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long SystemChargedPage:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long RemovalRequested:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long ParityError:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};
