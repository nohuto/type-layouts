enum _NET_PNP_EVENT_CODE
{
    NetEventSetPower=0,
    NetEventQueryPower=1,
    NetEventQueryRemoveDevice=2,
    NetEventCancelRemoveDevice=3,
    NetEventReconfigure=4,
    NetEventBindList=5,
    NetEventBindsComplete=6,
    NetEventPnPCapabilities=7,
    NetEventPause=8,
    NetEventRestart=9,
    NetEventPortActivation=10,
    NetEventPortDeactivation=11,
    NetEventIMReEnableDevice=12,
    NetEventNDKEnable=13,
    NetEventNDKDisable=14,
    NetEventFilterPreDetach=15,
    NetEventBindFailed=16,
    NetEventSwitchActivate=17,
    NetEventAllowBindsAbove=18,
    NetEventInhibitBindsAbove=19,
    NetEventAllowStart=20,
    NetEventRequirePause=21,
    NetEventUploadGftFlowEntries=22,
    NetEventMaximum=23
};

struct _NET_PNP_EVENT// Size=0x98 (Id=1403)
{
    enum _NET_PNP_EVENT_CODE NetEvent;// Offset=0x0 Size=0x4
    void * Buffer;// Offset=0x8 Size=0x8
    unsigned long BufferLength;// Offset=0x10 Size=0x4
    unsigned long long NdisReserved[4];// Offset=0x18 Size=0x20
    unsigned long long TransportReserved[4];// Offset=0x38 Size=0x20
    unsigned long long TdiReserved[4];// Offset=0x58 Size=0x20
    unsigned long long TdiClientReserved[4];// Offset=0x78 Size=0x20
};
