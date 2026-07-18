enum _NVME_IDLE_POWER_MODE
{
    NVMeIdlePowerModeDefault=0,
    NVMeIdlePowerModeFStatesOnly=1,
    NVMeIdlePowerModeD3Lowest=2,
    NVMeIdlePowerModeAPST=3,
    NVMeIdlePowerModeDisabled=4,
    NVMeIdlePowerModeD3Only=5,
    NVMeIdlePowerModeMax=6
};

union _NVME_DIAGNOSTIC_FLAGS// Size=0x4 (Id=831)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CompleteRequestInISR:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long CommandTimeLogging:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ConsistentPolling:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long HighPriorityPollingDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long IoCompleteWithRedirectDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long TargetNearbyProcForPollingDPC:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DisablePollingSpinLock:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long HybridPolling:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long PollingOnlyMode:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long TimerDpcMixedMode:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long EnableSoftNUMA:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved:21;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x15
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

enum _NVME_SUBMISSION_QUEUE_ASSIGNMENT_POLICY
{
    NVMeSQAssignmentDefault=0,
    NVMeSQAssignmentDefaultHomogeneous=1,
    NVMeSQAssignmentDefaultHeterogeneous=2,
    NVMeSQAssignmentNoDedicatedQueueHomogeneous=3,
    NVMeSQAssignmentNoDedicatedQueueHeterogeneous=4,
    NVMeSQAssignmentMax=5
};

