struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_439// Size=0x4 (Id=439)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long QueueType:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long QueuePortType:4;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x4
        unsigned long Canceled:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Ready:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long ReleaseMessage:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long SharedQuota:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ReplyWaitReply:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long OwnerPortReference:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long ReserveReference:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long ReceiverReference:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long ViewAttributeRetrieved:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long InDispatch:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
    };
};

union _unnamed_440// Size=0x4 (Id=440)
{
    struct _unnamed_439 s1;// Offset=0x0 Size=0x4
    unsigned long State;// Offset=0x0 Size=0x4
};

union _KALPC_DIRECT_EVENT// Size=0x8 (Id=450)
{
    unsigned long long Event;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Referenced:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

struct _ALPC_WORK_ON_BEHALF_TICKET// Size=0x8 (Id=1405)
{
    unsigned long ThreadId;// Offset=0x0 Size=0x4
    unsigned long ThreadCreationTimeLow;// Offset=0x4 Size=0x4
};

struct _KALPC_WORK_ON_BEHALF_DATA// Size=0x8 (Id=1203)
{
    struct _ALPC_WORK_ON_BEHALF_TICKET Ticket;// Offset=0x0 Size=0x8
};

struct _KALPC_MESSAGE_ATTRIBUTES// Size=0x48 (Id=446)
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

struct _unnamed_408// Size=0x4 (Id=408)
{
    short DataLength;// Offset=0x0 Size=0x2
    short TotalLength;// Offset=0x2 Size=0x2
};

union _unnamed_409// Size=0x4 (Id=409)
{
    struct _unnamed_408 s1;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x0 Size=0x4
};

struct _unnamed_410// Size=0x4 (Id=410)
{
    short Type;// Offset=0x0 Size=0x2
    short DataInfoOffset;// Offset=0x2 Size=0x2
};

union _unnamed_411// Size=0x4 (Id=411)
{
    struct _unnamed_410 s2;// Offset=0x0 Size=0x4
    unsigned long ZeroInit;// Offset=0x0 Size=0x4
};

struct _CLIENT_ID// Size=0x10 (Id=552)
{
    void * UniqueProcess;// Offset=0x0 Size=0x8
    void * UniqueThread;// Offset=0x8 Size=0x8
};

struct _PORT_MESSAGE// Size=0x28 (Id=412)
{
    union _unnamed_409 u1;// Offset=0x0 Size=0x4
    union _unnamed_411 u2;// Offset=0x4 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _CLIENT_ID ClientId;// Offset=0x8 Size=0x10
        float DoNotUseThisField;// Offset=0x8 Size=0x8
    };
    unsigned long MessageId;// Offset=0x18 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long ClientViewSize;// Offset=0x20 Size=0x8
        unsigned long CallbackId;// Offset=0x20 Size=0x4
    };
};

struct _KALPC_MESSAGE// Size=0x110 (Id=441)
{
    struct _LIST_ENTRY Entry;// Offset=0x0 Size=0x10
    struct _ALPC_PORT * PortQueue;// Offset=0x10 Size=0x8
    struct _ALPC_PORT * OwnerPort;// Offset=0x18 Size=0x8
    struct _ETHREAD * WaitingThread;// Offset=0x20 Size=0x8
    union _unnamed_440 u1;// Offset=0x28 Size=0x4
    long SequenceNo;// Offset=0x2c Size=0x4
    union // Size=0x8 (Id=0)
    {
        struct _EPROCESS * QuotaProcess;// Offset=0x30 Size=0x8
        void * QuotaBlock;// Offset=0x30 Size=0x8
    };
    struct _ALPC_PORT * CancelSequencePort;// Offset=0x38 Size=0x8
    struct _ALPC_PORT * CancelQueuePort;// Offset=0x40 Size=0x8
    long CancelSequenceNo;// Offset=0x48 Size=0x4
    struct _LIST_ENTRY CancelListEntry;// Offset=0x50 Size=0x10
    struct _KALPC_RESERVE * Reserve;// Offset=0x60 Size=0x8
    struct _KALPC_MESSAGE_ATTRIBUTES MessageAttributes;// Offset=0x68 Size=0x48
    void * DataUserVa;// Offset=0xb0 Size=0x8
    struct _ALPC_COMMUNICATION_INFO * CommunicationInfo;// Offset=0xb8 Size=0x8
    struct _ALPC_PORT * ConnectionPort;// Offset=0xc0 Size=0x8
    struct _ETHREAD * ServerThread;// Offset=0xc8 Size=0x8
    void * WakeReference;// Offset=0xd0 Size=0x8
    void * ExtensionBuffer;// Offset=0xd8 Size=0x8
    unsigned long long ExtensionBufferSize;// Offset=0xe0 Size=0x8
    struct _PORT_MESSAGE PortMessage;// Offset=0xe8 Size=0x28
};
