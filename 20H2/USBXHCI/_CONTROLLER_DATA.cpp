struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

struct _DEVICE_CAPABILITIES// Size=0x40 (Id=643)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceD1:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DeviceD2:1;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long LockSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long EjectSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Removable:1;// Offset=0x4 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long DockDevice:1;// Offset=0x4 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long UniqueID:1;// Offset=0x4 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long SilentInstall:1;// Offset=0x4 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long RawDeviceOK:1;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long SurpriseRemovalOK:1;// Offset=0x4 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long WakeFromD0:1;// Offset=0x4 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long WakeFromD1:1;// Offset=0x4 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long WakeFromD2:1;// Offset=0x4 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long WakeFromD3:1;// Offset=0x4 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long HardwareDisabled:1;// Offset=0x4 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long NonDynamic:1;// Offset=0x4 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long WarmEjectSupported:1;// Offset=0x4 Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned long NoDisplayInUI:1;// Offset=0x4 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Reserved1:1;// Offset=0x4 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long WakeFromInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned long SecureDevice:1;// Offset=0x4 Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned long ChildOfVgaEnabledBridge:1;// Offset=0x4 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long DecodeIoOnBoot:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Reserved:9;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x9
    };
    unsigned long Address;// Offset=0x8 Size=0x4
    unsigned long UINumber;// Offset=0xc Size=0x4
    enum _DEVICE_POWER_STATE DeviceState[7];// Offset=0x10 Size=0x1c
    enum _SYSTEM_POWER_STATE SystemWake;// Offset=0x2c Size=0x4
    enum _DEVICE_POWER_STATE DeviceWake;// Offset=0x30 Size=0x4
    unsigned long D1Latency;// Offset=0x34 Size=0x4
    unsigned long D2Latency;// Offset=0x38 Size=0x4
    unsigned long D3Latency;// Offset=0x3c Size=0x4
};

enum _UCX_CONTROLLER_PARENT_BUS_TYPE
{
    UcxControllerParentBusTypeCustom=0,
    UcxControllerParentBusTypePci=1,
    UcxControllerParentBusTypeAcpi=2,
    UcxControllerParentBusTypeMaUsb=3
};

