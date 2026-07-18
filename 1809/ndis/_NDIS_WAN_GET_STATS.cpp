struct _NDIS_WAN_GET_STATS// Size=0x40 (Id=1806)
{
    unsigned char LocalAddress[6];// Offset=0x0 Size=0x6
    unsigned long BytesSent;// Offset=0x8 Size=0x4
    unsigned long BytesRcvd;// Offset=0xc Size=0x4
    unsigned long FramesSent;// Offset=0x10 Size=0x4
    unsigned long FramesRcvd;// Offset=0x14 Size=0x4
    unsigned long CRCErrors;// Offset=0x18 Size=0x4
    unsigned long TimeoutErrors;// Offset=0x1c Size=0x4
    unsigned long AlignmentErrors;// Offset=0x20 Size=0x4
    unsigned long SerialOverrunErrors;// Offset=0x24 Size=0x4
    unsigned long FramingErrors;// Offset=0x28 Size=0x4
    unsigned long BufferOverrunErrors;// Offset=0x2c Size=0x4
    unsigned long BytesTransmittedUncompressed;// Offset=0x30 Size=0x4
    unsigned long BytesReceivedUncompressed;// Offset=0x34 Size=0x4
    unsigned long BytesTransmittedCompressed;// Offset=0x38 Size=0x4
    unsigned long BytesReceivedCompressed;// Offset=0x3c Size=0x4
};
