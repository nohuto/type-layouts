struct _GROUP_AFFINITY// Size=0x10 (Id=203)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _NVME_INTERRUPT_MESSAGE_INFO// Size=0x20 (Id=1163)
{
    unsigned long MessageId;// Offset=0x0 Size=0x4
    struct _GROUP_AFFINITY GroupAffinity;// Offset=0x8 Size=0x10
    struct _NVME_COMPLETION_QUEUE * IoCompletionQueue;// Offset=0x18 Size=0x8
};
