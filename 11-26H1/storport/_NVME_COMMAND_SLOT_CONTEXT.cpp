struct _NVME_COMMAND_SLOT_CONTEXT// Size=0x10 (Id=508)
{
    struct NVME_COMMAND * QueueEntry;// Offset=0x0 Size=0x8
    unsigned short CommandId;// Offset=0x8 Size=0x2
    unsigned char Reserved[6];// Offset=0xa Size=0x6
};
