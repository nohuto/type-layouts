union _NDIS40_PROTOCOL_CHARACTERISTICS::_unnamed_824// Size=0x8 (Id=824)
{
    void  ( * SendCompleteHandler)(void * ,struct _NDIS_PACKET * ,int );// Offset=0x0 Size=0x8
    void  ( * WanSendCompleteHandler)(void * ,struct _NDIS_WAN_PACKET * ,int );// Offset=0x0 Size=0x8
};
