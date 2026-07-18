struct _NDIS_TASK_TCP_LARGE_SEND// Size=0x10 (Id=811)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long MaxOffLoadSize;// Offset=0x4 Size=0x4
    unsigned long MinSegmentCount;// Offset=0x8 Size=0x4
    unsigned char TcpOptions;// Offset=0xc Size=0x1
    unsigned char IpOptions;// Offset=0xd Size=0x1
};
