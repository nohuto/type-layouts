enum _NET_IF_MEDIA_CONNECT_STATE
{
    MediaConnectStateUnknown=0,
    MediaConnectStateConnected=1,
    MediaConnectStateDisconnected=2
};

union _NDIS_MINIPORT_BLOCK::_unnamed_1576// Size=0x8 (Id=1576)
{
    union // Size=0x8 (Id=0)
    {
        struct _DEVICE_OBJECT * Reserved6;// Offset=0x0 Size=0x8
        enum _NET_IF_MEDIA_CONNECT_STATE MediaConnectState;// Offset=0x0 Size=0x4
    };
};
