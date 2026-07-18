struct _LIST_ENTRY// Size=0x10 (Id=31)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _NDIS_PORT_PNP_STATE
{
    NdisPortPnPStateAllocating=1,
    NdisPortPnPStateAllocated=2,
    NdisPortPnPStateActivating=3,
    NdisPortPnPStateActivated=4,
    NdisPortPnPStateDeactivating=5,
    NdisPortPnPStateDeactivated=6,
    NdisPortPnPStateDeallocating=7,
    NdisPortPnPStateDeallocated=8
};

struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_PORT_TYPE
{
    NdisPortTypeUndefined=0,
    NdisPortTypeBridge=1,
    NdisPortTypeRasConnection=2,
    NdisPortType8021xSupplicant=3,
    NdisPortTypeNdisImPlatform=4,
    NdisPortTypeMax=5
};

enum _NET_IF_MEDIA_CONNECT_STATE
{
    MediaConnectStateUnknown=0,
    MediaConnectStateConnected=1,
    MediaConnectStateDisconnected=2
};

enum _NET_IF_DIRECTION_TYPE
{
    NET_IF_DIRECTION_SENDRECEIVE=0,
    NET_IF_DIRECTION_SENDONLY=1,
    NET_IF_DIRECTION_RECEIVEONLY=2,
    NET_IF_DIRECTION_MAXIMUM=3
};

enum _NDIS_PORT_CONTROL_STATE
{
    NdisPortControlStateUnknown=0,
    NdisPortControlStateControlled=1,
    NdisPortControlStateUncontrolled=2
};

enum _NDIS_PORT_AUTHORIZATION_STATE
{
    NdisPortAuthorizationUnknown=0,
    NdisPortAuthorized=1,
    NdisPortUnauthorized=2,
    NdisPortReauthorizing=3
};

struct _NDIS_PORT_CHARACTERISTICS// Size=0x40 (Id=1097)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long PortNumber;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    enum _NDIS_PORT_TYPE Type;// Offset=0xc Size=0x4
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x10 Size=0x4
    unsigned long long XmitLinkSpeed;// Offset=0x18 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x20 Size=0x8
    enum _NET_IF_DIRECTION_TYPE Direction;// Offset=0x28 Size=0x4
    enum _NDIS_PORT_CONTROL_STATE SendControlState;// Offset=0x2c Size=0x4
    enum _NDIS_PORT_CONTROL_STATE RcvControlState;// Offset=0x30 Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;// Offset=0x34 Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;// Offset=0x38 Size=0x4
};

struct _NDIS_PORT_BLOCK// Size=0x58 (Id=883)
{
    struct _LIST_ENTRY Link;// Offset=0x0 Size=0x10
    enum _NDIS_PORT_PNP_STATE PortPnPState;// Offset=0x10 Size=0x4
    enum _NDIS_PORT_PNP_STATE PrevPortPnPState;// Offset=0x14 Size=0x4
    struct _NDIS_PORT_CHARACTERISTICS PortCharacteristics;// Offset=0x18 Size=0x40
};
