struct _EX_PUSH_LOCK// Size=0x4 (Id=83)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Locked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Waiting:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long Waking:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long MultipleShared:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long Shared:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
        };
        unsigned long Value;// Offset=0x0 Size=0x4
        void * Ptr;// Offset=0x0 Size=0x4
    };
};

struct _DBGK_SILOSTATE// Size=0x10 (Id=670)
{
    struct _EX_PUSH_LOCK ErrorPortLock;// Offset=0x0 Size=0x4
    struct _DBGKP_ERROR_PORT * ErrorPort;// Offset=0x4 Size=0x4
    struct _EPROCESS * ErrorProcess;// Offset=0x8 Size=0x4
    struct _KEVENT * ErrorPortRegisteredEvent;// Offset=0xc Size=0x4
};
