struct _MMSUPPORT_FLAGS// Size=0x4 (Id=537)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char WorkingSetType:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
            unsigned char MaximumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char MinimumWorkingSetHard:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char LinearAddressProtected:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved0:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char u1;// Offset=0x0 Size=0x1
        unsigned char Reserved1;// Offset=0x1 Size=0x1
        unsigned char MemoryPriority;// Offset=0x2 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char WsleDeleted:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char SvmEnabled:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char ForceAge:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char ForceTrim:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char CommitReleaseState:2;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x2
            unsigned char Reserved3:2;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        unsigned char u2;// Offset=0x3 Size=0x1
        unsigned long EntireFlags;// Offset=0x0 Size=0x4
    };
};
