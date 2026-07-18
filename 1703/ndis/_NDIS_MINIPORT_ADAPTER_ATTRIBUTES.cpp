struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_ADD_DEVICE_REGISTRATION_ATTRIBUTES// Size=0x18 (Id=824)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * MiniportAddDeviceContext;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
};

enum _NDIS_INTERFACE_TYPE
{
    NdisInterfaceInternal=0,
    NdisInterfaceIsa=1,
    NdisInterfaceEisa=2,
    NdisInterfaceMca=3,
    NdisInterfaceTurboChannel=4,
    NdisInterfacePci=5,
    NdisInterfacePcMcia=8,
    NdisInterfaceCBus=9,
    NdisInterfaceMPIBus=10,
    NdisInterfaceMPSABus=11,
    NdisInterfaceProcessorInternal=12,
    NdisInterfaceInternalPowerBus=13,
    NdisInterfacePNPISABus=14,
    NdisInterfacePNPBus=15,
    NdisInterfaceUSB=16,
    NdisInterfaceIrda=17,
    NdisInterface1394=18,
    NdisMaximumInterfaceType=19
};

struct _NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES// Size=0x20 (Id=795)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    void * MiniportAdapterContext;// Offset=0x8 Size=0x8
    unsigned long AttributeFlags;// Offset=0x10 Size=0x4
    unsigned int CheckForHangTimeInSeconds;// Offset=0x14 Size=0x4
    enum _NDIS_INTERFACE_TYPE InterfaceType;// Offset=0x18 Size=0x4
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

struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES// Size=0xe0 (Id=1141)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_MEDIUM MediaType;// Offset=0x8 Size=0x4
    enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;// Offset=0xc Size=0x4
    unsigned long MtuSize;// Offset=0x10 Size=0x4
    unsigned long long MaxXmitLinkSpeed;// Offset=0x18 Size=0x8
    unsigned long long XmitLinkSpeed;// Offset=0x20 Size=0x8
    unsigned long long MaxRcvLinkSpeed;// Offset=0x28 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x30 Size=0x8
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x38 Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x3c Size=0x4
    unsigned long LookaheadSize;// Offset=0x40 Size=0x4
    struct _NDIS_PNP_CAPABILITIES * PowerManagementCapabilities;// Offset=0x48 Size=0x8
    unsigned long MacOptions;// Offset=0x50 Size=0x4
    unsigned long SupportedPacketFilters;// Offset=0x54 Size=0x4
    unsigned long MaxMulticastListSize;// Offset=0x58 Size=0x4
    unsigned short MacAddressLength;// Offset=0x5c Size=0x2
    unsigned char PermanentMacAddress[32];// Offset=0x5e Size=0x20
    unsigned char CurrentMacAddress[32];// Offset=0x7e Size=0x20
    struct _NDIS_RECEIVE_SCALE_CAPABILITIES * RecvScaleCapabilities;// Offset=0xa0 Size=0x8
    enum _NET_IF_ACCESS_TYPE AccessType;// Offset=0xa8 Size=0x4
    enum _NET_IF_DIRECTION_TYPE DirectionType;// Offset=0xac Size=0x4
    enum _NET_IF_CONNECTION_TYPE ConnectionType;// Offset=0xb0 Size=0x4
    unsigned short IfType;// Offset=0xb4 Size=0x2
    unsigned char IfConnectorPresent;// Offset=0xb6 Size=0x1
    unsigned long SupportedStatistics;// Offset=0xb8 Size=0x4
    unsigned long SupportedPauseFunctions;// Offset=0xbc Size=0x4
    unsigned long DataBackFillSize;// Offset=0xc0 Size=0x4
    unsigned long ContextBackFillSize;// Offset=0xc4 Size=0x4
    unsigned long * SupportedOidList;// Offset=0xc8 Size=0x8
    unsigned long SupportedOidListLength;// Offset=0xd0 Size=0x4
    unsigned long AutoNegotiationFlags;// Offset=0xd4 Size=0x4
    struct _NDIS_PM_CAPABILITIES * PowerManagementCapabilitiesEx;// Offset=0xd8 Size=0x8
};

