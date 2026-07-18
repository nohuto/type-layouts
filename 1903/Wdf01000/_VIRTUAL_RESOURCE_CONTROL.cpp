union _VIRTUAL_RESOURCE_CONTROL// Size=0x4 (Id=3362)
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
