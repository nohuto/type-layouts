struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

union _NET_LUID_LH// Size=0x8 (Id=512)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=12010)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

enum _NET_IF_ACCESS_TYPE
{
    NET_IF_ACCESS_LOOPBACK=1,
    NET_IF_ACCESS_BROADCAST=2,
    NET_IF_ACCESS_POINT_TO_POINT=3,
    NET_IF_ACCESS_POINT_TO_MULTI_POINT=4,
    NET_IF_ACCESS_MAXIMUM=5
};

enum _NET_IF_DIRECTION_TYPE
{
    NET_IF_DIRECTION_SENDRECEIVE=0,
    NET_IF_DIRECTION_SENDONLY=1,
    NET_IF_DIRECTION_RECEIVEONLY=2,
    NET_IF_DIRECTION_MAXIMUM=3
};

enum _NET_IF_CONNECTION_TYPE
{
    NET_IF_CONNECTION_DEDICATED=1,
    NET_IF_CONNECTION_PASSIVE=2,
    NET_IF_CONNECTION_DEMAND=3,
    NET_IF_CONNECTION_MAXIMUM=4
};

struct _NDIS_BIND_PARAMETERS// Size=0x138 (Id=1738)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _UNICODE_STRING * ProtocolSection;// Offset=0x8 Size=0x8
    struct _UNICODE_STRING * AdapterName;// Offset=0x10 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x18 Size=0x8
    enum _NDIS_MEDIUM MediaType;// Offset=0x20 Size=0x4
    unsigned long MtuSize;// Offset=0x24 Size=0x4
    unsigned long long MaxXmitLinkSpeed;// Offset=0x28 Size=0x8
    unsigned long long XmitLinkSpeed;// Offset=0x30 Size=0x8
    unsigned long long MaxRcvLinkSpeed;// Offset=0x38 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x40 Size=0x8
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x48 Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x4c Size=0x4
    unsigned long LookaheadSize;// Offset=0x50 Size=0x4
    struct _NDIS_PNP_CAPABILITIES * PowerManagementCapabilities;// Offset=0x58 Size=0x8
    unsigned long SupportedPacketFilters;// Offset=0x60 Size=0x4
    unsigned long MaxMulticastListSize;// Offset=0x64 Size=0x4
    unsigned short MacAddressLength;// Offset=0x68 Size=0x2
    unsigned char CurrentMacAddress[32];// Offset=0x6a Size=0x20
    enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;// Offset=0x8c Size=0x4
    struct _NDIS_RECEIVE_SCALE_CAPABILITIES * RcvScaleCapabilities;// Offset=0x90 Size=0x8
    union _NET_LUID_LH BoundIfNetluid;// Offset=0x98 Size=0x8
    unsigned long BoundIfIndex;// Offset=0xa0 Size=0x4
    union _NET_LUID_LH LowestIfNetluid;// Offset=0xa8 Size=0x8
    unsigned long LowestIfIndex;// Offset=0xb0 Size=0x4
    enum _NET_IF_ACCESS_TYPE AccessType;// Offset=0xb4 Size=0x4
    enum _NET_IF_DIRECTION_TYPE DirectionType;// Offset=0xb8 Size=0x4
    enum _NET_IF_CONNECTION_TYPE ConnectionType;// Offset=0xbc Size=0x4
    unsigned short IfType;// Offset=0xc0 Size=0x2
    unsigned char IfConnectorPresent;// Offset=0xc2 Size=0x1
    struct _NDIS_PORT * ActivePorts;// Offset=0xc8 Size=0x8
    unsigned long DataBackFillSize;// Offset=0xd0 Size=0x4
    unsigned long ContextBackFillSize;// Offset=0xd4 Size=0x4
    unsigned long MacOptions;// Offset=0xd8 Size=0x4
    unsigned int CompartmentId;// Offset=0xdc Size=0x4
    struct _NDIS_OFFLOAD * DefaultOffloadConfiguration;// Offset=0xe0 Size=0x8
    struct _NDIS_TCP_CONNECTION_OFFLOAD * TcpConnectionOffloadCapabilities;// Offset=0xe8 Size=0x8
    struct _UNICODE_STRING * BoundAdapterName;// Offset=0xf0 Size=0x8
    struct _NDIS_HD_SPLIT_CURRENT_CONFIG * HDSplitCurrentConfig;// Offset=0xf8 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * ReceiveFilterCapabilities;// Offset=0x100 Size=0x8
    struct _NDIS_PM_CAPABILITIES * PowerManagementCapabilitiesEx;// Offset=0x108 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * NicSwitchCapabilities;// Offset=0x110 Size=0x8
    unsigned char NDKEnabled;// Offset=0x118 Size=0x1
    struct _NDIS_NDK_CAPABILITIES * NDKCapabilities;// Offset=0x120 Size=0x8
    struct _NDIS_SRIOV_CAPABILITIES * SriovCapabilities;// Offset=0x128 Size=0x8
    struct _NDIS_NIC_SWITCH_INFO_ARRAY * NicSwitchArray;// Offset=0x130 Size=0x8
};
