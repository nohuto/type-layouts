struct _ALPC_WORK_ON_BEHALF_TICKET// Size=0x8 (Id=817)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long ThreadCreationTimeLow;// Offset=0x4 Size=0x4
};

struct _KALPC_WORK_ON_BEHALF_DATA// Size=0x8 (Id=1688)
{
    struct _ALPC_WORK_ON_BEHALF_TICKET Ticket;// Offset=0x0 Size=0x8
};
