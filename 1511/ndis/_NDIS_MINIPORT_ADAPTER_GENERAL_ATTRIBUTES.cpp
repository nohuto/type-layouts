struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
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
    NdisPhysicalMediumMax=20
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

struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES// Size=0xe0 (Id=682)
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
