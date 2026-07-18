struct _PCI_PMC// Size=0x2 (Id=4609)
{
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Version:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char PMEClock:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Rsvd1:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char DeviceSpecificInitialization:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Rsvd2:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
        };
        struct _PM_SUPPORT// Size=0x1 (Id=13477)
        {
            unsigned char Rsvd2:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char D1:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char D2:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char PMED0:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char PMED1:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char PMED2:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char PMED3Hot:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char PMED3Cold:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
    };
    struct _PCI_PMC::_PM_SUPPORT Support;// Offset=0x1 Size=0x1
};

union _PCI_PM_CAPABILITY::<unnamed-type-PMC>// Size=0x2 (Id=1637)
{
    struct _PCI_PMC Capabilities;// Offset=0x0 Size=0x2
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};
