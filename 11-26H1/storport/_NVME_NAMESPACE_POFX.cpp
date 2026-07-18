struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NVME_NAMESPACE_POFX// Size=0xc0 (Id=559)
{
    struct POHANDLE__ * PoHandle;// Offset=0x0 Size=0x8
    void * PoFxDevice;// Offset=0x8 Size=0x8
    unsigned long CurrentFState;// Offset=0x10 Size=0x4
    unsigned long D3IdleTimeout;// Offset=0x14 Size=0x4
    unsigned long MinD3IdleTimeout;// Offset=0x18 Size=0x4
    unsigned long CurrentD3IdleTimeout;// Offset=0x1c Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WakeCapable:1;// Offset=0x20 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long MiniportOptedIn:1;// Offset=0x20 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long DevicePowerRequired:1;// Offset=0x20 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long SetPowerUpReason:1;// Offset=0x20 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long DPNRInCS:1;// Offset=0x20 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long F1InCS:1;// Offset=0x20 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DFxPowerDownInCS:1;// Offset=0x20 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long IoCoalescingOn:1;// Offset=0x20 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long OnBatteryPower:1;// Offset=0x20 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long F1ForPlaceholderMode:1;// Offset=0x20 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long NoRTD3:1;// Offset=0x20 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Reserved:21;// Offset=0x20 Size=0x4 BitOffset=0xb BitSize=0x15
    };
    unsigned long WaitWakeActiveReference;// Offset=0x24 Size=0x4
    unsigned char RegisteredPerfSets;// Offset=0x28 Size=0x1
    unsigned char DFxPowerDownActive;// Offset=0x29 Size=0x1
    unsigned char Reserved0[6];// Offset=0x2a Size=0x6
    unsigned long PerfStateCountFromPEP;// Offset=0x30 Size=0x4
    unsigned long Reserved2;// Offset=0x34 Size=0x4
    struct _STOR_POFX_COMPONENT_PERF_SET * PerfStateFromPEP;// Offset=0x38 Size=0x8
    unsigned char Active;// Offset=0x40 Size=0x1
    unsigned char Reserved1[7];// Offset=0x41 Size=0x7
    struct _IRP * WaitWakeIrp;// Offset=0x48 Size=0x8
    struct _LIST_ENTRY ActivePendingRequestQueue;// Offset=0x50 Size=0x10
    unsigned long long ActiveLock;// Offset=0x60 Size=0x8
    unsigned char Reserved3[8];// Offset=0x68 Size=0x8
    unsigned long long IoctlActiveReferenceAcquires;// Offset=0x80 Size=0x8
    unsigned long long IoctlActiveReferenceReleases;// Offset=0x88 Size=0x8
    unsigned long long IoctlActiveReferences;// Offset=0x90 Size=0x8
    unsigned long long MiniportActiveReferences;// Offset=0x98 Size=0x8
    unsigned long long MiniportActiveReferenceAcquires;// Offset=0xa0 Size=0x8
    unsigned long long MiniportActiveReferenceReleases;// Offset=0xa8 Size=0x8
};
