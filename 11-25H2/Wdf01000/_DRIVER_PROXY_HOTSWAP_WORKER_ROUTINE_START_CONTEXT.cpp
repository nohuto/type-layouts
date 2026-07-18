enum _WAIT_TYPE
{
    WaitAll=0,
    WaitAny=1,
    WaitNotification=2,
    WaitDequeue=3,
    WaitDpc=4
};

enum _KWAIT_REASON
{
    Executive=0,
    FreePage=1,
    PageIn=2,
    PoolAllocation=3,
    DelayExecution=4,
    Suspended=5,
    UserRequest=6,
    WrExecutive=7,
    WrFreePage=8,
    WrPageIn=9,
    WrPoolAllocation=10,
    WrDelayExecution=11,
    WrSuspended=12,
    WrUserRequest=13,
    WrSpare0=14,
    WrQueue=15,
    WrLpcReceive=16,
    WrLpcReply=17,
    WrVirtualMemory=18,
    WrPageOut=19,
    WrRendezvous=20,
    WrKeyedEvent=21,
    WrTerminated=22,
    WrProcessInSwap=23,
    WrCpuRateControl=24,
    WrCalloutStack=25,
    WrKernel=26,
    WrResource=27,
    WrPushLock=28,
    WrMutex=29,
    WrQuantumEnd=30,
    WrDispatchInt=31,
    WrPreempted=32,
    WrYieldExecution=33,
    WrFastMutex=34,
    WrGuardedMutex=35,
    WrRundown=36,
    WrAlertByThreadId=37,
    WrDeferredPreempt=38,
    WrPhysicalFault=39,
    WrIoRing=40,
    WrMdlCache=41,
    WrRcu=42,
    MaximumWaitReason=43
};

struct _unnamed_119// Size=0x8 (Id=119)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_119 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DRIVER_PROXY_HOTSWAP_WORKER_ROUTINE_START_CONTEXT// Size=0x38 (Id=2768)
{
    unsigned char  ( * WorkerRoutine)(void * ,long );// Offset=0x0 Size=0x8
    void * Context;// Offset=0x8 Size=0x8
    enum _WAIT_TYPE WaitType;// Offset=0x10 Size=0x4
    enum _KWAIT_REASON WaitReason;// Offset=0x14 Size=0x4
    char WaitMode;// Offset=0x18 Size=0x1
    unsigned char Altertable;// Offset=0x19 Size=0x1
    unsigned char HasTimeout;// Offset=0x1a Size=0x1
    union _LARGE_INTEGER Timeout;// Offset=0x20 Size=0x8
    unsigned long EventCount;// Offset=0x28 Size=0x4
    struct _KEVENT * Events[1];// Offset=0x30 Size=0x8
};
