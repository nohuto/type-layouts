struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=3996)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_NPEM_CAPABILITY_REGISTER// Size=0x4 (Id=2240)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Capable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ResetCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long OkCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long LocateCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FailCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long RebuildCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PFACapable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HotSpareCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InACriticalArrayCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long InAFailedArrayCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InvalidDeviceTypeCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DisabledCapable:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Rsvd:12;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0xc
        unsigned long EnclosureSpecificCapabilities:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_NPEM_CONTROL_REGISTER// Size=0x4 (Id=1134)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enable:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InitiateReset:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long OkControl:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long LocateControl:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FailControl:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long RebuildControl:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long PFAControl:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HotSpareControl:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long InACriticalArrayControl:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long InAFailedArrayControl:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long InvalidDeviceTypeControl:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long DisabledControl:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Rsvd:12;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0xc
        unsigned long EnclosureSpecificControls:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_NPEM_STATUS_REGISTER// Size=0x4 (Id=2669)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CommandCompleted:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Rsvd:23;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x17
        unsigned long EnclosureSpecificStatus:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_NPEM_CAPABILITY// Size=0x10 (Id=3668)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_NPEM_CAPABILITY_REGISTER Capability;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_NPEM_CONTROL_REGISTER Control;// Offset=0x8 Size=0x4
    union _PCI_EXPRESS_NPEM_STATUS_REGISTER Status;// Offset=0xc Size=0x4
};
