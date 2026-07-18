enum _NET_IF_MEDIA_DUPLEX_STATE
{
    MediaDuplexStateUnknown=0,
    MediaDuplexStateHalf=1,
    MediaDuplexStateFull=2
};

union _NDIS_MINIPORT_BLOCK::_unnamed_1424// Size=0x8 (Id=1424)
{
    union // Size=0x8 (Id=0)
    {
        struct _DEVICE_OBJECT * Reserved7;// Offset=0x0 Size=0x8
        enum _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexState;// Offset=0x0 Size=0x4
    };
};