struct _NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES// Size=0x28 (Id=1358)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_OFFLOAD * DefaultOffloadConfiguration;// Offset=0x8 Size=0x8
    struct _NDIS_OFFLOAD * HardwareOffloadCapabilities;// Offset=0x10 Size=0x8
    struct _NDIS_TCP_CONNECTION_OFFLOAD * DefaultTcpConnectionOffloadConfiguration;// Offset=0x18 Size=0x8
    struct _NDIS_TCP_CONNECTION_OFFLOAD * TcpConnectionOffloadHardwareCapabilities;// Offset=0x20 Size=0x8
};

struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES// Size=0x40 (Id=1126)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long OpModeCapability;// Offset=0x4 Size=0x4
    unsigned long NumOfTXBuffers;// Offset=0x8 Size=0x4
    unsigned long NumOfRXBuffers;// Offset=0xc Size=0x4
    unsigned char MultiDomainCapabilityImplemented;// Offset=0x10 Size=0x1
    unsigned long NumSupportedPhys;// Offset=0x14 Size=0x4
    struct DOT11_PHY_ATTRIBUTES * SupportedPhyAttributes;// Offset=0x18 Size=0x8
    struct DOT11_EXTSTA_ATTRIBUTES * ExtSTAAttributes;// Offset=0x20 Size=0x8
    struct DOT11_VWIFI_ATTRIBUTES * VWiFiAttributes;// Offset=0x28 Size=0x8
    struct _DOT11_EXTAP_ATTRIBUTES * ExtAPAttributes;// Offset=0x30 Size=0x8
    struct _DOT11_WFD_ATTRIBUTES * WFDAttributes;// Offset=0x38 Size=0x8
};

struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES// Size=0x60 (Id=762)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_HD_SPLIT_ATTRIBUTES * HDSplitAttributes;// Offset=0x8 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * HardwareReceiveFilterCapabilities;// Offset=0x10 Size=0x8
    struct _NDIS_RECEIVE_FILTER_CAPABILITIES * CurrentReceiveFilterCapabilities;// Offset=0x18 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * HardwareNicSwitchCapabilities;// Offset=0x20 Size=0x8
    struct _NDIS_NIC_SWITCH_CAPABILITIES * CurrentNicSwitchCapabilities;// Offset=0x28 Size=0x8
    struct _NDIS_SRIOV_CAPABILITIES * HardwareSriovCapabilities;// Offset=0x30 Size=0x8
    struct _NDIS_SRIOV_CAPABILITIES * CurrentSriovCapabilities;// Offset=0x38 Size=0x8
    struct _NDIS_QOS_CAPABILITIES * HardwareQosCapabilities;// Offset=0x40 Size=0x8
    struct _NDIS_QOS_CAPABILITIES * CurrentQosCapabilities;// Offset=0x48 Size=0x8
    struct _NDIS_GFT_OFFLOAD_CAPABILITIES * HardwareGftOffloadCapabilities;// Offset=0x50 Size=0x8
    struct _NDIS_GFT_OFFLOAD_CAPABILITIES * CurrentGftOffloadCapabilities;// Offset=0x58 Size=0x8
};

struct _NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES// Size=0x10 (Id=950)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char Enabled;// Offset=0x4 Size=0x1
    struct _NDIS_NDK_CAPABILITIES * NdkCapabilities;// Offset=0x8 Size=0x8
};

struct _NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES// Size=0xc (Id=1131)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned char DmaAddressWidth;// Offset=0x8 Size=0x1
};

union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES// Size=0xe0 (Id=683)
{
    union // Size=0xe0 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        struct _NDIS_MINIPORT_ADD_DEVICE_REGISTRATION_ATTRIBUTES AddDeviceRegistrationAttributes;// Offset=0x0 Size=0x18
        struct _NDIS_MINIPORT_ADAPTER_REGISTRATION_ATTRIBUTES RegistrationAttributes;// Offset=0x0 Size=0x20
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES GeneralAttributes;// Offset=0x0 Size=0xe0
        struct _NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES OffloadAttributes;// Offset=0x0 Size=0x28
        struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES Native_802_11_Attributes;// Offset=0x0 Size=0x40
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES HardwareAssistAttributes;// Offset=0x0 Size=0x60
        struct _NDIS_MINIPORT_ADAPTER_NDK_ATTRIBUTES NDKAttributes;// Offset=0x0 Size=0x10
        struct _NDIS_MINIPORT_ADAPTER_PACKET_DIRECT_ATTRIBUTES PacketDirectAttributes;// Offset=0x0 Size=0xc
    };
};
