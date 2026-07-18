struct _NDIS_WAN_CO_GET_LINK_INFO// Size=0x20 (Id=1230)
{
    unsigned long MaxSendFrameSize;// Offset=0x0 Size=0x4
    unsigned long MaxRecvFrameSize;// Offset=0x4 Size=0x4
    unsigned long SendFramingBits;// Offset=0x8 Size=0x4
    unsigned long RecvFramingBits;// Offset=0xc Size=0x4
    unsigned long SendCompressionBits;// Offset=0x10 Size=0x4
    unsigned long RecvCompressionBits;// Offset=0x14 Size=0x4
    unsigned long SendACCM;// Offset=0x18 Size=0x4
    unsigned long RecvACCM;// Offset=0x1c Size=0x4
};
