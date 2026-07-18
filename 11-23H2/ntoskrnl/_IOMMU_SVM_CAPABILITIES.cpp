struct _unnamed_271// Size=0x4 (Id=271)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Padding:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long PasidMaxWidth:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long PasidExePerm:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long PasidPrivMode:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long AtsPageAlignedRequest:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AtsGlobalInvalidate:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long AtsInvalidateQueueDepth:5;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x5
        unsigned long PriPrgResponsePasidRequired:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Rsvd:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
};

struct _unnamed_272// Size=0x4 (Id=272)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Padding:23;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x17
        unsigned long IsSecureDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Rsvd:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _IOMMU_SVM_CAPABILITIES// Size=0x4 (Id=273)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AtsCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PriCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PasidCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd0:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    struct _unnamed_271 CapReg;// Offset=0x0 Size=0x4
    struct _unnamed_272 DeviceInformation;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long AtsPriPasidBits:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long CapRegBits:15;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xf
        unsigned long DeviceInformationBits:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Rsvd1:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};
