struct _MM_PRIVATE_VAD_FLAGS// Size=0x4 (Id=1196)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long DeleteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long NoChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long VadType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
            unsigned long Protection:5;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x5
            unsigned long PreferredNode:7;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x7
            unsigned long PageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x2
            unsigned long PrivateMemoryAlwaysSet:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long WriteWatch:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long FixedLargePageSize:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long MemCommit:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long Enclave:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long ShadowStack:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long PhysicalMemoryPfnsReferenced:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long SecurePages:1;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long Tagged:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};
