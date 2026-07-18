union _XPF_MCE_FLAGS// Size=0x4 (Id=2234)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MCG_CapabilityRW:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MCG_GlobalControlRW:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _XPF_MC_BANK_FLAGS// Size=0x1 (Id=2277)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ClearOnInitializationRW:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ControlDataRW:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

struct _WHEA_XPF_MC_BANK_DESCRIPTOR// Size=0x1c (Id=2951)
{
    unsigned char BankNumber;// Offset=0x0 Size=0x1
    unsigned char ClearOnInitialization;// Offset=0x1 Size=0x1
    unsigned char StatusDataFormat;// Offset=0x2 Size=0x1
    union _XPF_MC_BANK_FLAGS Flags;// Offset=0x3 Size=0x1
    unsigned long ControlMsr;// Offset=0x4 Size=0x4
    unsigned long StatusMsr;// Offset=0x8 Size=0x4
    unsigned long AddressMsr;// Offset=0xc Size=0x4
    unsigned long MiscMsr;// Offset=0x10 Size=0x4
    unsigned long long ControlData;// Offset=0x14 Size=0x8
};

struct _WHEA_XPF_MCE_DESCRIPTOR// Size=0x398 (Id=3678)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char NumberOfBanks;// Offset=0x3 Size=0x1
    union _XPF_MCE_FLAGS Flags;// Offset=0x4 Size=0x4
    unsigned long long MCG_Capability;// Offset=0x8 Size=0x8
    unsigned long long MCG_GlobalControl;// Offset=0x10 Size=0x8
    struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];// Offset=0x18 Size=0x380
};

union _WHEA_NOTIFICATION_FLAGS// Size=0x2 (Id=1764)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PollIntervalRW:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short SwitchToPollingThresholdRW:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short SwitchToPollingWindowRW:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short ErrorThresholdRW:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short ErrorThresholdWindowRW:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _WHEA_NOTIFICATION_DESCRIPTOR// Size=0x1c (Id=3116)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Length;// Offset=0x1 Size=0x1
        union _WHEA_NOTIFICATION_FLAGS Flags;// Offset=0x2 Size=0x2
        union <unnamed-type-u>// Size=0x18 (Id=24530)
        {
            struct <unnamed-type-Polled>// Size=0x4 (Id=24531)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Polled> Polled;// Offset=0x0 Size=0x4
            struct <unnamed-type-Interrupt>// Size=0x18 (Id=24534)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Interrupt> Interrupt;// Offset=0x0 Size=0x18
            struct <unnamed-type-LocalInterrupt>// Size=0x18 (Id=24542)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-LocalInterrupt> LocalInterrupt;// Offset=0x0 Size=0x18
            struct <unnamed-type-Sci>// Size=0x18 (Id=24550)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sci> Sci;// Offset=0x0 Size=0x18
            struct <unnamed-type-Nmi>// Size=0x18 (Id=24558)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Nmi> Nmi;// Offset=0x0 Size=0x18
            struct <unnamed-type-Sea>// Size=0x18 (Id=24566)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sea> Sea;// Offset=0x0 Size=0x18
            struct <unnamed-type-Sei>// Size=0x18 (Id=24574)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Sei> Sei;// Offset=0x0 Size=0x18
            struct <unnamed-type-Gsiv>// Size=0x18 (Id=24582)
            {
                unsigned long PollInterval;// Offset=0x0 Size=0x4
                unsigned long Vector;// Offset=0x4 Size=0x4
                unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
                unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
                unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
                unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
            };
            struct _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Gsiv> Gsiv;// Offset=0x0 Size=0x18
        };
    };
    union _WHEA_NOTIFICATION_DESCRIPTOR::<unnamed-type-u> u;// Offset=0x4 Size=0x18
};

struct _WHEA_XPF_CMC_DESCRIPTOR// Size=0x3a4 (Id=2677)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char NumberOfBanks;// Offset=0x3 Size=0x1
    unsigned long Reserved;// Offset=0x4 Size=0x4
    struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;// Offset=0x8 Size=0x1c
    struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];// Offset=0x24 Size=0x380
};

struct _WHEA_XPF_NMI_DESCRIPTOR// Size=0x3 (Id=2110)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
};