struct _PCI_DEVICE_INFORMATION// Size=0x38 (Id=689)
{
    unsigned long VendorId;// Offset=0x0 Size=0x4
    unsigned long DeviceId;// Offset=0x4 Size=0x4
    unsigned short RevisionId;// Offset=0x8 Size=0x2
    unsigned long BusNumber;// Offset=0xc Size=0x4
    unsigned long DeviceNumber;// Offset=0x10 Size=0x4
    unsigned long FunctionNumber;// Offset=0x14 Size=0x4
    unsigned short SubVendorID;// Offset=0x18 Size=0x2
    unsigned short SubSystemID;// Offset=0x1a Size=0x2
    void * Context;// Offset=0x20 Size=0x8
    unsigned long  ( * SetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    unsigned long  ( * GetBusData)(void * ,unsigned long ,void * ,unsigned long ,unsigned long );// Offset=0x30 Size=0x8
};

struct _ACPI_DEVICE_INFORMATION// Size=0xf (Id=929)
{
    char VendorId[5];// Offset=0x0 Size=0x5
    char DeviceId[5];// Offset=0x5 Size=0x5
    char RevisionId[5];// Offset=0xa Size=0x5
};

union _KSE_XHCI_CONTROLLER_FLAGS// Size=0x10 (Id=405)
{
    unsigned long long FlagGroupAsULong64[2];// Offset=0x0 Size=0x10
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Use32BitRegisterAccess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NoControllerSaveRestoreState:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long IgnoreBIOSHandoffFailure:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long NoLinkTRBInTD:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long ControllerNotSupported:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long IgnoreContextErrorOnEPStop:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long DataStageTrbMax512:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long DisableChainedMDLSupport:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long DelayAfterMFDisable:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long UseLineBasedInterrupts:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long UseMaxNumberOfStreams:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long SetLinkTRBChainBit:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long UseSingleInterrupter:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long IgnoreCompletionCode199:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long DelayInitialEndpointStopCommand:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long OnResetDisableEnable:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long MaximumEndpointIntervalValue7:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long DisableImmediateData:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long DisableStreams:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long ForceU0PriorToU3:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long DisableIdlePowerManagement:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long OnStopConfigureStreamEndpoint:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long Disable20LPM:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long EnablePPTSWBandwidthMgmt:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long ControllerFirmwareOutdated:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long Map20PortDisableToSuspend:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long ControllerCanMissU3Request:1;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x1
        unsigned long long Disable20LPMPriorToU3:1;// Offset=0x0 Size=0x8 BitOffset=0x1b BitSize=0x1
        unsigned long long EnableErrorRecoveryOnEventRingFull:1;// Offset=0x0 Size=0x8 BitOffset=0x1c BitSize=0x1
        unsigned long long ForceWakeEnableBitsInD0:1;// Offset=0x0 Size=0x8 BitOffset=0x1d BitSize=0x1
        unsigned long long ClearCSCPriorToD0Exit:1;// Offset=0x0 Size=0x8 BitOffset=0x1e BitSize=0x1
        unsigned long long SerializeControllerCommands:1;// Offset=0x0 Size=0x8 BitOffset=0x1f BitSize=0x1
        unsigned long long ClearTtBufferOnAsyncTransferCancel:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long DisableBEI:1;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1
        unsigned long long RoundSplitTransferSizeToPacketSize:1;// Offset=0x0 Size=0x8 BitOffset=0x22 BitSize=0x1
        unsigned long long StreamEDTLAAlternateLocation1:1;// Offset=0x0 Size=0x8 BitOffset=0x23 BitSize=0x1
        unsigned long long StreamEDTLAAlternateLocation2:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long ValidateTransferEventPointer:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long DropDuplicateEd0TransferEvents:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long SerializeTDBulkInterrupt:1;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x1
        unsigned long long PartialStreamEDTLAValue:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
        unsigned long long PreventSchedulingLateIsochTd:1;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x1
        unsigned long long ExpectLackOfMseEvents:1;// Offset=0x0 Size=0x8 BitOffset=0x2a BitSize=0x1
        unsigned long long ResetControllerOnShutdown:1;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0x1
        unsigned long long StreamEDTLAReinitNeeded:1;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x1
        unsigned long long UseEDTLAValidBit:1;// Offset=0x0 Size=0x8 BitOffset=0x2d BitSize=0x1
        unsigned long long EnablePPTBulkBeforeIntWorkaround:1;// Offset=0x0 Size=0x8 BitOffset=0x2e BitSize=0x1
        unsigned long long PreventStandaloneLinkTDForFullSpeedIsoch:1;// Offset=0x0 Size=0x8 BitOffset=0x2f BitSize=0x1
        unsigned long long MaxEventRingSegmentCount2:1;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x1
        unsigned long long Append8NoOpTRBsToEventDataTrbForSSBulkIn:1;// Offset=0x0 Size=0x8 BitOffset=0x31 BitSize=0x1
        unsigned long long ZeroTRBSegments:1;// Offset=0x0 Size=0x8 BitOffset=0x32 BitSize=0x1
        unsigned long long HideInvalidDebugPortStatusAndChange:1;// Offset=0x0 Size=0x8 BitOffset=0x33 BitSize=0x1
        unsigned long long SetUnlimitedErrorRetryCountForEndpoint:1;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x1
        unsigned long long IgnoreEventDataBitForTransferRingEmptyEvent:1;// Offset=0x0 Size=0x8 BitOffset=0x35 BitSize=0x1
        unsigned long long DoPreInterruptsDisableAcpiCallout:1;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x1
        unsigned long long EnableCHTNonArchitecturalRegisterSaveRestore:1;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x1
        unsigned long long EnableCHTPMEWakeWorkaround:1;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x1
        unsigned long long EnableCHTSSICPortUnusedWorkaround:1;// Offset=0x0 Size=0x8 BitOffset=0x39 BitSize=0x1
        unsigned long long ExecuteDSMToEnableRTD3InAddDevice:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long IgnoreContiguousFrameIDCapability:1;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x1
        unsigned long long ExecuteDSMForHSICDisconnectInU3:1;// Offset=0x0 Size=0x8 BitOffset=0x3c BitSize=0x1
        unsigned long long SetMultiTTBitDuringConfigureEndpoint:1;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x1
        unsigned long long FailTransfersWithCompletionCode199:1;// Offset=0x0 Size=0x8 BitOffset=0x3e BitSize=0x1
        unsigned long long UseStrictBIOSHandoff:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
        unsigned long long ExecutePowerTransitionWorkaroundsForKBL:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long DelayPollingHCRSTAfterSettingHCRST:1;// Offset=0x8 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long IgnoreDataBufferErrorWithED0EventTrb:1;// Offset=0x8 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long NoControllerSaveRestoreStateWithDebugEnabled:1;// Offset=0x8 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long NoClearPciCommandRegisterOnControllerStopFailed:1;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long FailTransfersWithCompletionCode198:1;// Offset=0x8 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long ClearPLCOnU0PriorToU3:1;// Offset=0x8 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long RestoreRyzenFeatureBitsPostControllerReset1:1;// Offset=0x8 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long RestoreRyzenFeatureBitsPostControllerReset2:1;// Offset=0x8 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long RestoreRyzenFeatureBitsPostControllerReset3:1;// Offset=0x8 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long AvoidClearingERSTDuringReleaseHardware:1;// Offset=0x8 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long DisableExtendedTBCEnable:1;// Offset=0x8 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long DoNotSetExtendedTCBTRBStatusEnable:1;// Offset=0x8 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long AssignRuntimeRegistersToVTL1:1;// Offset=0x8 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long AssignDoorbellsToVTL1:1;// Offset=0x8 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long DisableLinkStateInComplianceModeCapability:1;// Offset=0x8 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long RecoverInactivePortWithInterruptEndpoint:1;// Offset=0x8 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long PromoteFullSpeed4msIntEpTo2ms:1;// Offset=0x8 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long EnableFasterRetriesOnStopEpFailures:1;// Offset=0x8 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long LimitAddressingCapabilityAs32BitOnly:1;// Offset=0x8 Size=0x8 BitOffset=0x13 BitSize=0x1
    };
};

