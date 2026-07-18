union DBGK_LIVEDUMP_FLAGS// Size=0x4 (Id=3371)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long UserPages:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long RequestMinidump:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long HypervisorPages:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
