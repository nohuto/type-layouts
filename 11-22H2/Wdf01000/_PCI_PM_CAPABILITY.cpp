struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=3383)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

struct _PCI_PMC// Size=0x2 (Id=3398)
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
        struct _PM_SUPPORT// Size=0x1 (Id=14193)
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

struct _PCI_PMCSR// Size=0x2 (Id=2936)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PowerState:2;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x2
        unsigned short Rsvd1:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short NoSoftReset:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Rsvd2:4;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x4
        unsigned short PMEEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short DataSelect:4;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x4
        unsigned short DataScale:2;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x2
        unsigned short PMEStatus:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
};

struct _PCI_PMCSR_BSE// Size=0x1 (Id=3061)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Rsvd1:6;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x6
        unsigned char D3HotSupportsStopClock:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char BusPowerClockControlEnabled:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _PCI_PM_CAPABILITY// Size=0x8 (Id=384)
{
    union // Size=0x6 (Id=0)
    {
        struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
        union <unnamed-type-PMC>// Size=0x2 (Id=14175)
        {
            struct _PCI_PMC Capabilities;// Offset=0x0 Size=0x2
            unsigned short AsUSHORT;// Offset=0x0 Size=0x2
        };
        union _PCI_PM_CAPABILITY::<unnamed-type-PMC> PMC;// Offset=0x2 Size=0x2
        union <unnamed-type-PMCSR>// Size=0x2 (Id=14179)
        {
            struct _PCI_PMCSR ControlStatus;// Offset=0x0 Size=0x2
            unsigned short AsUSHORT;// Offset=0x0 Size=0x2
        };
        union _PCI_PM_CAPABILITY::<unnamed-type-PMCSR> PMCSR;// Offset=0x4 Size=0x2
        union <unnamed-type-PMCSR_BSE>// Size=0x1 (Id=14183)
        {
            struct _PCI_PMCSR_BSE BridgeSupport;// Offset=0x0 Size=0x1
            unsigned char AsUCHAR;// Offset=0x0 Size=0x1
        };
        union _PCI_PM_CAPABILITY::<unnamed-type-PMCSR_BSE> PMCSR_BSE;// Offset=0x6 Size=0x1
    };
    unsigned char Data;// Offset=0x7 Size=0x1
};