enum _WDF_POWER_DEVICE_STATE
{
    WdfPowerDeviceInvalid=0,
    WdfPowerDeviceD0=1,
    WdfPowerDeviceD1=2,
    WdfPowerDeviceD2=3,
    WdfPowerDeviceD3=4,
    WdfPowerDeviceD3Final=5,
    WdfPowerDevicePrepareForHibernation=6,
    WdfPowerDeviceMaximum=7
};

enum _SYSTEM_POWER_ACTION
{
    SystemPowerAction_Boot=0,
    SystemPowerAction_ResumeFromSleep=1,
    SystemPowerAction_ResumeFromHibernate=2,
    SystemPowerAction_Sleep=3,
    SystemPowerAction_HybridSleep=4,
    SystemPowerAction_Hibernate=5,
    SystemPowerAction_Shutdown=6,
    SystemPowerAction_None=7
};

union _FRAME_SNAPSHOT// Size=0x8 (Id=851)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long HighPart:21;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x15
        unsigned long long TimeWhenLowPartWasZero_ms:43;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x2b
    };
    long long Asll;// Offset=0x0 Size=0x8
};

struct _FRAME_NUMBER_DATA// Size=0x10 (Id=629)
{
    union _FRAME_SNAPSHOT Snapshot;// Offset=0x0 Size=0x8
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long TimeIncrementPerTick;// Offset=0xc Size=0x4
};

enum _S0IdleStatus
{
    S0IdleStatusConfigured=0,
    S0IdleStatusNotConfiguredDueToHackFlag=1,
    S0IdleStatusNotConfiguredDueToNoS0WakeCapability=2
};

