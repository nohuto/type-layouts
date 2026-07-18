union _KSE_XHCI_CONTROLLER_FLAGS// Size=0x8 (Id=387)
{
    unsigned long long AsULong64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
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
        unsigned long long Reserved:2;// Offset=0x0 Size=0x8 BitOffset=0x3d BitSize=0x2
        unsigned long long UseStrictBIOSHandoff:1;// Offset=0x0 Size=0x8 BitOffset=0x3f BitSize=0x1
    };
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=58)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CRASHDUMP_BUFFER_DATA// Size=0x18 (Id=453)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned char * VirtualAddress;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CRASHDUMP_REGISTER_DATA// Size=0x40 (Id=448)
{
    void * RegisterHandle;// Offset=0x0 Size=0x8
    union _KSE_XHCI_CONTROLLER_FLAGS DeviceFlags;// Offset=0x8 Size=0x8
    unsigned long MaximumDeviceSlots;// Offset=0x10 Size=0x4
    unsigned long MaxScratchpadBuffers;// Offset=0x14 Size=0x4
    struct _CRASHDUMP_BUFFER_DATA ScratchpadBufferArray;// Offset=0x18 Size=0x18
    struct _LIST_ENTRY ScatchpadBufferDatas;// Offset=0x30 Size=0x10
};
