union _KALPC_DIRECT_EVENT// Size=0x8 (Id=470)
{
    unsigned long long Event;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Referenced:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

struct _ALPC_WORK_ON_BEHALF_TICKET// Size=0x8 (Id=469)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long ThreadCreationTimeLow;// Offset=0x4 Size=0x4
};

struct _KALPC_WORK_ON_BEHALF_DATA// Size=0x8 (Id=1266)
{
    struct _ALPC_WORK_ON_BEHALF_TICKET Ticket;// Offset=0x0 Size=0x8
};

struct _KALPC_MESSAGE_ATTRIBUTES// Size=0x48 (Id=465)
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
