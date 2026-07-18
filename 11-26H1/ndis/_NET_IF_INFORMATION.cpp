struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=236)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NET_PHYSICAL_LOCATION_LH// Size=0xc (Id=1792)
{
    unsigned long BusNumber;// Offset=0x0 Size=0x4
    unsigned long SlotNumber;// Offset=0x4 Size=0x4
    unsigned long FunctionNumber;// Offset=0x8 Size=0x4
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

struct _GUID// Size=0x10 (Id=2)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
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

struct _NET_IF_INFORMATION// Size=0x60 (Id=1368)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _NET_PHYSICAL_LOCATION_LH PhysicalLocation;// Offset=0x8 Size=0xc
    unsigned long WanTunnelType;// Offset=0x14 Size=0x4
    unsigned long PortNumber;// Offset=0x18 Size=0x4
    enum _NET_IF_ACCESS_TYPE AccessType;// Offset=0x1c Size=0x4
    enum _NET_IF_DIRECTION_TYPE DirectionType;// Offset=0x20 Size=0x4
    enum _NET_IF_CONNECTION_TYPE ConnectionType;// Offset=0x24 Size=0x4
    unsigned char ifConnectorPresent;// Offset=0x28 Size=0x1
    unsigned short PhysAddressLength;// Offset=0x2a Size=0x2
    unsigned short PhysAddressOffset;// Offset=0x2c Size=0x2
    unsigned short PermanentPhysAddressOffset;// Offset=0x2e Size=0x2
    unsigned short FriendlyNameLength;// Offset=0x30 Size=0x2
    unsigned short FriendlyNameOffset;// Offset=0x32 Size=0x2
    struct _GUID InterfaceGuid;// Offset=0x34 Size=0x10
    struct _GUID NetworkGuid;// Offset=0x44 Size=0x10
    unsigned long SupportedStatistics;// Offset=0x54 Size=0x4
    enum _NDIS_MEDIUM MediaType;// Offset=0x58 Size=0x4
    enum _NDIS_PHYSICAL_MEDIUM PhysicalMediumType;// Offset=0x5c Size=0x4
};
