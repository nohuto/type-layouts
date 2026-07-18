struct _UNICODE_STRING// Size=0x10 (Id=22)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
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

union _NDIS_MINIPORT_BLOCK::_unnamed_1548// Size=0x10 (Id=1548)
{
    union // Size=0x10 (Id=0)
    {
        struct _UNICODE_STRING Reserved20;// Offset=0x0 Size=0x10
        enum _NET_IF_MEDIA_CONNECT_STATE MiniportMediaConnectState;// Offset=0x0 Size=0x4
        enum _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState;// Offset=0x4 Size=0x4
    };
};
