struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=4787)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _VIRTUAL_CHANNEL_CAPABILITIES1// Size=0x4 (Id=2596)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedVCCount:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long RsvdP1:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LowPriorityExtendedVCCount:3;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x3
        unsigned long RsvdP2:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReferenceClock:2;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x2
        unsigned long PortArbitrationTableEntrySize:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        unsigned long RsvdP3:20;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x14
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _VIRTUAL_CHANNEL_CAPABILITIES2// Size=0x4 (Id=2929)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long VCArbitrationCapability:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long RsvdP:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
        unsigned long VCArbitrationTableOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _VIRTUAL_CHANNEL_CONTROL// Size=0x2 (Id=3935)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short LoadVCArbitrationTable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short VCArbitrationSelect:3;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x3
        unsigned short RsvdP:12;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _VIRTUAL_CHANNEL_STATUS// Size=0x2 (Id=1676)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short VCArbitrationTableStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short RsvdZ:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _VIRTUAL_RESOURCE_CAPABILITY// Size=0x4 (Id=1755)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PortArbitrationCapability:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long RsvdP1:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned long Undefined:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long RejectSnoopTransactions:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long MaximumTimeSlots:7;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x7
        unsigned long RsvdP2:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long PortArbitrationTableOffset:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _VIRTUAL_RESOURCE_CONTROL// Size=0x4 (Id=3219)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TcVcMap:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long RsvdP1:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long LoadPortArbitrationTable:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long PortArbitrationSelect:3;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x3
        unsigned long RsvdP2:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned long VcID:3;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x3
        unsigned long RsvdP3:4;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x4
        unsigned long VcEnable:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _VIRTUAL_RESOURCE_STATUS// Size=0x2 (Id=2704)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PortArbitrationTableStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short VcNegotiationPending:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short RsvdZ:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _VIRTUAL_RESOURCE// Size=0xc (Id=4653)
{
    union _VIRTUAL_RESOURCE_CAPABILITY Capability;// Offset=0x0 Size=0x4
    union _VIRTUAL_RESOURCE_CONTROL Control;// Offset=0x4 Size=0x4
    unsigned short RsvdP;// Offset=0x8 Size=0x2
    union _VIRTUAL_RESOURCE_STATUS Status;// Offset=0xa Size=0x2
};

struct _PCI_EXPRESS_VIRTUAL_CHANNEL_CAPABILITY// Size=0x70 (Id=1747)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _VIRTUAL_CHANNEL_CAPABILITIES1 Capabilities1;// Offset=0x4 Size=0x4
    union _VIRTUAL_CHANNEL_CAPABILITIES2 Capabilities2;// Offset=0x8 Size=0x4
    union _VIRTUAL_CHANNEL_CONTROL Control;// Offset=0xc Size=0x2
    union _VIRTUAL_CHANNEL_STATUS Status;// Offset=0xe Size=0x2
    struct _VIRTUAL_RESOURCE Resource[8];// Offset=0x10 Size=0x60
};
