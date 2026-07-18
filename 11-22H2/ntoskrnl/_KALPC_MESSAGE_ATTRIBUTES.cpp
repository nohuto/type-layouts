union _KALPC_DIRECT_EVENT// Size=0x8 (Id=914)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long DirectType:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long EventReferenced:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long EventObjectBits:62;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x3e
    };
};

struct _ALPC_WORK_ON_BEHALF_TICKET// Size=0x8 (Id=913)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long ThreadCreationTimeLow;// Offset=0x4 Size=0x4
};

struct _KALPC_WORK_ON_BEHALF_DATA// Size=0x8 (Id=1884)
{
    struct _ALPC_WORK_ON_BEHALF_TICKET Ticket;// Offset=0x0 Size=0x8
};

struct _KALPC_MESSAGE_ATTRIBUTES// Size=0x48 (Id=909)
{
    void * ClientContext;// Offset=0x0 Size=0x8
    void * ServerContext;// Offset=0x8 Size=0x8
    void * PortContext;// Offset=0x10 Size=0x8
    void * CancelPortContext;// Offset=0x18 Size=0x8
    struct _KALPC_SECURITY_DATA * SecurityData;// Offset=0x20 Size=0x8
    struct _KALPC_VIEW * View;// Offset=0x28 Size=0x8
    struct _KALPC_HANDLE_DATA * HandleData;// Offset=0x30 Size=0x8
    union _KALPC_DIRECT_EVENT DirectEvent;// Offset=0x38 Size=0x8
    struct _KALPC_WORK_ON_BEHALF_DATA WorkOnBehalfData;// Offset=0x40 Size=0x8
};
