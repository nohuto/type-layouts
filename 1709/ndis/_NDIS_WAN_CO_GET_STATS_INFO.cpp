struct _NDIS_WAN_CO_GET_STATS_INFO// Size=0x74 (Id=1727)
{
    unsigned long BytesSent;// Offset=0x0 Size=0x4
    unsigned long BytesRcvd;// Offset=0x4 Size=0x4
    unsigned long FramesSent;// Offset=0x8 Size=0x4
    unsigned long FramesRcvd;// Offset=0xc Size=0x4
    unsigned long CRCErrors;// Offset=0x10 Size=0x4
    unsigned long TimeoutErrors;// Offset=0x14 Size=0x4
    unsigned long AlignmentErrors;// Offset=0x18 Size=0x4
    unsigned long SerialOverrunErrors;// Offset=0x1c Size=0x4
    unsigned long FramingErrors;// Offset=0x20 Size=0x4
    unsigned long BufferOverrunErrors;// Offset=0x24 Size=0x4
    unsigned long BytesTransmittedUncompressed;// Offset=0x28 Size=0x4
    unsigned long BytesReceivedUncompressed;// Offset=0x2c Size=0x4
    unsigned long BytesTransmittedCompressed;// Offset=0x30 Size=0x4
    unsigned long BytesReceivedCompressed;// Offset=0x34 Size=0x4
    unsigned long TunnelPacketsRecieved;// Offset=0x38 Size=0x4
    unsigned long TunnelRecievePacketsPending;// Offset=0x3c Size=0x4
    unsigned long TunnelPacketsIndicatedUp;// Offset=0x40 Size=0x4
    unsigned long TunnelRecievePacketsRejected;// Offset=0x44 Size=0x4
    unsigned long TunnelPacketsSent;// Offset=0x48 Size=0x4
    unsigned long TunnelPacketsSentComplete;// Offset=0x4c Size=0x4
    unsigned long TunnelTransmitPacketsPending;// Offset=0x50 Size=0x4
    unsigned long TunnelPacketsTransmitError;// Offset=0x54 Size=0x4
    unsigned long TunnelPacketsSentError;// Offset=0x58 Size=0x4
    unsigned long TunnelTransmitPacketsRejected;// Offset=0x5c Size=0x4
    unsigned long TunnelAcksSent;// Offset=0x60 Size=0x4
    unsigned long TunnelAcksSentComplete;// Offset=0x64 Size=0x4
    unsigned long TunnelGeneric1;// Offset=0x68 Size=0x4
    unsigned long TunnelGeneric2;// Offset=0x6c Size=0x4
    unsigned long TunnelGeneric3;// Offset=0x70 Size=0x4
};
