struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD// Size=0x8 (Id=1799)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long TransmitChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x4
        unsigned long ReceiveChecksumOffloadSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x4
        unsigned long LsoV2Supported:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
        unsigned long RssSupported:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
        unsigned long VmqSupported:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
    };
    unsigned long MaxHeaderSizeSupported;// Offset=0x4 Size=0x4
};
