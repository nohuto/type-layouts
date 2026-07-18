union _HV_PARTITION_PRIVILEGE_MASK// Size=0x8 (Id=356)
{
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AccessVpRunTimeReg:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long AccessPartitionReferenceCounter:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long AccessSynicRegs:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long AccessSyntheticTimerRegs:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long AccessIntrCtrlRegs:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long AccessHypercallMsrs:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long AccessVpIndex:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long AccessResetReg:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long AccessStatsReg:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long AccessPartitionReferenceTsc:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long AccessGuestIdleReg:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long AccessFrequencyRegs:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long AccessDebugRegs:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long AccessReenlightenmentControls:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long AccessRootSchedulerReg:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long Reserved1:17;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x11
        unsigned long long CreatePartitions:1;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x1
        unsigned long long AccessPartitionId:1;// Offset=0x0 Size=0x8 BitOffset=0x21 BitSize=0x1
        unsigned long long AccessMemoryPool:1;// Offset=0x0 Size=0x8 BitOffset=0x22 BitSize=0x1
        unsigned long long AdjustMessageBuffers:1;// Offset=0x0 Size=0x8 BitOffset=0x23 BitSize=0x1
        unsigned long long PostMessages:1;// Offset=0x0 Size=0x8 BitOffset=0x24 BitSize=0x1
        unsigned long long SignalEvents:1;// Offset=0x0 Size=0x8 BitOffset=0x25 BitSize=0x1
        unsigned long long CreatePort:1;// Offset=0x0 Size=0x8 BitOffset=0x26 BitSize=0x1
        unsigned long long ConnectPort:1;// Offset=0x0 Size=0x8 BitOffset=0x27 BitSize=0x1
        unsigned long long AccessStats:1;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x1
        unsigned long long Reserved2:2;// Offset=0x0 Size=0x8 BitOffset=0x29 BitSize=0x2
        unsigned long long Debugging:1;// Offset=0x0 Size=0x8 BitOffset=0x2b BitSize=0x1
        unsigned long long CpuManagement:1;// Offset=0x0 Size=0x8 BitOffset=0x2c BitSize=0x1
        unsigned long long ConfigureProfiler:1;// Offset=0x0 Size=0x8 BitOffset=0x2d BitSize=0x1
        unsigned long long AccessVpExitTracing:1;// Offset=0x0 Size=0x8 BitOffset=0x2e BitSize=0x1
        unsigned long long EnableExtendedGvaRangesForFlushVirtualAddressList:1;// Offset=0x0 Size=0x8 BitOffset=0x2f BitSize=0x1
        unsigned long long AccessVsm:1;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x1
        unsigned long long AccessVpRegisters:1;// Offset=0x0 Size=0x8 BitOffset=0x31 BitSize=0x1
        unsigned long long UnusedBit:1;// Offset=0x0 Size=0x8 BitOffset=0x32 BitSize=0x1
        unsigned long long FastHypercallOutput:1;// Offset=0x0 Size=0x8 BitOffset=0x33 BitSize=0x1
        unsigned long long EnableExtendedHypercalls:1;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0x1
        unsigned long long StartVirtualProcessor:1;// Offset=0x0 Size=0x8 BitOffset=0x35 BitSize=0x1
        unsigned long long Isolation:1;// Offset=0x0 Size=0x8 BitOffset=0x36 BitSize=0x1
        unsigned long long Reserved3:9;// Offset=0x0 Size=0x8 BitOffset=0x37 BitSize=0x9
    };
};

struct _HV_X64_HYPERVISOR_FEATURES// Size=0x10 (Id=355)
{
    union _HV_PARTITION_PRIVILEGE_MASK PartitionPrivileges;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned int MaxSupportedCState:4;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned int HpetNeededForC3PowerState_Deprecated:1;// Offset=0x8 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int Reserved:27;// Offset=0x8 Size=0x4 BitOffset=0x5 BitSize=0x1b
        unsigned int MwaitAvailable_Deprecated:1;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int GuestDebuggingAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int PerformanceMonitorsAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int CpuDynamicPartitioningAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int XmmRegistersForFastHypercallAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int GuestIdleAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int HypervisorSleepStateSupportAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int NumaDistanceQueryAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned int FrequencyRegsAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned int SyntheticMachineCheckAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned int GuestCrashRegsAvailable:1;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned int DebugRegsAvailable:1;// Offset=0xc Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned int Npiep1Available:1;// Offset=0xc Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned int DisableHypervisorAvailable:1;// Offset=0xc Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned int ExtendedGvaRangesForFlushVirtualAddressListAvailable:1;// Offset=0xc Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned int FastHypercallOutputAvailable:1;// Offset=0xc Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned int SvmFeaturesAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x10 BitSize=0x1
        unsigned int SintPollingModeAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned int HypercallMsrLockAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned int DirectSyntheticTimers:1;// Offset=0xc Size=0x4 BitOffset=0x13 BitSize=0x1
        unsigned int RegisterPatAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x14 BitSize=0x1
        unsigned int RegisterBndcfgsAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned int WatchdogTimerAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned int SyntheticTimeUnhaltedTimerAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned int DeviceDomainsAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x18 BitSize=0x1
        unsigned int S1DeviceDomainsAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned int LbrAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned int IptAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned int CrossVtlFlushAvailable:1;// Offset=0xc Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned int Reserved1:3;// Offset=0xc Size=0x4 BitOffset=0x1d BitSize=0x3
    };
};
