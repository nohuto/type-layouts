union _unnamed_602// Size=0x4 (Id=602)
{
    struct // Size=0x4 (Id=0)
    {
        long PerfStateChangeInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    long AsLong;// Offset=0x0 Size=0x4
};

struct _PO_FX_PERF_STATE_CHANGE// Size=0x10 (Id=996)
{
    unsigned long Set;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long StateIndex;// Offset=0x8 Size=0x4
        unsigned long long StateValue;// Offset=0x8 Size=0x8
    };
};

struct _RAID_ADAPTER_POFX// Size=0x90 (Id=603)
{
    struct POHANDLE__ * PoHandle;// Offset=0x0 Size=0x8
    void * PoFxDevice;// Offset=0x8 Size=0x8
    unsigned long CurrentFState;// Offset=0x10 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Active:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long DevicePowerRequired:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long StoppedActiveReference:1;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long DPNRInCS:1;// Offset=0x14 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long F1InCS:1;// Offset=0x14 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long DFxPowerDownInCS:1;// Offset=0x14 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long WaitWakeIrpSent:1;// Offset=0x14 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long WakeCapable:1;// Offset=0x14 Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long F0Only:1;// Offset=0x14 Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long Reserved0:23;// Offset=0x14 Size=0x4 BitOffset=0x9 BitSize=0x17
        };
        unsigned long Flags;// Offset=0x14 Size=0x4
    };
    unsigned long WaitWakeActiveReference;// Offset=0x18 Size=0x4
    unsigned char RegisteredPerfSets;// Offset=0x1c Size=0x1
    unsigned long long OperationalPowerMax;// Offset=0x20 Size=0x8
    unsigned long long OperationalPowerMin;// Offset=0x28 Size=0x8
    unsigned long long MaxOperationalPower[3];// Offset=0x30 Size=0x18
    struct _IRP * WaitWakeIrp;// Offset=0x48 Size=0x8
    unsigned long long MiniportActiveReferences;// Offset=0x50 Size=0x8
    unsigned long long MiniportActiveReferenceAcquires;// Offset=0x58 Size=0x8
    unsigned long long MiniportActiveReferenceReleases;// Offset=0x60 Size=0x8
    unsigned long PerfStateCountFromPEP;// Offset=0x68 Size=0x4
    struct _STOR_POFX_COMPONENT_PERF_SET * PerfStateFromPEP;// Offset=0x70 Size=0x8
    union _unnamed_602 InterlockedFlags;// Offset=0x78 Size=0x4
    struct _PO_FX_PERF_STATE_CHANGE PerfStateChange;// Offset=0x80 Size=0x10
};
