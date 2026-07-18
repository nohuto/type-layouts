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

struct _LIST_ENTRY// Size=0x10 (Id=20)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _COMMAND_DATA// Size=0x98 (Id=414)
{
    void * WdfCommand;// Offset=0x0 Size=0x8
    void * ControllerHandle;// Offset=0x8 Size=0x8
    struct RECORDER_LOG__ * RecorderLog;// Offset=0x10 Size=0x8
    struct WDFTIMER__ * WdfTimer;// Offset=0x18 Size=0x8
    enum _CommandStates State;// Offset=0x20 Size=0x4
    enum _CommandResetStates ResetState;// Offset=0x24 Size=0x4
    union _CRCR * CommandRingControl;// Offset=0x28 Size=0x8
    union _DOORBELL_REGISTER * DoorbellRegister;// Offset=0x30 Size=0x8
    unsigned long long LinkTrbPointer;// Offset=0x38 Size=0x8
    unsigned long MaxTrbIndex;// Offset=0x40 Size=0x4
    unsigned long EnqueueIndex;// Offset=0x44 Size=0x4
    unsigned long DequeueIndex;// Offset=0x48 Size=0x4
    unsigned long CycleState;// Offset=0x4c Size=0x4
    struct _TRB * TrbArray;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY PendingList;// Offset=0x58 Size=0x10
    struct _LIST_ENTRY WaitingList;// Offset=0x68 Size=0x10
    struct _BUFFER_DATA * CommandRingBufferData;// Offset=0x78 Size=0x8
    unsigned long long CommandRingLock;// Offset=0x80 Size=0x8
    unsigned char OutOfOrderCompletionObserved;// Offset=0x88 Size=0x1
    unsigned char AbortInProgress;// Offset=0x89 Size=0x1
    unsigned long AbortTimeout;// Offset=0x8c Size=0x4
    unsigned char DrainCommandsFromTimerRoutine;// Offset=0x90 Size=0x1
};
