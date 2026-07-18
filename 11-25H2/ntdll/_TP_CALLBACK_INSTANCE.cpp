struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME// Size=0x18 (Id=808)
{
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME * Previous;// Offset=0x0 Size=0x8
    struct _ACTIVATION_CONTEXT * ActivationContext;// Offset=0x8 Size=0x8
    unsigned long Flags;// Offset=0x10 Size=0x4
};

struct _RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED// Size=0x48 (Id=765)
{
    unsigned long long Size;// Offset=0x0 Size=0x8
    unsigned long Format;// Offset=0x8 Size=0x4
    struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME Frame;// Offset=0x10 Size=0x18
    void * Extra1;// Offset=0x28 Size=0x8
    void * Extra2;// Offset=0x30 Size=0x8
    void * Extra3;// Offset=0x38 Size=0x8
    void * Extra4;// Offset=0x40 Size=0x8
};

enum _TPP_CALLBACK_RUN_TYPE
{
    TppCallbackRunTypeNormal=0,
    TppCallbackRunTypeLong=1,
    TppCallbackRunTypeIndependent=2,
    TppCallbackRunTypeShort=3,
    TppCallbackRunTypeShortUsed=4
};

struct _WORKER_FACTORY_DEFERRED_WORK// Size=0x18 (Id=534)
{
    struct _PORT_MESSAGE * AlpcSendMessage;// Offset=0x0 Size=0x8
    void * AlpcSendMessagePort;// Offset=0x8 Size=0x8
    unsigned long AlpcSendMessageFlags;// Offset=0x10 Size=0x4
    unsigned long Flags;// Offset=0x14 Size=0x4
};

struct _GUID// Size=0x10 (Id=49)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TP_CALLBACK_INSTANCE// Size=0x100 (Id=357)
{
    struct _RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED ActivationFrame;// Offset=0x0 Size=0x48
    enum _TPP_CALLBACK_RUN_TYPE CallbackRunType;// Offset=0x48 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char ActivationFrameUsed:1;// Offset=0x4c Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Disassociated:1;// Offset=0x4c Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char UnrecoverableErrorDetected:1;// Offset=0x4c Size=0x1 BitOffset=0x2 BitSize=0x1
    };
    void * SubProcessTag;// Offset=0x50 Size=0x8
    union // Size=0x60 (Id=0)
    {
        void * Callback;// Offset=0x58 Size=0x8
        void  ( * WorkCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_WORK * );// Offset=0x58 Size=0x8
        void  ( * SimpleCallback)(struct _TP_CALLBACK_INSTANCE * ,void * );// Offset=0x58 Size=0x8
        void  ( * TimerCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_TIMER * );// Offset=0x58 Size=0x8
        void  ( * WaitCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_WAIT * ,long );// Offset=0x58 Size=0x8
        void  ( * IoCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,void * ,struct _IO_STATUS_BLOCK * ,struct _TP_IO * );// Offset=0x58 Size=0x8
        void  ( * AlpcCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_ALPC * );// Offset=0x58 Size=0x8
        void  ( * AlpcCallbackEx)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_ALPC * ,void * );// Offset=0x58 Size=0x8
        void  ( * JobCallback)(struct _TP_CALLBACK_INSTANCE * ,void * ,struct _TP_JOB * ,unsigned long long ,void * ,long );// Offset=0x58 Size=0x8
        void  ( * FinalizationCallback)(struct _TP_CALLBACK_INSTANCE * ,void * );// Offset=0x58 Size=0x8
        void  ( * DirectCallback)(struct _TP_CALLBACK_INSTANCE * ,struct _TP_DIRECT * ,void * ,struct _IO_STATUS_BLOCK * );// Offset=0x58 Size=0x8
        void  ( * TaskCallback)(struct _TP_CALLBACK_INSTANCE * ,struct _TP_TASK * );// Offset=0x58 Size=0x8
    };
    void * Context;// Offset=0x60 Size=0x8
    union // Size=0x4 (Id=0)
    {
        unsigned long SkipPostThreadFlags;// Offset=0x68 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long SPActFrame:1;// Offset=0x68 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long SPSubProcTag:1;// Offset=0x68 Size=0x4 BitOffset=0x1 BitSize=0x1
            unsigned long SPImpersonation:1;// Offset=0x68 Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long SPThreadInfo:1;// Offset=0x68 Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long SPTransaction:1;// Offset=0x68 Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long SPLdrLock:1;// Offset=0x68 Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SPLanguages:1;// Offset=0x68 Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long SPThreadPriBack:1;// Offset=0x68 Size=0x4 BitOffset=0x7 BitSize=0x1
        };
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long VerifyThreadFlags;// Offset=0x6c Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long VThreadInfo:1;// Offset=0x6c Size=0x4 BitOffset=0x0 BitSize=0x1
        };
    };
    long PreCallThrdPriority;// Offset=0x70 Size=0x4
    unsigned long long PreCallThrdAffinity;// Offset=0x78 Size=0x8
    struct _TP_POOL * Pool;// Offset=0x80 Size=0x8
    struct _TP_ALPC * AlpcWorkItem;// Offset=0x88 Size=0x8
    unsigned long CallbackEpilogFlags;// Offset=0x90 Size=0x4
    unsigned long Event;// Offset=0x94 Size=0x4
    unsigned long Mutex;// Offset=0x98 Size=0x4
    unsigned long Semaphore;// Offset=0x9c Size=0x4
    unsigned long SemaphoreReleaseCount;// Offset=0xa0 Size=0x4
    void * RaceDll;// Offset=0xa8 Size=0x8
    struct _TP_CLEANUP_GROUP * CleanupGroup;// Offset=0xb0 Size=0x8
    struct _TPP_CLEANUP_GROUP_MEMBER * CleanupGroupMember;// Offset=0xb8 Size=0x8
    struct _RTL_CRITICAL_SECTION * CriticalSection;// Offset=0xc0 Size=0x8
    void * DllHandle;// Offset=0xc8 Size=0x8
    struct _WORKER_FACTORY_DEFERRED_WORK DeferredWork;// Offset=0xd0 Size=0x18
    struct _GUID PreviousActivityId;// Offset=0xe8 Size=0x10
    unsigned long long WorkOnBehalf;// Offset=0xf8 Size=0x8
};
