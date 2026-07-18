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

struct _NDIS_MINIPORT_BLOCK::_anonymous_1517::_anonymous_1517// Size=0x8 (Id=1517)
{
    enum _NET_IF_MEDIA_CONNECT_STATE MiniportMediaConnectState;// Offset=0x0 Size=0x4
    enum _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState;// Offset=0x4 Size=0x4
};