struct _CONTROLLER_COUNTER// Size=0x2c (Id=650)
{
    unsigned char NeedsReporting;// Offset=0x0 Size=0x1
    unsigned long ResetCount;// Offset=0x4 Size=0x4
    unsigned long RestoreStateFailureCount;// Offset=0x8 Size=0x4
    unsigned long RHResumeTimeoutCount;// Offset=0xc Size=0x4
    unsigned long RHResumeNeededExtendedWaitCount;// Offset=0x10 Size=0x4
    unsigned long RHSuspendTimeoutCount;// Offset=0x14 Size=0x4
    unsigned long RHSuspendNeededExtendedWaitCount;// Offset=0x18 Size=0x4
    unsigned long RHPLCClearedOnU0PriorToU3Count;// Offset=0x1c Size=0x4
    unsigned long ContextStateErrorCount;// Offset=0x20 Size=0x4
    unsigned long StopEndpointSuccessRetryMaxCount;// Offset=0x24 Size=0x4
    unsigned long StopEndpointFailureAfterRetriesCount;// Offset=0x28 Size=0x4
};

enum _CONTROLLER_DMA_MODE
{
    ControllerDMAMode_NoVSM=0,
    ControllerDMAMode_SingleDMAAdapterInVSM=1,
    ControllerDMAMode_MultipleDMAAdaptersInVSM=2
};

enum _USBD_ENDPOINT_OFFLOAD_MODE
{
    UsbdEndpointOffloadModeNotSupported=0,
    UsbdEndpointOffloadSoftwareAssisted=1,
    UsbdEndpointOffloadHardwareAssisted=2
};

struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _TIME_SYNC_DATA// Size=0xa8 (Id=488)
{
    unsigned char IsFrameOverflowInterruptEnabled;// Offset=0x0 Size=0x1
    void * TimeSyncTrackingLock;// Offset=0x8 Size=0x8
    unsigned long CurrentGenerationID;// Offset=0x10 Size=0x4
    struct WDFCOLLECTION__ * HandleCollection;// Offset=0x18 Size=0x8
    struct _LIST_ENTRY PendingStartTrackingList;// Offset=0x20 Size=0x10
    struct WDFWORKITEM__ * PendingStartTrackingWorkItem;// Offset=0x30 Size=0x8
    unsigned char IsPendingStartTrackingWorkItemQueued;// Offset=0x38 Size=0x1
    unsigned char IsLastBoundaryValueValid;// Offset=0x39 Size=0x1
    union _LARGE_INTEGER LastBoundaryQpcValue;// Offset=0x40 Size=0x8
    unsigned long LastBoundaryUSBFrame;// Offset=0x48 Size=0x4
    unsigned long LastBoundaryHwFrame;// Offset=0x4c Size=0x4
    unsigned long LastBoundaryHwMicroFrame;// Offset=0x50 Size=0x4
    unsigned long long InterruptTimeOfLastFrameNumberOverflowCheck;// Offset=0x58 Size=0x8
    unsigned long long InterruptTimeOfLastFrameNumberOverflowEvent;// Offset=0x60 Size=0x8
    union _LARGE_INTEGER QPCOfLastFrameNumberOverflowEvent;// Offset=0x68 Size=0x8
    unsigned long USBFrameOfLastFrameNumberOverflowEvent;// Offset=0x70 Size=0x4
    union _LARGE_INTEGER QpcFrequency;// Offset=0x78 Size=0x8
    union _LARGE_INTEGER AccumulatedQPCTime;// Offset=0x80 Size=0x8
    unsigned long long AccumulatedMicroFrames;// Offset=0x88 Size=0x8
    unsigned long DiscardedWrapEvents;// Offset=0x90 Size=0x4
    unsigned long LateWrapEvents;// Offset=0x94 Size=0x4
    unsigned long CountOfStartTrackingTelemetryEvents;// Offset=0x98 Size=0x4
    unsigned long CountOfStopTrackingTelemetryEvents;// Offset=0x9c Size=0x4
    unsigned long CountOfGetFrameQpcCalls;// Offset=0xa0 Size=0x4
    unsigned long CountOfFrameQpcTranslations;// Offset=0xa4 Size=0x4
};

