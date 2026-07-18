union _VIRTUAL_RESOURCE_CAPABILITY// Size=0x4 (Id=2071)
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

union _VIRTUAL_RESOURCE_CONTROL// Size=0x4 (Id=1475)
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

union _VIRTUAL_RESOURCE_STATUS// Size=0x2 (Id=3516)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PortArbitrationTableStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short VcNegotiationPending:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short RsvdZ:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _VIRTUAL_RESOURCE// Size=0xc (Id=2612)
{
    union _VIRTUAL_RESOURCE_CAPABILITY Capability;// Offset=0x0 Size=0x4
    union _VIRTUAL_RESOURCE_CONTROL Control;// Offset=0x4 Size=0x4
    unsigned short RsvdP;// Offset=0x8 Size=0x2
    union _VIRTUAL_RESOURCE_STATUS Status;// Offset=0xa Size=0x2
};
