struct _NDIS_SWITCH_PORT_DESTINATION// Size=0x8 (Id=634)
{
    unsigned int PortId;// Offset=0x0 Size=0x4
    unsigned short NicIndex;// Offset=0x4 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short IsExcluded:1;// Offset=0x6 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PreserveVLAN:1;// Offset=0x6 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short PreservePriority:1;// Offset=0x6 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short Reserved:13;// Offset=0x6 Size=0x2 BitOffset=0x3 BitSize=0xd
    };
};
