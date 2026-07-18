struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER// Size=0x4 (Id=1727)
{
    unsigned short CapabilityID;// Offset=0x0 Size=0x2
    struct // Size=0x2 (Id=0)
    {
        unsigned short Version:4;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short Next:12;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
};

union _PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER// Size=0x4 (Id=1740)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PciPmL12Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PciPmL11Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AspmL12Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AspmL11Supported:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long L1PmSsSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Rsvd:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long PortCommonModeRestoreTime:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long PortTPowerOnScale:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long Rsvd2:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long PortTPowerOnValue:5;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x5
        unsigned long Rsvd3:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER// Size=0x4 (Id=2208)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PciPmL12Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PciPmL11Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AspmL12Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AspmL11Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Rsvd:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long CommonModeRestoreTime:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long LtrL12ThresholdValue:10;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xa
        unsigned long Rsvd2:3;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x3
        unsigned long LtrL12ThresholdScale:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER// Size=0x4 (Id=2299)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TPowerOnScale:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Rsvd:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long TPowerOnValue:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long Rsvd2:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_EXPRESS_L1_PM_SS_CAPABILITY// Size=0x10 (Id=1496)
{
    struct _PCI_EXPRESS_ENHANCED_CAPABILITY_HEADER Header;// Offset=0x0 Size=0x4
    union _PCI_EXPRESS_L1_PM_SS_CAPABILITIES_REGISTER L1PmSsCapabilities;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_L1_PM_SS_CONTROL_1_REGISTER L1PmSsControl1;// Offset=0x8 Size=0x4
    union _PCI_EXPRESS_L1_PM_SS_CONTROL_2_REGISTER L1PmSsControl2;// Offset=0xc Size=0x4
};
