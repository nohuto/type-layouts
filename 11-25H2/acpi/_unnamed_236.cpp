union _XPF_MCE_FLAGS// Size=0x4 (Id=514)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MCG_CapabilityRW:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MCG_GlobalControlRW:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _XPF_MC_BANK_FLAGS// Size=0x1 (Id=664)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ClearOnInitializationRW:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char ControlDataRW:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

struct _WHEA_XPF_MC_BANK_DESCRIPTOR// Size=0x1c (Id=594)
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

struct _WHEA_XPF_MCE_DESCRIPTOR// Size=0x398 (Id=351)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char NumberOfBanks;// Offset=0x3 Size=0x1
    union _XPF_MCE_FLAGS Flags;// Offset=0x4 Size=0x4
    unsigned long long MCG_Capability;// Offset=0x8 Size=0x8
    unsigned long long MCG_GlobalControl;// Offset=0x10 Size=0x8
    struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];// Offset=0x18 Size=0x380
};

union _WHEA_NOTIFICATION_FLAGS// Size=0x2 (Id=690)
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

struct _unnamed_432// Size=0x4 (Id=432)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
};

struct _unnamed_433// Size=0x18 (Id=433)
{
    unsigned long PollInterval;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long SwitchToPollingThreshold;// Offset=0x8 Size=0x4
    unsigned long SwitchToPollingWindow;// Offset=0xc Size=0x4
    unsigned long ErrorThreshold;// Offset=0x10 Size=0x4
    unsigned long ErrorThresholdWindow;// Offset=0x14 Size=0x4
};

union _unnamed_434// Size=0x18 (Id=434)
{
    struct _unnamed_432 Polled;// Offset=0x0 Size=0x4
    struct _unnamed_433 Interrupt;// Offset=0x0 Size=0x18
    struct _unnamed_433 LocalInterrupt;// Offset=0x0 Size=0x18
    struct _unnamed_433 Sci;// Offset=0x0 Size=0x18
    struct _unnamed_433 Nmi;// Offset=0x0 Size=0x18
    struct _unnamed_433 Sea;// Offset=0x0 Size=0x18
    struct _unnamed_433 Sei;// Offset=0x0 Size=0x18
    struct _unnamed_433 Gsiv;// Offset=0x0 Size=0x18
};

struct _WHEA_NOTIFICATION_DESCRIPTOR// Size=0x1c (Id=435)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Length;// Offset=0x1 Size=0x1
    union _WHEA_NOTIFICATION_FLAGS Flags;// Offset=0x2 Size=0x2
    union _unnamed_434 u;// Offset=0x4 Size=0x18
};

struct _WHEA_XPF_CMC_DESCRIPTOR// Size=0x3a4 (Id=299)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char NumberOfBanks;// Offset=0x3 Size=0x1
    unsigned long Reserved;// Offset=0x4 Size=0x4
    struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;// Offset=0x8 Size=0x1c
    struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];// Offset=0x24 Size=0x380
};

struct _WHEA_XPF_NMI_DESCRIPTOR// Size=0x3 (Id=602)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
};

struct _WHEA_IPF_MCA_DESCRIPTOR// Size=0x4 (Id=370)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _WHEA_IPF_CMC_DESCRIPTOR// Size=0x4 (Id=261)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _WHEA_IPF_CPE_DESCRIPTOR// Size=0x4 (Id=510)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _unnamed_345// Size=0x4 (Id=345)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _unnamed_346// Size=0x4 (Id=346)
{
    struct _unnamed_345 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _WHEA_PCI_SLOT_NUMBER// Size=0x4 (Id=347)
{
    union _unnamed_346 u;// Offset=0x0 Size=0x4
};

union _AER_ROOTPORT_DESCRIPTOR_FLAGS// Size=0x2 (Id=397)
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

struct _WHEA_AER_ROOTPORT_DESCRIPTOR// Size=0x24 (Id=380)
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

union _AER_ENDPOINT_DESCRIPTOR_FLAGS// Size=0x2 (Id=311)
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

struct _WHEA_AER_ENDPOINT_DESCRIPTOR// Size=0x20 (Id=263)
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

union _AER_BRIDGE_DESCRIPTOR_FLAGS// Size=0x2 (Id=476)
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

struct _WHEA_AER_BRIDGE_DESCRIPTOR// Size=0x2c (Id=270)
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

struct _unnamed_44// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_44 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _WHEA_GENERIC_ERROR_DESCRIPTOR// Size=0x34 (Id=334)
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

struct _WHEA_GENERIC_ERROR_DESCRIPTOR_V2// Size=0x50 (Id=306)
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

struct _GUID// Size=0x10 (Id=55)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD// Size=0x18 (Id=562)
{
    long  ( * Initialize)(void * ,unsigned long );// Offset=0x0 Size=0x8
    void  ( * Uninitialize)(void * );// Offset=0x8 Size=0x8
    long  ( * Correct)(void * ,unsigned long * );// Offset=0x10 Size=0x8
};

struct _WHEA_DEVICE_DRIVER_DESCRIPTOR// Size=0x74 (Id=497)
{
    unsigned short Type;// Offset=0x0 Size=0x2
    unsigned char Enabled;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    struct _GUID SourceGuid;// Offset=0x4 Size=0x10
    unsigned short LogTag;// Offset=0x14 Size=0x2
    unsigned short Reserved2;// Offset=0x16 Size=0x2
    unsigned long PacketLength;// Offset=0x18 Size=0x4
    unsigned long PacketCount;// Offset=0x1c Size=0x4
    unsigned char * PacketBuffer;// Offset=0x20 Size=0x8
    struct _WHEA_ERROR_SOURCE_CONFIGURATION_DD Config;// Offset=0x28 Size=0x18
    struct _GUID CreatorId;// Offset=0x40 Size=0x10
    struct _GUID PartitionId;// Offset=0x50 Size=0x10
    unsigned long MaxSectionDataLength;// Offset=0x60 Size=0x4
    unsigned long MaxSectionsPerRecord;// Offset=0x64 Size=0x4
    unsigned char * PacketStateBuffer;// Offset=0x68 Size=0x8
    long OpenHandles;// Offset=0x70 Size=0x4
};

union _unnamed_236// Size=0x3a4 (Id=236)
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
        struct _WHEA_DEVICE_DRIVER_DESCRIPTOR DeviceDriverDescriptor;// Offset=0x0 Size=0x74
    };
};
