struct _PCI_CAPABILITIES_HEADER// Size=0x2 (Id=3992)
{
    unsigned char CapabilityID;// Offset=0x0 Size=0x1
    unsigned char Next;// Offset=0x1 Size=0x1
};

union _PCI_EXPRESS_CAPABILITIES_REGISTER// Size=0x2 (Id=4138)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CapabilityVersion:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short DeviceType:4;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x4
        unsigned short SlotImplemented:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short InterruptMessageNumber:5;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x5
        unsigned short Rsvd:2;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x2
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER// Size=0x4 (Id=4244)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaxPayloadSizeSupported:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long PhantomFunctionsSupported:2;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x2
        unsigned long ExtendedTagSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long L0sAcceptableLatency:3;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x3
        unsigned long L1AcceptableLatency:3;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x3
        unsigned long Undefined:3;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x3
        unsigned long RoleBasedErrorReporting:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Rsvd1:2;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x2
        unsigned long CapturedSlotPowerLimit:8;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x8
        unsigned long CapturedSlotPowerLimitScale:2;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x2
        unsigned long FunctionLevelResetCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long Rsvd2:3;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x3
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER// Size=0x2 (Id=2609)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CorrectableErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short NonFatalErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short FatalErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short UnsupportedRequestErrorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short EnableRelaxedOrder:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short MaxPayloadSize:3;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x3
        unsigned short ExtendedTagEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short PhantomFunctionsEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short AuxPowerEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short NoSnoopEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short MaxReadRequestSize:3;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x3
        union // Size=0x2 (Id=0)
        {
            unsigned short BridgeConfigRetryEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
            unsigned short InitiateFunctionLevelReset:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
        };
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_DEVICE_STATUS_REGISTER// Size=0x2 (Id=1756)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CorrectableErrorDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short NonFatalErrorDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short FatalErrorDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short UnsupportedRequestDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short AuxPowerDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short TransactionsPending:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short Rsvd:10;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0xa
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER// Size=0x4 (Id=3710)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MaximumLinkSpeed:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long MaximumLinkWidth:6;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x6
        unsigned long ActiveStatePMSupport:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
        unsigned long L0sExitLatency:3;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x3
        unsigned long L1ExitLatency:3;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x3
        unsigned long ClockPowerManagement:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long SurpriseDownErrorReportingCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long DataLinkLayerActiveReportingCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long LinkBandwidthNotificationCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long AspmOptionalityCompliance:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Rsvd:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long PortNumber:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_LINK_CONTROL_REGISTER// Size=0x2 (Id=3819)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short ActiveStatePMControl:2;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x2
        unsigned short Rsvd1:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short ReadCompletionBoundary:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short LinkDisable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short RetrainLink:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short CommonClockConfig:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short ExtendedSynch:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short EnableClockPowerManagement:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Rsvd2:7;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x7
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_LINK_STATUS_REGISTER// Size=0x2 (Id=2952)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short LinkSpeed:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short LinkWidth:6;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x6
        unsigned short Undefined:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short LinkTraining:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short SlotClockConfig:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short DataLinkLayerActive:1;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x1
        unsigned short Rsvd:2;// Offset=0x0 Size=0x2 BitOffset=0xe BitSize=0x2
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER// Size=0x4 (Id=3642)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AttentionButtonPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PowerControllerPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MRLSensorPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long AttentionIndicatorPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long PowerIndicatorPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long HotPlugSurprise:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long HotPlugCapable:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SlotPowerLimit:8;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x8
        unsigned long SlotPowerLimitScale:2;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x2
        unsigned long ElectromechanicalLockPresent:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long NoCommandCompletedSupport:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long PhysicalSlotNumber:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_SLOT_CONTROL_REGISTER// Size=0x2 (Id=2170)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short AttentionButtonEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PowerFaultDetectEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MRLSensorEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short PresenceDetectEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short CommandCompletedEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short HotPlugInterruptEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short AttentionIndicatorControl:2;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x2
        unsigned short PowerIndicatorControl:2;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x2
        unsigned short PowerControllerControl:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short ElectromechanicalLockControl:1;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x1
        unsigned short DataLinkStateChangeEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xc BitSize=0x1
        unsigned short Rsvd:3;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x3
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_SLOT_STATUS_REGISTER// Size=0x2 (Id=2614)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short AttentionButtonPressed:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PowerFaultDetected:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short MRLSensorChanged:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short PresenceDetectChanged:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short CommandCompleted:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short MRLSensorState:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short PresenceDetectState:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short ElectromechanicalLockEngaged:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short DataLinkStateChanged:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short Rsvd:7;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x7
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_ROOT_CONTROL_REGISTER// Size=0x2 (Id=4194)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CorrectableSerrEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short NonFatalSerrEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short FatalSerrEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short PMEInterruptEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x1
        unsigned short CRSSoftwareVisibilityEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short Rsvd:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER// Size=0x2 (Id=3482)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CRSSoftwareVisibility:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Rsvd:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_ROOT_STATUS_REGISTER// Size=0x4 (Id=1916)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PMERequestorId:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long PMEStatus:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long PMEPending:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Rsvd:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER// Size=0x4 (Id=1679)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CompletionTimeoutRangesSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long CompletionTimeoutDisableSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long AriForwardingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long AtomicOpRoutingSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long AtomicOpCompleterSupported32Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long AtomicOpCompleterSupported64Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long CASCompleterSupported128Bit:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long NoROEnabledPRPRPassing:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long LTRMechanismSupported:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long TPHCompleterSupported:2;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x2
        unsigned long Rsvd:4;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x4
        unsigned long OBFFSupported:2;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x2
        unsigned long ExtendedFmtFieldSuported:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long EndEndTLPPrefixSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long MaxEndEndTLPPrefixes:2;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x2
        unsigned long Rsvd2:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER// Size=0x2 (Id=4106)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short CompletionTimeoutValue:4;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x4
        unsigned short CompletionTimeoutDisable:1;// Offset=0x0 Size=0x2 BitOffset=0x4 BitSize=0x1
        unsigned short AriForwardingEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0x1
        unsigned short AtomicOpRequesterEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x6 BitSize=0x1
        unsigned short AtomicOpEgresBlocking:1;// Offset=0x0 Size=0x2 BitOffset=0x7 BitSize=0x1
        unsigned short IDORequestEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short IDOCompletionEnable:1;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x1
        unsigned short LTRMechanismEnable:1;// Offset=0x0 Size=0x2 BitOffset=0xa BitSize=0x1
        unsigned short Rsvd:2;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x2
        unsigned short OBFFEnable:2;// Offset=0x0 Size=0x2 BitOffset=0xd BitSize=0x2
        unsigned short EndEndTLPPrefixBlocking:1;// Offset=0x0 Size=0x2 BitOffset=0xf BitSize=0x1
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

