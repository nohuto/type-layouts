struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_QUALITY_OF_SERVICE// Size=0xc (Id=715)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x4 Size=0x4
    unsigned char ContextTrackingMode;// Offset=0x8 Size=0x1
    unsigned char EffectiveOnly;// Offset=0x9 Size=0x1
};

struct _LUID// Size=0x8 (Id=34)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _TOKEN_SOURCE// Size=0x10 (Id=1005)
{
    char SourceName[8];// Offset=0x0 Size=0x8
    struct _LUID SourceIdentifier;// Offset=0x8 Size=0x8
};

struct _TOKEN_CONTROL// Size=0x28 (Id=1358)
{
    struct _LUID TokenId;// Offset=0x0 Size=0x8
    struct _LUID AuthenticationId;// Offset=0x8 Size=0x8
    struct _LUID ModifiedId;// Offset=0x10 Size=0x8
    struct _TOKEN_SOURCE TokenSource;// Offset=0x18 Size=0x10
};

struct _SECURITY_CLIENT_CONTEXT// Size=0x48 (Id=801)
{
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;// Offset=0x0 Size=0xc
    void * ClientToken;// Offset=0x10 Size=0x8
    unsigned char DirectlyAccessClientToken;// Offset=0x18 Size=0x1
    unsigned char DirectAccessEffectiveOnly;// Offset=0x19 Size=0x1
    unsigned char ServerIsRemote;// Offset=0x1a Size=0x1
    struct _TOKEN_CONTROL ClientTokenControl;// Offset=0x1c Size=0x28
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=86)
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

struct _ALPC_PORT_ATTRIBUTES// Size=0x48 (Id=680)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;// Offset=0x4 Size=0xc
    unsigned long long MaxMessageLength;// Offset=0x10 Size=0x8
    unsigned long long MemoryBandwidth;// Offset=0x18 Size=0x8
    unsigned long long MaxPoolUsage;// Offset=0x20 Size=0x8
    unsigned long long MaxSectionSize;// Offset=0x28 Size=0x8
    unsigned long long MaxViewSize;// Offset=0x30 Size=0x8
    unsigned long long MaxTotalSectionSize;// Offset=0x38 Size=0x8
    unsigned long DupObjectTypes;// Offset=0x40 Size=0x4
    unsigned long Reserved;// Offset=0x44 Size=0x4
};

struct _unnamed_468// Size=0x4 (Id=468)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Initialized:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Type:2;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x2
        unsigned long ConnectionPending:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long ConnectionRefused:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Disconnected:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Closed:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long NoFlushOnClose:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ReturnExtendedInfo:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Waitable:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long DynamicSecurity:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Wow64CompletionList:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long Lpc:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long LpcToLpc:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long HasCompletionList:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long HadCompletionList:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long EnableCompletionList:1;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x1
    };
};

union _unnamed_469// Size=0x4 (Id=469)
{
    struct _unnamed_468 s1;// Offset=0x0 Size=0x4
    unsigned long State;// Offset=0x0 Size=0x4
};

struct _ALPC_PORT// Size=0x1d8 (Id=470)
{
    struct _LIST_ENTRY PortListEntry;// Offset=0x0 Size=0x10
    struct _ALPC_COMMUNICATION_INFO * CommunicationInfo;// Offset=0x10 Size=0x8
    struct _EPROCESS * OwnerProcess;// Offset=0x18 Size=0x8
    void * CompletionPort;// Offset=0x20 Size=0x8
    void * CompletionKey;// Offset=0x28 Size=0x8
    struct _ALPC_COMPLETION_PACKET_LOOKASIDE * CompletionPacketLookaside;// Offset=0x30 Size=0x8
    void * PortContext;// Offset=0x38 Size=0x8
    struct _SECURITY_CLIENT_CONTEXT StaticSecurity;// Offset=0x40 Size=0x48
    struct _EX_PUSH_LOCK IncomingQueueLock;// Offset=0x88 Size=0x8
    struct _LIST_ENTRY MainQueue;// Offset=0x90 Size=0x10
    struct _LIST_ENTRY LargeMessageQueue;// Offset=0xa0 Size=0x10
    struct _EX_PUSH_LOCK PendingQueueLock;// Offset=0xb0 Size=0x8
    struct _LIST_ENTRY PendingQueue;// Offset=0xb8 Size=0x10
    struct _EX_PUSH_LOCK DirectQueueLock;// Offset=0xc8 Size=0x8
    struct _LIST_ENTRY DirectQueue;// Offset=0xd0 Size=0x10
    struct _EX_PUSH_LOCK WaitQueueLock;// Offset=0xe0 Size=0x8
    struct _LIST_ENTRY WaitQueue;// Offset=0xe8 Size=0x10
    union // Size=0x8 (Id=0)
    {
        struct _KSEMAPHORE * Semaphore;// Offset=0xf8 Size=0x8
        struct _KEVENT * DummyEvent;// Offset=0xf8 Size=0x8
    };
    struct _ALPC_PORT_ATTRIBUTES PortAttributes;// Offset=0x100 Size=0x48
    struct _EX_PUSH_LOCK ResourceListLock;// Offset=0x148 Size=0x8
    struct _LIST_ENTRY ResourceListHead;// Offset=0x150 Size=0x10
    struct _EX_PUSH_LOCK PortObjectLock;// Offset=0x160 Size=0x8
    struct _ALPC_COMPLETION_LIST * CompletionList;// Offset=0x168 Size=0x8
    struct _CALLBACK_OBJECT * CallbackObject;// Offset=0x170 Size=0x8
    void * CallbackContext;// Offset=0x178 Size=0x8
    struct _LIST_ENTRY CanceledQueue;// Offset=0x180 Size=0x10
    long SequenceNo;// Offset=0x190 Size=0x4
    long ReferenceNo;// Offset=0x194 Size=0x4
    struct _PALPC_PORT_REFERENCE_WAIT_BLOCK * ReferenceNoWait;// Offset=0x198 Size=0x8
    union _unnamed_469 u1;// Offset=0x1a0 Size=0x4
    struct _ALPC_PORT * TargetQueuePort;// Offset=0x1a8 Size=0x8
    struct _ALPC_PORT * TargetSequencePort;// Offset=0x1b0 Size=0x8
    struct _KALPC_MESSAGE * CachedMessage;// Offset=0x1b8 Size=0x8
    unsigned long MainQueueLength;// Offset=0x1c0 Size=0x4
    unsigned long LargeMessageQueueLength;// Offset=0x1c4 Size=0x4
    unsigned long PendingQueueLength;// Offset=0x1c8 Size=0x4
    unsigned long DirectQueueLength;// Offset=0x1cc Size=0x4
    unsigned long CanceledQueueLength;// Offset=0x1d0 Size=0x4
    unsigned long WaitQueueLength;// Offset=0x1d4 Size=0x4
};
