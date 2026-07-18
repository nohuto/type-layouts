struct _MM_SHARED_VAD_FLAGS// Size=0x4 (Id=1517)
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
            unsigned long PrivateMemoryAlwaysClear:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long PrivateFixup:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long HotPatchState:2;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x2
            unsigned long SecurePages:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};
