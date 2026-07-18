struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

union _NET_LUID_LH// Size=0x8 (Id=592)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=12222)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

enum _NET_IF_MEDIA_CONNECT_STATE
{
    MediaConnectStateUnknown=0,
    MediaConnectStateConnected=1,
    MediaConnectStateDisconnected=2
};

enum _NET_IF_MEDIA_DUPLEX_STATE
{
    MediaDuplexStateUnknown=0,
    MediaDuplexStateHalf=1,
    MediaDuplexStateFull=2
};

enum _NDIS_MEDIUM
{
    NdisMedium802_3=0,
    NdisMedium802_5=1,
    NdisMediumFddi=2,
    NdisMediumWan=3,
    NdisMediumLocalTalk=4,
    NdisMediumDix=5,
    NdisMediumArcnetRaw=6,
    NdisMediumArcnet878_2=7,
    NdisMediumAtm=8,
    NdisMediumWirelessWan=9,
    NdisMediumIrda=10,
    NdisMediumBpc=11,
    NdisMediumCoWan=12,
    NdisMedium1394=13,
    NdisMediumInfiniBand=14,
    NdisMediumTunnel=15,
    NdisMediumNative802_11=16,
    NdisMediumLoopback=17,
    NdisMediumWiMAX=18,
    NdisMediumIP=19,
    NdisMediumMax=20
};

enum _NDIS_PHYSICAL_MEDIUM
{
    NdisPhysicalMediumUnspecified=0,
    NdisPhysicalMediumWirelessLan=1,
    NdisPhysicalMediumCableModem=2,
    NdisPhysicalMediumPhoneLine=3,
    NdisPhysicalMediumPowerLine=4,
    NdisPhysicalMediumDSL=5,
    NdisPhysicalMediumFibreChannel=6,
    NdisPhysicalMedium1394=7,
    NdisPhysicalMediumWirelessWan=8,
    NdisPhysicalMediumNative802_11=9,
    NdisPhysicalMediumBluetooth=10,
    NdisPhysicalMediumInfiniband=11,
    NdisPhysicalMediumWiMax=12,
    NdisPhysicalMediumUWB=13,
    NdisPhysicalMedium802_3=14,
    NdisPhysicalMedium802_5=15,
    NdisPhysicalMediumIrda=16,
    NdisPhysicalMediumWiredWAN=17,
    NdisPhysicalMediumWiredCoWan=18,
    NdisPhysicalMediumOther=19,
    NdisPhysicalMediumNative802_15_4=20,
    NdisPhysicalMediumMax=21
};

struct _NDIS_FILTER_ATTACH_PARAMETERS// Size=0xe0 (Id=1363)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long IfIndex;// Offset=0x4 Size=0x4
    union _NET_LUID_LH NetLuid;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING * FilterModuleGuidName;// Offset=0x10 Size=0x8
    unsigned long BaseMiniportIfIndex;// Offset=0x18 Size=0x4
    struct _UNICODE_STRING * BaseMiniportInstanceName;// Offset=0x20 Size=0x8
    struct _UNICODE_STRING * BaseMiniportName;// Offset=0x28 Size=0x8
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x30 Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x34 Size=0x4
    unsigned long long XmitLinkSpeed;// Offset=0x38 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x40 Size=0x8
    enum _NDIS_MEDIUM MiniportMediaType;// Offset=0x48 Size=0x4
    enum _NDIS_PHYSICAL_MEDIUM MiniportPhysicalMediaType;// Offset=0x4c Size=0x4
    void * MiniportMediaSpecificAttributes;// Offset=0x50 Size=0x8
    struct _NDIS_OFFLOAD * DefaultOffloadConfiguration;// Offset=0x58 Size=0x8
    unsigned short MacAddressLength;// Offset=0x60 Size=0x2
    unsigned char CurrentMacAddress[32];// Offset=0x62 Size=0x20
    union _NET_LUID_LH BaseMiniportNetLuid;// Offset=0x88 Size=0x8
    unsigned long LowerIfIndex;// Offset=0x90 Size=0x4
    union _NET_LUID_LH LowerIfNetLuid;// Offset=0x98 Size=0x8
    unsigned long Flags;// Offset=0xa0 Size=0x4
    struct _NDIS_HD_SPLIT_CURRENT_CONFIG * HDSplitCurrentConfig;// Offset=0xa8 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * ReceiveFilterCapabilities;// Offset=0xb0 Size=0x8
    struct _DEVICE_OBJECT * MiniportPhysicalDeviceObject;// Offset=0xb8 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * NicSwitchCapabilities;// Offset=0xc0 Size=0x8
    unsigned char BaseMiniportIfConnectorPresent;// Offset=0xc8 Size=0x1
    struct _NDIS_SRIOV_CAPABILITIES * SriovCapabilities;// Offset=0xd0 Size=0x8
    struct _NDIS_NIC_SWITCH_INFO_ARRAY * NicSwitchArray;// Offset=0xd8 Size=0x8
};
