struct _NDIS_PD_EXT_CLIENT_DISPATCH// Size=0x20 (Id=1105)
{
    void  ( * PDExtClientProcessBuffersSend)(struct NDIS_PD_EXT_CLIENT_CONTEXT__ * ,struct _PD_BUFFER * ,struct _PD_BUFFER ** ,struct _PD_BUFFER ** ,unsigned long );// Offset=0x0 Size=0x8
    void  ( * PDExtClientProcessBuffersReceive)(struct NDIS_PD_EXT_CLIENT_CONTEXT__ * ,struct _PD_BUFFER * ,struct _PD_BUFFER ** ,struct _PD_BUFFER ** ,unsigned long );// Offset=0x8 Size=0x8
    void  ( * PDExtClientCompleteBuffersSend)(struct NDIS_PD_EXT_CLIENT_CONTEXT__ * ,struct _PD_BUFFER * ,struct _PD_BUFFER ** ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * PDExtClientCompleteBuffersReceive)(struct NDIS_PD_EXT_CLIENT_CONTEXT__ * ,struct _PD_BUFFER * ,struct _PD_BUFFER ** ,unsigned long );// Offset=0x18 Size=0x8
};
