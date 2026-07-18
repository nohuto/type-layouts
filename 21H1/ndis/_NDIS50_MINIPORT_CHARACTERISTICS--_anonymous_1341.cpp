union _NDIS50_MINIPORT_CHARACTERISTICS::_anonymous_1341// Size=0x8 (Id=1341)
{
    int  ( * SendHandler)(void * ,struct _NDIS_PACKET * ,unsigned int );// Offset=0x0 Size=0x8
    int  ( * WanSendHandler)(void * ,void * ,struct _NDIS_WAN_PACKET * );// Offset=0x0 Size=0x8
};
