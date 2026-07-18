union NVME_COMPLETION_QUEUE_HEAD_DOORBELL// Size=0x4 (Id=505)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CQH:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
        unsigned long Reserved0:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
