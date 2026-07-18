enum _NT_IORING_CREATE_REQUIRED_FLAGS
{
    NT_IORING_CREATE_REQUIRED_FLAG_NONE=0
};

enum _NT_IORING_CREATE_ADVISORY_FLAGS
{
    NT_IORING_CREATE_ADVISORY_FLAG_NONE=0,
    NT_IORING_CREATE_SKIP_BUILDER_PARAM_CHECKS=1
};

struct _NT_IORING_CREATE_FLAGS// Size=0x8 (Id=2248)
{
    enum _NT_IORING_CREATE_REQUIRED_FLAGS Required;// Offset=0x0 Size=0x4
    enum _NT_IORING_CREATE_ADVISORY_FLAGS Advisory;// Offset=0x4 Size=0x4
};

struct _NT_IORING_INFO// Size=0x30 (Id=1829)
{
    enum IORING_VERSION IoRingVersion;// Offset=0x0 Size=0x4
    struct _NT_IORING_CREATE_FLAGS Flags;// Offset=0x4 Size=0x8
    unsigned int SubmissionQueueSize;// Offset=0xc Size=0x4
    unsigned int SubmissionQueueRingMask;// Offset=0x10 Size=0x4
    unsigned int CompletionQueueSize;// Offset=0x14 Size=0x4
    unsigned int CompletionQueueRingMask;// Offset=0x18 Size=0x4
    struct _NT_IORING_SUBMISSION_QUEUE * SubmissionQueue;// Offset=0x20 Size=0x8
    struct _NT_IORING_COMPLETION_QUEUE * CompletionQueue;// Offset=0x28 Size=0x8
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=174)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=20)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _IORING_OBJECT// Size=0xd0 (Id=1043)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _NT_IORING_INFO UserInfo;// Offset=0x8 Size=0x30
    void * Section;// Offset=0x38 Size=0x8
    struct _NT_IORING_SUBMISSION_QUEUE * SubmissionQueue;// Offset=0x40 Size=0x8
    struct _MDL * CompletionQueueMdl;// Offset=0x48 Size=0x8
    struct _NT_IORING_COMPLETION_QUEUE * CompletionQueue;// Offset=0x50 Size=0x8
    unsigned long long ViewSize;// Offset=0x58 Size=0x8
    long InSubmit;// Offset=0x60 Size=0x4
    unsigned long long CompletionLock;// Offset=0x68 Size=0x8
    unsigned long long SubmitCount;// Offset=0x70 Size=0x8
    unsigned long long CompletionCount;// Offset=0x78 Size=0x8
    unsigned long long CompletionWaitUntil;// Offset=0x80 Size=0x8
    struct _KEVENT CompletionEvent;// Offset=0x88 Size=0x18
    unsigned char SignalCompletionEvent;// Offset=0xa0 Size=0x1
    struct _KEVENT * CompletionUserEvent;// Offset=0xa8 Size=0x8
    unsigned int RegBuffersCount;// Offset=0xb0 Size=0x4
    struct _IOP_MC_BUFFER_ENTRY ** RegBuffers;// Offset=0xb8 Size=0x8
    unsigned int RegFilesCount;// Offset=0xc0 Size=0x4
    void ** RegFiles;// Offset=0xc8 Size=0x8
};
