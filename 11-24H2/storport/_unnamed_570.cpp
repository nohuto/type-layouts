struct _unnamed_570// Size=0x10 (Id=570)
{
    unsigned short SubmissionQueueId;// Offset=0x0 Size=0x2
    unsigned short CompletionQueueId;// Offset=0x2 Size=0x2
    union NVME_COMMAND_DWORD0 CDW0;// Offset=0x4 Size=0x4
    unsigned long long Irp;// Offset=0x8 Size=0x8
};