struct _WHEA_IPF_MCA_DESCRIPTOR// Size=0x4 (Id=2827)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _WHEA_IPF_CMC_DESCRIPTOR// Size=0x4 (Id=2985)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _WHEA_IPF_CPE_DESCRIPTOR// Size=0x4 (Id=3235)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _WHEA_PCI_SLOT_NUMBER// Size=0x4 (Id=3646)
{
    union // Size=0x4 (Id=0)
    {
        union <unnamed-type-u>// Size=0x4 (Id=24598)
        {
            struct <unnamed-type-bits>// Size=0x4 (Id=24599)
            {
                unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
                unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
                unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
            };
            struct _WHEA_PCI_SLOT_NUMBER::<unnamed-type-u>::<unnamed-type-bits> bits;// Offset=0x0 Size=0x4
            unsigned long AsULONG;// Offset=0x0 Size=0x4
        };
        union _WHEA_PCI_SLOT_NUMBER::<unnamed-type-u> u;// Offset=0x0 Size=0x4
    };
};

union _AER_ROOTPORT_DESCRIPTOR_FLAGS// Size=0x2 (Id=1860)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short UncorrectableErrorMaskRW:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short UncorrectableErrorSeverityRW:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short CorrectableErrorMaskRW:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short AdvancedCapsAndControlRW:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short RootErrorCommandRW:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Reserved:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _WHEA_AER_ROOTPORT_DESCRIPTOR// Size=0x24 (Id=2336)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    struct _WHEA_PCI_SLOT_NUMBER Slot;// Offset=0x8 Size=0x4
    unsigned short DeviceControl;// Offset=0xc Size=0x2
    union _AER_ROOTPORT_DESCRIPTOR_FLAGS Flags;// Offset=0xe Size=0x2
    unsigned long UncorrectableErrorMask;// Offset=0x10 Size=0x4
    unsigned long UncorrectableErrorSeverity;// Offset=0x14 Size=0x4
    unsigned long CorrectableErrorMask;// Offset=0x18 Size=0x4
    unsigned long AdvancedCapsAndControl;// Offset=0x1c Size=0x4
    unsigned long RootErrorCommand;// Offset=0x20 Size=0x4
};

union _AER_ENDPOINT_DESCRIPTOR_FLAGS// Size=0x2 (Id=2641)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short UncorrectableErrorMaskRW:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short UncorrectableErrorSeverityRW:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short CorrectableErrorMaskRW:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short AdvancedCapsAndControlRW:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short Reserved:12;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0xc
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _WHEA_AER_ENDPOINT_DESCRIPTOR// Size=0x20 (Id=1948)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    struct _WHEA_PCI_SLOT_NUMBER Slot;// Offset=0x8 Size=0x4
    unsigned short DeviceControl;// Offset=0xc Size=0x2
    union _AER_ENDPOINT_DESCRIPTOR_FLAGS Flags;// Offset=0xe Size=0x2
    unsigned long UncorrectableErrorMask;// Offset=0x10 Size=0x4
    unsigned long UncorrectableErrorSeverity;// Offset=0x14 Size=0x4
    unsigned long CorrectableErrorMask;// Offset=0x18 Size=0x4
    unsigned long AdvancedCapsAndControl;// Offset=0x1c Size=0x4
};

union _AER_BRIDGE_DESCRIPTOR_FLAGS// Size=0x2 (Id=2972)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short UncorrectableErrorMaskRW:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short UncorrectableErrorSeverityRW:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short CorrectableErrorMaskRW:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short AdvancedCapsAndControlRW:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short SecondaryUncorrectableErrorMaskRW:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short SecondaryUncorrectableErrorSevRW:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short SecondaryCapsAndControlRW:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short Reserved:9;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x9
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _WHEA_AER_BRIDGE_DESCRIPTOR// Size=0x2c (Id=4233)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    unsigned long BusNumber;// Offset=0x4 Size=0x4
    struct _WHEA_PCI_SLOT_NUMBER Slot;// Offset=0x8 Size=0x4
    unsigned short DeviceControl;// Offset=0xc Size=0x2
    union _AER_BRIDGE_DESCRIPTOR_FLAGS Flags;// Offset=0xe Size=0x2
    unsigned long UncorrectableErrorMask;// Offset=0x10 Size=0x4
    unsigned long UncorrectableErrorSeverity;// Offset=0x14 Size=0x4
    unsigned long CorrectableErrorMask;// Offset=0x18 Size=0x4
    unsigned long AdvancedCapsAndControl;// Offset=0x1c Size=0x4
    unsigned long SecondaryUncorrectableErrorMask;// Offset=0x20 Size=0x4
    unsigned long SecondaryUncorrectableErrorSev;// Offset=0x24 Size=0x4
    unsigned long SecondaryCapsAndControl;// Offset=0x28 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=253)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=10208)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _WHEA_GENERIC_ERROR_DESCRIPTOR// Size=0x34 (Id=3449)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Reserved;// Offset=0x2 Size=0x1
    unsigned char Enabled;// Offset=0x3 Size=0x1
    unsigned long ErrStatusBlockLength;// Offset=0x4 Size=0x4
    unsigned long RelatedErrorSourceId;// Offset=0x8 Size=0x4
    unsigned char ErrStatusAddressSpaceID;// Offset=0xc Size=0x1
    unsigned char ErrStatusAddressBitWidth;// Offset=0xd Size=0x1
    unsigned char ErrStatusAddressBitOffset;// Offset=0xe Size=0x1
    unsigned char ErrStatusAddressAccessSize;// Offset=0xf Size=0x1
    union _LARGE_INTEGER ErrStatusAddress;// Offset=0x10 Size=0x8
    struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;// Offset=0x18 Size=0x1c
};

struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2// Size=0x50 (Id=3389)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Reserved;// Offset=0x2 Size=0x1
    unsigned char Enabled;// Offset=0x3 Size=0x1
    unsigned long ErrStatusBlockLength;// Offset=0x4 Size=0x4
    unsigned long RelatedErrorSourceId;// Offset=0x8 Size=0x4
    unsigned char ErrStatusAddressSpaceID;// Offset=0xc Size=0x1
    unsigned char ErrStatusAddressBitWidth;// Offset=0xd Size=0x1
    unsigned char ErrStatusAddressBitOffset;// Offset=0xe Size=0x1
    unsigned char ErrStatusAddressAccessSize;// Offset=0xf Size=0x1
    union _LARGE_INTEGER ErrStatusAddress;// Offset=0x10 Size=0x8
    struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;// Offset=0x18 Size=0x1c
    unsigned char ReadAckAddressSpaceID;// Offset=0x34 Size=0x1
    unsigned char ReadAckAddressBitWidth;// Offset=0x35 Size=0x1
    unsigned char ReadAckAddressBitOffset;// Offset=0x36 Size=0x1
    unsigned char ReadAckAddressAccessSize;// Offset=0x37 Size=0x1
    union _LARGE_INTEGER ReadAckAddress;// Offset=0x38 Size=0x8
    unsigned long long ReadAckPreserveMask;// Offset=0x40 Size=0x8
    unsigned long long ReadAckWriteMask;// Offset=0x48 Size=0x8
};

union _WHEA_ERROR_SOURCE_DESCRIPTOR::<unnamed-type-Info>// Size=0x3a4 (Id=2369)
{
    union // Size=0x3a4 (Id=0)
    {
        struct _WHEA_XPF_MCE_DESCRIPTOR XpfMceDescriptor;// Offset=0x0 Size=0x398
        struct _WHEA_XPF_CMC_DESCRIPTOR XpfCmcDescriptor;// Offset=0x0 Size=0x3a4
        struct _WHEA_XPF_NMI_DESCRIPTOR XpfNmiDescriptor;// Offset=0x0 Size=0x3
        struct _WHEA_IPF_MCA_DESCRIPTOR IpfMcaDescriptor;// Offset=0x0 Size=0x4
        struct _WHEA_IPF_CMC_DESCRIPTOR IpfCmcDescriptor;// Offset=0x0 Size=0x4
        struct _WHEA_IPF_CPE_DESCRIPTOR IpfCpeDescriptor;// Offset=0x0 Size=0x4
        struct _WHEA_AER_ROOTPORT_DESCRIPTOR AerRootportDescriptor;// Offset=0x0 Size=0x24
        struct _WHEA_AER_ENDPOINT_DESCRIPTOR AerEndpointDescriptor;// Offset=0x0 Size=0x20
        struct _WHEA_AER_BRIDGE_DESCRIPTOR AerBridgeDescriptor;// Offset=0x0 Size=0x2c
        struct _WHEA_GENERIC_ERROR_DESCRIPTOR GenErrDescriptor;// Offset=0x0 Size=0x34
        struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2 GenErrDescriptorV2;// Offset=0x0 Size=0x50
    };
};
