enum _CommandStates
{
    CommandState_Uninitialized=0,
    CommandState_Prepared=1,
    CommandState_Released=2
};

enum _CommandResetStates
{
    CommandResetState_Uninitialized=0,
    CommandResetState_NotInProgress=1,
    CommandResetState_Pending=2,
    CommandResetState_InProgress=3,
    CommandResetState_PostReset=4,
    CommandResetState_Failed=5
};

struct _LIST_ENTRY// Size=0x10 (Id=36)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _XILCORE_COMMAND_DATA// Size=0x38 (Id=1054)
{
    void * CommandRingHandle;// Offset=0x0 Size=0x8
    union _CRCR * CommandRingControl;// Offset=0x8 Size=0x8
    struct _XIL_BUFFER_DATA * CommandRingBufferData;// Offset=0x10 Size=0x8
    unsigned long long LinkTrbPointer;// Offset=0x18 Size=0x8
    unsigned long MaxTrbIndex;// Offset=0x20 Size=0x4
    unsigned long EnqueueIndex;// Offset=0x24 Size=0x4
    unsigned long DequeueIndex;// Offset=0x28 Size=0x4
    unsigned long CycleState;// Offset=0x2c Size=0x4
    struct _TRB * TrbArray;// Offset=0x30 Size=0x8
};

struct _XIL_DIRECT_COMMAND_DATA// Size=0x38 (Id=963)
{
    struct _XILCORE_COMMAND_DATA XilCoreCommandData;// Offset=0x0 Size=0x38
};

struct _XIL_PROXY_COMMAND_DATA// Size=0x20 (Id=730)
{
    void * RemoteCommandHandle;// Offset=0x0 Size=0x8
    unsigned long long CommandRingBufferLogicalAddress;// Offset=0x8 Size=0x8
    unsigned long long LinkTrbPointer;// Offset=0x10 Size=0x8
    unsigned long MaxTrbIndex;// Offset=0x18 Size=0x4
};

struct _XIL_COMMAND_DATA// Size=0x58 (Id=675)
{
    unsigned char IsProxyCommandRing;// Offset=0x0 Size=0x1
    void * CommandRingHandle;// Offset=0x8 Size=0x8
    union _DOORBELL_REGISTER * DoorbellRegister;// Offset=0x10 Size=0x8
    void * LocalRegisterHandle;// Offset=0x18 Size=0x8
    union // Size=0x38 (Id=0)
    {
        struct _XIL_DIRECT_COMMAND_DATA XilDirectCommandData;// Offset=0x20 Size=0x38
        struct _XIL_PROXY_COMMAND_DATA XilProxyCommandData;// Offset=0x20 Size=0x20
    };
};

struct _COMMAND_DATA// Size=0xe0 (Id=535)
{
    void * WdfCommand;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    struct RECORDER_LOG__ * RecorderLog;// Offset=0x10 Size=0x8
    struct WDFTIMER__ * CommandWatchdogTimer;// Offset=0x18 Size=0x8
    enum _CommandStates State;// Offset=0x20 Size=0x4
    enum _CommandResetStates ResetState;// Offset=0x24 Size=0x4
    unsigned long EnqueueIndex;// Offset=0x28 Size=0x4
    unsigned long DequeueIndex;// Offset=0x2c Size=0x4
    unsigned long MaxTrbIndex;// Offset=0x30 Size=0x4
    unsigned long long LinkTrbPointer;// Offset=0x38 Size=0x8
    unsigned long CycleState;// Offset=0x40 Size=0x4
    struct _TRB * TrbArray;// Offset=0x48 Size=0x8
    struct _LIST_ENTRY PendingList;// Offset=0x50 Size=0x10
    struct _LIST_ENTRY WaitingList;// Offset=0x60 Size=0x10
    void * CommandRingLock;// Offset=0x70 Size=0x8
    unsigned char OutOfOrderCompletionObserved;// Offset=0x78 Size=0x1
    unsigned char AbortInProgress;// Offset=0x79 Size=0x1
    unsigned long AbortTimeout;// Offset=0x7c Size=0x4
    unsigned char DrainCommandsFromTimerRoutine;// Offset=0x80 Size=0x1
    struct _XIL_COMMAND_DATA XilCommandData;// Offset=0x88 Size=0x58
};
