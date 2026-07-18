union _KSE_XHCI_CONTROLLER_FLAGS// Size=0x10 (Id=337)
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
    };
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=32)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _CRASHDUMP_BUFFER_DATA// Size=0x18 (Id=487)
{
    union _LARGE_INTEGER LogicalAddress;// Offset=0x0 Size=0x8
    unsigned char * VirtualAddress;// Offset=0x8 Size=0x8
    unsigned long Size;// Offset=0x10 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _CRASHDUMP_REGISTER_DATA// Size=0x48 (Id=481)
{
    void * RegisterHandle;// Offset=0x0 Size=0x8
    union _KSE_XHCI_CONTROLLER_FLAGS DeviceFlags;// Offset=0x8 Size=0x10
    unsigned long MaximumDeviceSlots;// Offset=0x18 Size=0x4
    unsigned long MaxScratchpadBuffers;// Offset=0x1c Size=0x4
    struct _CRASHDUMP_BUFFER_DATA ScratchpadBufferArray;// Offset=0x20 Size=0x18
    struct _LIST_ENTRY ScatchpadBufferDatas;// Offset=0x38 Size=0x10
};

struct _CRASHDUMP_EVENTRING_DATA// Size=0x80 (Id=495)
{
    void * DumperHandle;// Offset=0x0 Size=0x8
    void * RegisterHandle;// Offset=0x8 Size=0x8
    struct _INTERRUPTER_REGISTER_SET * InterrupterRegister;// Offset=0x10 Size=0x8
    struct _CRASHDUMP_BUFFER_DATA EventRingTableBuffer;// Offset=0x18 Size=0x18
    struct _CRASHDUMP_BUFFER_DATA EventRingSegmentBuffer;// Offset=0x30 Size=0x18
    struct _TRB * TRBArray;// Offset=0x48 Size=0x8
    unsigned long UsedEventRingSegments;// Offset=0x50 Size=0x4
    unsigned long TRBsPerSegment;// Offset=0x54 Size=0x4
    unsigned long CycleState;// Offset=0x58 Size=0x4
    unsigned long DequeueIndex;// Offset=0x5c Size=0x4
    unsigned long DequeueSegment;// Offset=0x60 Size=0x4
    struct _XIL_BUFFER_DATA * CurrentBufferData;// Offset=0x68 Size=0x8
    struct _LIST_ENTRY BufferDataList;// Offset=0x70 Size=0x10
};

struct _COMMAND_COMPLETION_EVENT_TRB// Size=0x10 (Id=833)
{
    unsigned long long CommandPointer;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long CompletionParameter:24;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long CompletionCode:8;// Offset=0x8 Size=0x4 BitOffset=0x18 BitSize=0x8
        unsigned long CycleBit:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved1:9;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x9
        unsigned long Type:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        unsigned long VirtualFunctionId:8;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long SlotId:8;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

struct _CRASHDUMP_COMMAND_DATA// Size=0x50 (Id=496)
{
    void * DumperHandle;// Offset=0x0 Size=0x8
    void * RegisterHandle;// Offset=0x8 Size=0x8
    union _CRCR * CommandRingControl;// Offset=0x10 Size=0x8
    struct _CRASHDUMP_BUFFER_DATA CommandRingBuffer;// Offset=0x18 Size=0x18
    struct _TRB * TRBArray;// Offset=0x30 Size=0x8
    unsigned long CycleState;// Offset=0x38 Size=0x4
    struct _COMMAND_COMPLETION_EVENT_TRB LastCompletionEvent;// Offset=0x3c Size=0x10
};

enum _USB_DEVICE_SPEED
{
    UsbLowSpeed=0,
    UsbFullSpeed=1,
    UsbHighSpeed=2,
    UsbSuperSpeed=3
};

enum _CRASHDUMP_PORT_TYPE
{
    CrashdumpPortTypeUnknown=0,
    CrashdumpPortType20=20,
    CrashdumpPortType30=30
};

struct _USB_DEVICE_PORT_PATH// Size=0x24 (Id=458)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long PortPathDepth;// Offset=0x4 Size=0x4
    unsigned long TTHubDepth;// Offset=0x8 Size=0x4
    unsigned long PortPath[6];// Offset=0xc Size=0x18
};

enum _DUMP_POWER_DOWN_TYPE
{
    DumpPowerDownTypeCrashdump=0,
    DumpPowerDownTypeHibernateWriteStart=1,
    DumpPowerDownTypeHibernateWriteEnd=2,
    DumpPowerDownTypeHibernateReadStart=3,
    DumpPowerDownTypeHibernateReadEnd=4,
    DumpPowerDownTypeHybridSleep=5,
    DumpPowerDownTypeMax=6
};

struct _CRASHDUMP_DATA// Size=0x278 (Id=494)
{
    struct _CRASHDUMP_REGISTER_DATA RegisterData;// Offset=0x0 Size=0x48
    struct _CRASHDUMP_EVENTRING_DATA EventRingData;// Offset=0x48 Size=0x80
    struct _CRASHDUMP_EVENTRING_DATA EventRingHibernateData;// Offset=0xc8 Size=0x80
    struct _CRASHDUMP_COMMAND_DATA CommandData;// Offset=0x148 Size=0x50
    unsigned long DeviceSlotCount;// Offset=0x198 Size=0x4
    struct _CRASHDUMP_BUFFER_DATA DeviceContextBaseBufferData;// Offset=0x1a0 Size=0x18
    struct _CRASHDUMP_BUFFER_DATA ControlTransferBuffer;// Offset=0x1b8 Size=0x18
    struct _CRASHDUMP_BUFFER_DATA InputDeviceContextBuffer;// Offset=0x1d0 Size=0x18
    void * CommonBufferHandle;// Offset=0x1e8 Size=0x8
    struct _LIST_ENTRY CommonBufferList;// Offset=0x1f0 Size=0x10
    unsigned long CommonBufferPageCount;// Offset=0x200 Size=0x4
    unsigned long CommonBufferUsedBytes;// Offset=0x204 Size=0x4
    unsigned long CurrentBufferIndex;// Offset=0x208 Size=0x4
    enum _USB_DEVICE_SPEED DeviceSpeed;// Offset=0x20c Size=0x4
    enum _CRASHDUMP_PORT_TYPE RootPortType;// Offset=0x210 Size=0x4
    struct _USB_DEVICE_PORT_PATH PortPath;// Offset=0x214 Size=0x24
    struct _CRASHDUMP_USBDEVICE_DATA * DeviceArray;// Offset=0x238 Size=0x8
    struct _CRASHDUMP_USBDEVICE_DATA * TargetDevice;// Offset=0x240 Size=0x8
    enum _DUMP_POWER_DOWN_TYPE PowerDownType;// Offset=0x248 Size=0x4
    struct _CRASHDUMP_BUFFER_DATA DumpMiniportBuffer;// Offset=0x250 Size=0x18
    void * ControllerHandle;// Offset=0x268 Size=0x8
    unsigned char ControllerWasReset;// Offset=0x270 Size=0x1
    unsigned char HybridSleepSaveStateAllowed;// Offset=0x271 Size=0x1
    unsigned char DumpIgnoreNextPortReset;// Offset=0x272 Size=0x1
};
