struct _PO_FX_PERF_STATE_CHANGE// Size=0x10 (Id=1001)
{
    unsigned long Set;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long StateIndex;// Offset=0x8 Size=0x4
        unsigned long long StateValue;// Offset=0x8 Size=0x8
    };
};

struct _NVME_ADAPTER_POFX// Size=0xc0 (Id=553)
{
    struct POHANDLE__ * PoHandle;// Offset=0x0 Size=0x8
    void * PoFxDevice;// Offset=0x8 Size=0x8
    unsigned long FStateCount;// Offset=0x10 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DevicePowerRequired:1;// Offset=0x14 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long StoppedActiveReference:1;// Offset=0x14 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DPNRInCS:1;// Offset=0x14 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long F1InCS:1;// Offset=0x14 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DFxPowerDownInCS:1;// Offset=0x14 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long WaitWakeIrpSent:1;// Offset=0x14 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long WakeCapable:1;// Offset=0x14 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long F0Only:1;// Offset=0x14 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long FStateIdleTimerSet:1;// Offset=0x14 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long NoRTD3:1;// Offset=0x14 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Reserved:22;// Offset=0x14 Size=0x4 BitOffset=0xa BitSize=0x16
    };
    unsigned long long OperationalPowerMax;// Offset=0x18 Size=0x8
    unsigned long long OperationalPowerMin;// Offset=0x20 Size=0x8
    unsigned long long MaxOperationalPower[3];// Offset=0x28 Size=0x18
    unsigned char Active;// Offset=0x40 Size=0x1
    unsigned char DFxPowerDownActive;// Offset=0x41 Size=0x1
    unsigned char Reserved0[2];// Offset=0x42 Size=0x2
    unsigned long CurrentFState;// Offset=0x44 Size=0x4
    struct _IRP * WaitWakeIrp;// Offset=0x48 Size=0x8
    unsigned char RegisteredPerfSets;// Offset=0x50 Size=0x1
    unsigned char Reserved1[3];// Offset=0x51 Size=0x3
    unsigned long PerfStateCountFromPEP;// Offset=0x54 Size=0x4
    struct _STOR_POFX_COMPONENT_PERF_SET * PerfStateFromPEP;// Offset=0x58 Size=0x8
    struct _PO_FX_PERF_STATE_CHANGE PerfStateChange;// Offset=0x60 Size=0x10
    struct _KDPC * FStateIdleDPC;// Offset=0x70 Size=0x8
    struct _KTIMER * FStateIdleTimer;// Offset=0x78 Size=0x8
    unsigned long D3IdleTimeout;// Offset=0x80 Size=0x4
    unsigned long PoFxPlaceHolderD3IdleTimeout;// Offset=0x84 Size=0x4
    unsigned long WaitWakeActiveReference;// Offset=0x88 Size=0x4
    unsigned char Reserved3[4];// Offset=0x8c Size=0x4
    unsigned long long IoctlActiveReferences;// Offset=0x90 Size=0x8
    unsigned long long IoctlActiveReferenceAcquires;// Offset=0x98 Size=0x8
    unsigned long long IoctlActiveReferenceReleases;// Offset=0xa0 Size=0x8
    unsigned long long MiniportActiveReferences;// Offset=0xa8 Size=0x8
    unsigned long long MiniportActiveReferenceAcquires;// Offset=0xb0 Size=0x8
    unsigned long long MiniportActiveReferenceReleases;// Offset=0xb8 Size=0x8
};
