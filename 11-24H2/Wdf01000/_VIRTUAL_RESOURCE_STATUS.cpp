union _VIRTUAL_RESOURCE_STATUS// Size=0x2 (Id=2619)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PortArbitrationTableStatus:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short VcNegotiationPending:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short RsvdZ:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
