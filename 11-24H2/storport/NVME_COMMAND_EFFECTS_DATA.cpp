union NVME_COMMAND_EFFECTS_DATA// Size=0x4 (Id=1213)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CSUPP:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long LBCC:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NCC:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NIC:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CCC:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:11;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xb
        unsigned long CSE:3;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x3
        unsigned long UUIDSelectionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long CSPNamespace:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long CSPController:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long CSPNVMSet:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long CSPEnduranceGroup:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long CSPDomain:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long CSPNVMSubsystem:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long CSPReserved:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
