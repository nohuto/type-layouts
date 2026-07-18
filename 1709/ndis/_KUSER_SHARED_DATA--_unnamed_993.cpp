union _KUSER_SHARED_DATA::_unnamed_993// Size=0x4 (Id=993)
{
    unsigned long SharedDataFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DbgErrorPortPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DbgElevationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DbgVirtEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DbgInstallerDetectEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DbgLkgEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DbgDynProcessorEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DbgConsoleBrokerEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long DbgSecureBootEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long DbgMultiSessionSku:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long DbgMultiUsersInSessionSku:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long DbgStateSeparationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long SpareBits:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
};
