struct _LIST_ENTRY// Size=0x10 (Id=28)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=1010)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

enum _NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION
{
    NdisNicSwitchVPortInterruptModerationUndefined=0,
    NdisNicSwitchVPortInterruptModerationAdaptive=1,
    NdisNicSwitchVPortInterruptModerationOff=2,
    NdisNicSwitchVPortInterruptModerationLow=100,
    NdisNicSwitchVPortInterruptModerationMedium=200,
    NdisNicSwitchVPortInterruptModerationHigh=300
};

enum _NDIS_NIC_SWITCH_VPORT_STATE
{
    NdisNicSwitchVPortStateUndefined=0,
    NdisNicSwitchVPortStateActivated=1,
    NdisNicSwitchVPortStateDeactivated=2,
    NdisNicSwitchVPortStateMaximum=3
};

struct _GROUP_AFFINITY// Size=0x10 (Id=520)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _NDIS_NDK_CAPABILITIES// Size=0x38 (Id=1481)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long MaxQpCount;// Offset=0x8 Size=0x4
    unsigned long MaxCqCount;// Offset=0xc Size=0x4
    unsigned long MaxMrCount;// Offset=0x10 Size=0x4
    unsigned long MaxPdCount;// Offset=0x14 Size=0x4
    unsigned long MaxInboundReadLimit;// Offset=0x18 Size=0x4
    unsigned long MaxOutboundReadLimit;// Offset=0x1c Size=0x4
    unsigned long MaxMwCount;// Offset=0x20 Size=0x4
    unsigned long MaxSrqCount;// Offset=0x24 Size=0x4
    unsigned long long MissingCounterMask;// Offset=0x28 Size=0x8
    struct _NDK_ADAPTER_INFO * NdkInfo;// Offset=0x30 Size=0x8
};

struct _NDIS_NDK_REQUEST_PARAMETERS// Size=0x68 (Id=1776)
{
    unsigned char RdmaRequested;// Offset=0x0 Size=0x1
    unsigned int SwitchPortId;// Offset=0x4 Size=0x4
    unsigned long IfIndex;// Offset=0x8 Size=0x4
    unsigned char MacAddress[32];// Offset=0xc Size=0x20
    unsigned int VlanId;// Offset=0x2c Size=0x4
    struct _NDIS_NDK_CAPABILITIES NdkReserved;// Offset=0x30 Size=0x38
};

struct _NDIS_NDK_RESPONSE_PARAMETERS// Size=0x40 (Id=1770)
{
    unsigned char CapabilitiesAvailable;// Offset=0x0 Size=0x1
    struct _NDIS_NDK_CAPABILITIES ReceivedCapabilities;// Offset=0x8 Size=0x38
};

struct _NDIS_NDK_PARAMETERS// Size=0xa8 (Id=1769)
{
    struct _NDIS_NDK_REQUEST_PARAMETERS NdkRequest;// Offset=0x0 Size=0x68
    struct _NDIS_NDK_RESPONSE_PARAMETERS NdkResponse;// Offset=0x68 Size=0x40
};

struct _NDIS_NIC_SWITCH_VPORT_PARAMETERS// Size=0x2f0 (Id=1752)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long SwitchId;// Offset=0x8 Size=0x4
    unsigned long VPortId;// Offset=0xc Size=0x4
    struct _IF_COUNTED_STRING_LH VPortName;// Offset=0x10 Size=0x204
    unsigned short AttachedFunctionId;// Offset=0x214 Size=0x2
    unsigned long NumQueuePairs;// Offset=0x218 Size=0x4
    enum _NDIS_NIC_SWITCH_VPORT_INTERRUPT_MODERATION InterruptModeration;// Offset=0x21c Size=0x4
    enum _NDIS_NIC_SWITCH_VPORT_STATE VPortState;// Offset=0x220 Size=0x4
    struct _GROUP_AFFINITY ProcessorAffinity;// Offset=0x228 Size=0x10
    unsigned long LookaheadSize;// Offset=0x238 Size=0x4
    struct _NDIS_NDK_PARAMETERS NdkParams;// Offset=0x240 Size=0xa8
    unsigned long QosSqId;// Offset=0x2e8 Size=0x4
};

struct _NDIS_VPORT_BLOCK// Size=0x378 (Id=1685)
{
    struct _LIST_ENTRY AdapterLink;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY OpenLink;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY SwitchLink;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY FunctionLink;// Offset=0x30 Size=0x10
    unsigned long Flags;// Offset=0x40 Size=0x4
    struct _NDIS_MINIPORT_BLOCK * Miniport;// Offset=0x48 Size=0x8
    struct _NDIS_OPEN_BLOCK * Open;// Offset=0x50 Size=0x8
    struct _NDIS_NIC_SWITCH_BLOCK * NicSwitch;// Offset=0x58 Size=0x8
    void * AttachedFunction;// Offset=0x60 Size=0x8
    long Reference;// Offset=0x68 Size=0x4
    struct _NDIS_NIC_SWITCH_VPORT_PARAMETERS VPortParams;// Offset=0x70 Size=0x2f0
    unsigned long NumFilters;// Offset=0x360 Size=0x4
    struct _LIST_ENTRY FilterList;// Offset=0x368 Size=0x10
};
