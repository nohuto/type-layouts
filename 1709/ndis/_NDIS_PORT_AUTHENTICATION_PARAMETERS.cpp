struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

struct _NDIS_PORT_AUTHENTICATION_PARAMETERS// Size=0x14 (Id=1393)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    enum _NDIS_PORT_CONTROL_STATE SendControlState;// Offset=0x4 Size=0x4
    enum _NDIS_PORT_CONTROL_STATE RcvControlState;// Offset=0x8 Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE SendAuthorizationState;// Offset=0xc Size=0x4
    enum _NDIS_PORT_AUTHORIZATION_STATE RcvAuthorizationState;// Offset=0x10 Size=0x4
};
