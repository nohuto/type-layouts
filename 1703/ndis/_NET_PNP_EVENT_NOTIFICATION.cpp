struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

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

struct _NET_PNP_EVENT// Size=0x98 (Id=1050)
{
    enum _NET_PNP_EVENT_CODE NetEvent;// Offset=0x0 Size=0x4
    void * Buffer;// Offset=0x8 Size=0x8
    unsigned long BufferLength;// Offset=0x10 Size=0x4
    unsigned long long NdisReserved[4];// Offset=0x18 Size=0x20
    unsigned long long TransportReserved[4];// Offset=0x38 Size=0x20
    unsigned long long TdiReserved[4];// Offset=0x58 Size=0x20
    unsigned long long TdiClientReserved[4];// Offset=0x78 Size=0x20
};

struct _NET_PNP_EVENT_NOTIFICATION// Size=0xb0 (Id=931)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long PortNumber;// Offset=0x4 Size=0x4
    struct _NET_PNP_EVENT NetPnPEvent;// Offset=0x8 Size=0x98
    unsigned long Flags;// Offset=0xa0 Size=0x4
    unsigned long SwitchId;// Offset=0xa4 Size=0x4
    unsigned long VPortId;// Offset=0xa8 Size=0x4
};
