enum _NDIS_TASK
{
    TcpIpChecksumNdisTask=0,
    IpSecNdisTask=1,
    TcpLargeSendNdisTask=2,
    MaxNdisTask=3
};

struct _NDIS_TASK_OFFLOAD// Size=0x18 (Id=1087)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _NDIS_TASK Task;// Offset=0x8 Size=0x4
    unsigned long OffsetNextTask;// Offset=0xc Size=0x4
    unsigned long TaskBufferLength;// Offset=0x10 Size=0x4
    unsigned char TaskBuffer[1];// Offset=0x14 Size=0x1
};
