struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=122)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _ALPC_HANDLE_TABLE// Size=0x20 (Id=1093)
{
    struct _ALPC_HANDLE_ENTRY * Handles;// Offset=0x0 Size=0x8
    struct _EX_PUSH_LOCK Lock;// Offset=0x8 Size=0x8
    unsigned long long TotalHandles;// Offset=0x10 Size=0x8
    unsigned long Flags;// Offset=0x18 Size=0x4
};

struct _ALPC_COMMUNICATION_INFO// Size=0x50 (Id=798)
{
    struct _ALPC_PORT * ConnectionPort;// Offset=0x0 Size=0x8
    struct _ALPC_PORT * ServerCommunicationPort;// Offset=0x8 Size=0x8
    struct _ALPC_PORT * ClientCommunicationPort;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY CommunicationList;// Offset=0x18 Size=0x10
    struct _ALPC_HANDLE_TABLE HandleTable;// Offset=0x28 Size=0x20
    struct _KALPC_MESSAGE * CloseMessage;// Offset=0x48 Size=0x8
};