union _PCI_EXPRESS_DEVICE_STATUS_2_REGISTER// Size=0x2 (Id=3727)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short Rsvd:16;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x10
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

struct _PCI_EXPRESS_CAPABILITY// Size=0x2c (Id=2487)
{
    struct _PCI_CAPABILITIES_HEADER Header;// Offset=0x0 Size=0x2
    union _PCI_EXPRESS_CAPABILITIES_REGISTER ExpressCapabilities;// Offset=0x2 Size=0x2
    union _PCI_EXPRESS_DEVICE_CAPABILITIES_REGISTER DeviceCapabilities;// Offset=0x4 Size=0x4
    union _PCI_EXPRESS_DEVICE_CONTROL_REGISTER DeviceControl;// Offset=0x8 Size=0x2
    union _PCI_EXPRESS_DEVICE_STATUS_REGISTER DeviceStatus;// Offset=0xa Size=0x2
    union _PCI_EXPRESS_LINK_CAPABILITIES_REGISTER LinkCapabilities;// Offset=0xc Size=0x4
    union _PCI_EXPRESS_LINK_CONTROL_REGISTER LinkControl;// Offset=0x10 Size=0x2
    union _PCI_EXPRESS_LINK_STATUS_REGISTER LinkStatus;// Offset=0x12 Size=0x2
    union _PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER SlotCapabilities;// Offset=0x14 Size=0x4
    union _PCI_EXPRESS_SLOT_CONTROL_REGISTER SlotControl;// Offset=0x18 Size=0x2
    union _PCI_EXPRESS_SLOT_STATUS_REGISTER SlotStatus;// Offset=0x1a Size=0x2
    union _PCI_EXPRESS_ROOT_CONTROL_REGISTER RootControl;// Offset=0x1c Size=0x2
    union _PCI_EXPRESS_ROOT_CAPABILITIES_REGISTER RootCapabilities;// Offset=0x1e Size=0x2
    union _PCI_EXPRESS_ROOT_STATUS_REGISTER RootStatus;// Offset=0x20 Size=0x4
    union _PCI_EXPRESS_DEVICE_CAPABILITIES_2_REGISTER DeviceCapabilities2;// Offset=0x24 Size=0x4
    union _PCI_EXPRESS_DEVICE_CONTROL_2_REGISTER DeviceControl2;// Offset=0x28 Size=0x2
    union _PCI_EXPRESS_DEVICE_STATUS_2_REGISTER DeviceStatus2;// Offset=0x2a Size=0x2
};