struct _NVME_REGISTRY_VALUES// Size=0x84 (Id=527)
{
    unsigned long ControllerMaxTransferSize;// Offset=0x0 Size=0x4
    unsigned long IoQueueDepth;// Offset=0x4 Size=0x4
    unsigned short IoSubmissionQueueCount;// Offset=0x8 Size=0x2
    unsigned short IoCompletionQueueCount;// Offset=0xa Size=0x2
    unsigned char InterruptCoalescingTime;// Offset=0xc Size=0x1
    unsigned char InterruptCoalescingEntry;// Offset=0xd Size=0x1
    unsigned char ArbitrationBurst;// Offset=0xe Size=0x1
    unsigned char ShutdownTimeout;// Offset=0xf Size=0x1
    unsigned long DeallocateMaxLbaCount;// Offset=0x10 Size=0x4
    unsigned long IoStripeAlignment;// Offset=0x14 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long DisableDeallocate:1;// Offset=0x18 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long ContiguousMemoryFromAnyNode:1;// Offset=0x18 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long ControllerBasicInit:1;// Offset=0x18 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long BypassSgl:1;// Offset=0x18 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long UseDumpPointers:1;// Offset=0x18 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long FirmwareActivateWithoutResetDisabled:1;// Offset=0x18 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long AdditionalFLREnabled:1;// Offset=0x18 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long ReliabilityDegraded:1;// Offset=0x18 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long ReadOnly:1;// Offset=0x18 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long VolatileMemoryBackupDeviceFailed:1;// Offset=0x18 Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long WeightedRoundRobinEnabled:1;// Offset=0x18 Size=0x4 BitOffset=0xa BitSize=0x1
            unsigned long BusSpecificResetEnabled:1;// Offset=0x18 Size=0x4 BitOffset=0xb BitSize=0x1
            unsigned long PlatformLevelResetEnabled:1;// Offset=0x18 Size=0x4 BitOffset=0xc BitSize=0x1
            unsigned long DisableMFNDCCDuringRemoval:1;// Offset=0x18 Size=0x4 BitOffset=0xd BitSize=0x1
            unsigned long EnableSingleDpcForIoCompletion:1;// Offset=0x18 Size=0x4 BitOffset=0xe BitSize=0x1
            unsigned long DisableNamespacePreferredValueCheck:1;// Offset=0x18 Size=0x4 BitOffset=0xf BitSize=0x1
            unsigned long IgnoreNamespacePreferredValues:1;// Offset=0x18 Size=0x4 BitOffset=0x10 BitSize=0x1
            unsigned long DisableBypassIO:1;// Offset=0x18 Size=0x4 BitOffset=0x11 BitSize=0x1
            unsigned long DisableGetActiveNSIDList:1;// Offset=0x18 Size=0x4 BitOffset=0x12 BitSize=0x1
            unsigned long ForceCryptoEraseToUseFormatNVM:1;// Offset=0x18 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long EnforceActiveNamespaceIdentification:1;// Offset=0x18 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long DisableDSTThrottle:1;// Offset=0x18 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long DedicatedSubmissionQueue:1;// Offset=0x18 Size=0x4 BitOffset=0x16 BitSize=0x1
            unsigned long DisableForwardedIO:1;// Offset=0x18 Size=0x4 BitOffset=0x17 BitSize=0x1
            unsigned long SupportZeroActiveNamespace:1;// Offset=0x18 Size=0x4 BitOffset=0x18 BitSize=0x1
            unsigned long EnableIntelTSESplitIOWorkaround:1;// Offset=0x18 Size=0x4 BitOffset=0x19 BitSize=0x1
            unsigned long DisableF0TimestampSync:1;// Offset=0x18 Size=0x4 BitOffset=0x1a BitSize=0x1
            unsigned long DeepQueueDepthSupport:1;// Offset=0x18 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long DeallocateIsolatedMode:1;// Offset=0x18 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long FlushIsolatedMode:1;// Offset=0x18 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long NvmeCrashdumpViaSCSI:1;// Offset=0x18 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long DfxDisable:1;// Offset=0x18 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        unsigned long AsUlong;// Offset=0x18 Size=0x4
    };
    unsigned long AsyncEventMask;// Offset=0x1c Size=0x4
    unsigned char IoQueuePercentageInPollingMode;// Offset=0x20 Size=0x1
    unsigned char Reserved2[3];// Offset=0x21 Size=0x3
    unsigned long IoPollingInterval;// Offset=0x24 Size=0x4
    unsigned short IoCompletionCapInDPC;// Offset=0x28 Size=0x2
    unsigned char Reserved3[2];// Offset=0x2a Size=0x2
    unsigned long IoPollingSize;// Offset=0x2c Size=0x4
    enum _NVME_IDLE_POWER_MODE IdlePowerMode;// Offset=0x30 Size=0x4
    unsigned long MedPowerFxIdleTimeout;// Offset=0x34 Size=0x4
    unsigned long LowestPowerFxIdleTimeout;// Offset=0x38 Size=0x4
    unsigned long MedPowerD3IdleTimeout;// Offset=0x3c Size=0x4
    unsigned long LowestPowerD3IdleTimeout;// Offset=0x40 Size=0x4
    unsigned long MedPowerResumeLatency;// Offset=0x44 Size=0x4
    unsigned long LowestPowerResumeLatency;// Offset=0x48 Size=0x4
    union _NVME_DIAGNOSTIC_FLAGS DiagnosticFlags;// Offset=0x4c Size=0x4
    unsigned long LogSize;// Offset=0x50 Size=0x4
    unsigned long HostMemoryBufferSize;// Offset=0x54 Size=0x4
    unsigned long TestMdlDataBufferOffsetInBytes;// Offset=0x58 Size=0x4
    unsigned long ReservedQueuePairCount;// Offset=0x5c Size=0x4
    unsigned long NvmeTestSwitch;// Offset=0x60 Size=0x4
    unsigned long ErrorEtwThrottleInterval;// Offset=0x64 Size=0x4
    unsigned long DeviceSelfTestThrottleInterval;// Offset=0x68 Size=0x4
    unsigned char AvailableSpare;// Offset=0x6c Size=0x1
    unsigned char AvailableSpareThreshold;// Offset=0x6d Size=0x1
    unsigned char ShutdownTimeoutForSurpriseRemove;// Offset=0x6e Size=0x1
    unsigned char Reserved1;// Offset=0x6f Size=0x1
    unsigned long ForcedPhysicalSectorSizeInBytes;// Offset=0x70 Size=0x4
    unsigned long RetainAsyncEventControlMask;// Offset=0x74 Size=0x4
    unsigned long MaxIOCountLimit;// Offset=0x78 Size=0x4
    unsigned long ControllerResetWaitTimeCushion;// Offset=0x7c Size=0x4
    enum _NVME_SUBMISSION_QUEUE_ASSIGNMENT_POLICY SubmissionQueueAssignmentPolicy;// Offset=0x80 Size=0x4
};
