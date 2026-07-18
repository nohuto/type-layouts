struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS
{
    NdisPauseFunctionsUnsupported=0,
    NdisPauseFunctionsSendOnly=1,
    NdisPauseFunctionsReceiveOnly=2,
    NdisPauseFunctionsSendAndReceive=3,
    NdisPauseFunctionsUnknown=4
};

struct _NDIS_LINK_STATE// Size=0x28 (Id=1798)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x4 Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x8 Size=0x4
    unsigned long long XmitLinkSpeed;// Offset=0x10 Size=0x8
    unsigned long long RcvLinkSpeed;// Offset=0x18 Size=0x8
    enum _NDIS_SUPPORTED_PAUSE_FUNCTIONS PauseFunctions;// Offset=0x20 Size=0x4
    unsigned long AutoNegotiationFlags;// Offset=0x24 Size=0x4
};