union _XHCI_TEST_MODE_FLAGS// Size=0x4 (Id=884)
{
    unsigned long AsULong;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long RunEsmInWorkItem:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

struct _CONTROLLER_DATA// Size=0x338 (Id=484)
{
    struct WDFDEVICE__ * WdfDevice;// Offset=0x0 Size=0x8
    struct UCXCONTROLLER__ * UcxController;// Offset=0x8 Size=0x8
    unsigned char SelfManagedIoInitInvoked;// Offset=0x10 Size=0x1
    struct _LIST_ENTRY ControllerListEntry;// Offset=0x18 Size=0x10
    unsigned long long DeviceListLock;// Offset=0x28 Size=0x8
    struct _LIST_ENTRY DeviceListHead;// Offset=0x30 Size=0x10
    unsigned long DeviceListCount;// Offset=0x40 Size=0x4
    struct RECORDER_LOG__ * RecorderLog;// Offset=0x48 Size=0x8
    struct _IOCONTROL_DATA * IoControlHandle;// Offset=0x50 Size=0x8
    struct _REGISTER_DATA * RegisterHandle;// Offset=0x58 Size=0x8
    struct _DMA_ENABLER_DATA * DmaEnablerHandle;// Offset=0x60 Size=0x8
    struct _SECURE_DMA_ENABLER_DATA * SecureDmaEnablerHandle;// Offset=0x68 Size=0x8
    struct _SECURE_CHANNEL_DATA * SecureChannelHandle;// Offset=0x70 Size=0x8
    struct _COMMON_BUFFER_DATA * CommonBufferHandle;// Offset=0x78 Size=0x8
    struct _PRIMARY_INTERRUPTER_DATA * InterrupterHandle;// Offset=0x80 Size=0x8
    struct _DEVICESLOT_DATA * DeviceSlotHandle;// Offset=0x88 Size=0x8
    struct _COMMAND_DATA * CommandHandle;// Offset=0x90 Size=0x8
    struct _ROOTHUB_DATA * RootHubHandle;// Offset=0x98 Size=0x8
    struct _WMI_DATA * WmiHandle;// Offset=0xa0 Size=0x8
    void * CommandFilterHandle;// Offset=0xa8 Size=0x8
    unsigned long InstanceNumber;// Offset=0xb0 Size=0x4
    struct _DEVICE_CAPABILITIES DeviceCapabilities;// Offset=0xb4 Size=0x40
    enum _UCX_CONTROLLER_PARENT_BUS_TYPE ParentBusType;// Offset=0xf4 Size=0x4
    struct _PCI_DEVICE_INFORMATION PciDeviceInfo;// Offset=0xf8 Size=0x38
    struct _ACPI_DEVICE_INFORMATION AcpiDeviceInfo;// Offset=0x130 Size=0xf
    unsigned char MSELengthUsable;// Offset=0x13f Size=0x1
    unsigned char MajorVersion;// Offset=0x140 Size=0x1
    unsigned char MinorVersion;// Offset=0x141 Size=0x1
    unsigned long long FirmwareVersion;// Offset=0x148 Size=0x8
    union _KSE_XHCI_CONTROLLER_FLAGS DeviceFlags;// Offset=0x150 Size=0x10
    unsigned long long InternalDeviceFlags;// Offset=0x160 Size=0x8
    struct WDFTIMER__ * WatchdogTimer;// Offset=0x168 Size=0x8
    struct WDFWORKITEM__ * TelemetryReportWorkItem;// Offset=0x170 Size=0x8
    unsigned long long TelemetryHistory;// Offset=0x178 Size=0x8
    unsigned char ForwardProgressEnabled;// Offset=0x180 Size=0x1
    unsigned long SpecialFileStatus;// Offset=0x184 Size=0x4
    enum _WDF_POWER_DEVICE_STATE CurrentWdfPowerDeviceState;// Offset=0x188 Size=0x4
    unsigned char ControllerSaveStateFailed;// Offset=0x18c Size=0x1
    unsigned char ControllerGone;// Offset=0x18d Size=0x1
    unsigned long WatchdogTimerCount;// Offset=0x190 Size=0x4
    unsigned long ResetCount;// Offset=0x194 Size=0x4
    unsigned long NonTestingResetCount;// Offset=0x198 Size=0x4
    unsigned long ResetInterval;// Offset=0x19c Size=0x4
    long ResetLock;// Offset=0x1a0 Size=0x4
    enum _SYSTEM_POWER_ACTION SystemPowerAction;// Offset=0x1a4 Size=0x4
    void * HibernateContext;// Offset=0x1a8 Size=0x8
    struct _FRAME_NUMBER_DATA FrameNumberData;// Offset=0x1b0 Size=0x10
    unsigned long long HardwareVerifierFlags;// Offset=0x1c0 Size=0x8
    struct _XIL_BUFFER_DATA * ScratchTransferBufferData;// Offset=0x1c8 Size=0x8
    enum _S0IdleStatus ControllerS0IdleStatus;// Offset=0x1d0 Size=0x4
    unsigned char WaitWakeQueued;// Offset=0x1d4 Size=0x1
    struct _CONTROLLER_COUNTER Counter;// Offset=0x1d8 Size=0x2c
    struct WDFWORKITEM__ * IdleTimeoutUpdateWorkItem;// Offset=0x208 Size=0x8
    unsigned long LastSetIdleTimeout;// Offset=0x210 Size=0x4
    struct POHANDLE__ * PoHandle;// Offset=0x218 Size=0x8
    void * LPEEnterExitCallbackHandle;// Offset=0x220 Size=0x8
    unsigned char WdfPowerReferenceForDebuggerAcquired;// Offset=0x228 Size=0x1
    unsigned char IsSecureDevice;// Offset=0x229 Size=0x1
    unsigned char IsExtendedTBCEnabled;// Offset=0x22a Size=0x1
    unsigned char IsExtendedTBCTRBStatusSupported;// Offset=0x22b Size=0x1
    enum _CONTROLLER_DMA_MODE DMAModeInVSM;// Offset=0x22c Size=0x4
    unsigned long NumberOfDMATargetsInVSM;// Offset=0x230 Size=0x4
    struct TRUSTLET_OBJECT_HANDLE__ * SecureObjectHandle;// Offset=0x238 Size=0x8
    struct _EPROCESS * TrustletProcess;// Offset=0x240 Size=0x8
    unsigned char IsDSMForPortStatusSupported;// Offset=0x248 Size=0x1
    unsigned char IsDSMForKBLWorkaroundsSupported;// Offset=0x249 Size=0x1
    enum _USBD_ENDPOINT_OFFLOAD_MODE UsbEndpointOffloadMode;// Offset=0x24c Size=0x4
    unsigned long NumberOfEndpointsOffloaded;// Offset=0x250 Size=0x4
    void * EndpointsOffloadedCountLock;// Offset=0x258 Size=0x8
    struct _TIME_SYNC_DATA TimeSyncData;// Offset=0x260 Size=0xa8
    struct WDFWORKITEM__ * AudioOffloadWnfStateUpdateWorkItem;// Offset=0x308 Size=0x8
    unsigned char IsAudioOffloadActive;// Offset=0x310 Size=0x1
    struct SS_COMPONENT__ * SleepstudySelectiveSuspendUnsupportedHandle;// Offset=0x318 Size=0x8
    unsigned long RecurringResetRecoveryFrequency;// Offset=0x320 Size=0x4
    unsigned long ImmediateResetRecoveryPending;// Offset=0x324 Size=0x4
    struct _XHCI_IRQL_TRACKER * IrqlTrackerArray;// Offset=0x328 Size=0x8
    unsigned long ActiveProcessorCount;// Offset=0x330 Size=0x4
    union _XHCI_TEST_MODE_FLAGS TestFlags;// Offset=0x334 Size=0x4
};
