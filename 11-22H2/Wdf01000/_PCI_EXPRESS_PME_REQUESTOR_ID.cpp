union _PCI_EXPRESS_PME_REQUESTOR_ID// Size=0x2 (Id=2496)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short FunctionNumber:3;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x3
        unsigned short DeviceNumber:5;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x5
        unsigned short BusNumber:8;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x8
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
