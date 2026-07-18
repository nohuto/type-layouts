struct _NVME_CQ_IO_POLLING// Size=0x10 (Id=1301)
{
    unsigned char Mode;// Offset=0x0 Size=0x1
    unsigned char Reserved[3];// Offset=0x1 Size=0x3
    long PollInterval;// Offset=0x4 Size=0x4
    struct NVME_IO_POLLING_WORKER_CONTEXT ** Workers;// Offset=0x8 Size=0x8
};
