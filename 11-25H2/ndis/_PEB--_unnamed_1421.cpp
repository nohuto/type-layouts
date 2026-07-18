union _PEB::_unnamed_1421// Size=0x1 (Id=1421)
{
    unsigned char BitField;// Offset=0x0 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char ImageUsesLargePages:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IsProtectedProcess:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char IsImageDynamicallyRelocated:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char SkipPatchingUser32Forwarders:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char IsPackagedProcess:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char IsAppContainer:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char IsProtectedProcessLight:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char IsLongPathAwareProcess:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};
