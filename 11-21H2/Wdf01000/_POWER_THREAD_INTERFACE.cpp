struct _INTERFACE// Size=0x20 (Id=374)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
};

struct _POWER_THREAD_INTERFACE// Size=0x28 (Id=2310)
{
    struct _INTERFACE Interface;// Offset=0x0 Size=0x20
    void  ( * PowerThreadEnqueue)(void * ,struct _WORK_QUEUE_ITEM * );// Offset=0x20 Size=0x8
};
