struct NVME_FID_SUPPORTED_AND_EFFECTS// Size=0x4 (Id=1211)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FSUPP:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long UDCC:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long NCC:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long NIC:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CCC:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:14;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0xe
        unsigned long UUIDSelectionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long FSPNamespace:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long FSPController:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long FSPNVMSet:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long FSPEnduranceGroup:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long FSPDomain:1;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned long FSPNVMSubsystem:1;// Offset=0x0 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long FSPReserved:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
};
