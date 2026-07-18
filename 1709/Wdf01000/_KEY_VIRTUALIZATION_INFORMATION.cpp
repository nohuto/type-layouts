struct _KEY_VIRTUALIZATION_INFORMATION// Size=0x4 (Id=2417)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VirtualizationCandidate:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long VirtualizationEnabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long VirtualTarget:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long VirtualStore:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long VirtualSource:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
};
