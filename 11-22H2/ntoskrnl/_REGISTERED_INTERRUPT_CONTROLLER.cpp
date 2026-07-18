struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _INTERRUPT_FUNCTION_TABLE// Size=0xd0 (Id=226)
{
    long  ( * InitializeLocalUnit)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long * );// Offset=0x0 Size=0x8
    long  ( * InitializeIoUnit)(void * );// Offset=0x8 Size=0x8
    void  ( * SetPriority)(void * ,unsigned long );// Offset=0x10 Size=0x8
    unsigned long  ( * GetLocalUnitError)(void * );// Offset=0x18 Size=0x8
    void  ( * ClearLocalUnitError)(void * );// Offset=0x20 Size=0x8
    long  ( * GetLogicalId)(void * ,struct _INTERRUPT_TARGET * );// Offset=0x28 Size=0x8
    long  ( * SetLogicalId)(void * ,struct _INTERRUPT_TARGET * );// Offset=0x30 Size=0x8
    enum _INTERRUPT_RESULT  ( * AcceptAndGetSource)(void * ,long * ,unsigned long * );// Offset=0x38 Size=0x8
    void  ( * EndOfInterrupt)(void * );// Offset=0x40 Size=0x8
    void  ( * FastEndOfInterrupt)();// Offset=0x48 Size=0x8
    long  ( * SetLineState)(void * ,struct _INTERRUPT_LINE * ,struct _INTERRUPT_LINE_STATE * );// Offset=0x50 Size=0x8
    long  ( * RequestInterrupt)(void * ,struct _INTERRUPT_LINE * ,struct _INTERRUPT_TARGET * ,unsigned long ,struct _INTERRUPT_LINE * );// Offset=0x58 Size=0x8
    long  ( * StartProcessor)(void * ,unsigned long ,void * ,unsigned long );// Offset=0x60 Size=0x8
    long  ( * GenerateMessage)(void * ,struct _INTERRUPT_LINE_STATE * ,unsigned long long * ,unsigned long long * );// Offset=0x68 Size=0x8
    long  ( * ConvertId)(void * ,unsigned long * ,struct _INTERRUPT_TARGET * ,unsigned char );// Offset=0x70 Size=0x8
    long  ( * SaveLocalInterrupts)(void * ,void * );// Offset=0x78 Size=0x8
    long  ( * ReplayLocalInterrupts)(void * ,void * );// Offset=0x80 Size=0x8
    long  ( * DeinitializeLocalUnit)(void * );// Offset=0x88 Size=0x8
    long  ( * DeinitializeIoUnit)(void * );// Offset=0x90 Size=0x8
    enum _INTERRUPT_RESULT  ( * QueryAndGetSource)(void * ,long * ,unsigned long * ,unsigned char * );// Offset=0x98 Size=0x8
    void  ( * DeactivateInterrupt)(void * ,unsigned long );// Offset=0xa0 Size=0x8
    void  ( * DirectedEndOfInterrupt)(void * ,unsigned long ,unsigned long );// Offset=0xa8 Size=0x8
    long  ( * QueryLocalUnitInfo)(void * ,unsigned long ,unsigned long * ,unsigned long * ,enum _KINTERRUPT_MODE * ,enum _KINTERRUPT_MODE * );// Offset=0xb0 Size=0x8
    long  ( * QueryPendingState)(void * ,struct _INTERRUPT_LINE * ,unsigned char * ,unsigned char * );// Offset=0xb8 Size=0x8
    void  ( * CaptureGlobalCrashdumpState)(void * );// Offset=0xc0 Size=0x8
    void  ( * CaptureProcessorCrashdumpState)(void * ,unsigned long );// Offset=0xc8 Size=0x8
};

enum _KNOWN_CONTROLLER_TYPE
{
    InterruptControllerInvalid=0,
    InterruptControllerPic=1,
    InterruptControllerApic=2,
    InterruptControllerGic=3,
    InterruptControllerGicV3=4,
    InterruptControllerGicV4=5,
    InterruptControllerBcm=6,
    InterruptControllerUnknown=4096
};

enum _INTERRUPT_PROBLEM
{
    InterruptProblemNone=0,
    InterruptProblemMadtParsingFailure=1,
    InterruptProblemNoControllersFound=2,
    InterruptProblemFailedDiscovery=3,
    InterruptProblemInitializeLocalUnitFailed=4,
    InterruptProblemInitializeIoUnitFailed=5,
    InterruptProblemSetLogicalIdFailed=6,
    InterruptProblemSetLineStateFailed=7,
    InterruptProblemGenerateMessageFailed=8,
    InterruptProblemConvertIdFailed=9,
    InterruptProblemCmciSetupFailed=10,
    InterruptProblemQueryMaxProcessorsCalledTooEarly=11,
    InterruptProblemProcessorReset=12,
    InterruptProblemStartProcessorFailed=13,
    InterruptProblemProcessorNotAlive=14,
    InterruptProblemLowerIrqlViolation=15,
    InterruptProblemInvalidIrql=16,
    InterruptProblemNoSuchController=17,
    InterruptProblemNoSuchLines=18,
    InterruptProblemBadConnectionData=19,
    InterruptProblemBadRoutingData=20,
    InterruptProblemInvalidProcessor=21,
    InterruptProblemFailedToAttainTarget=22,
    InterruptProblemUnsupportedWiringConfiguration=23,
    InterruptProblemSpareAlreadyStarted=24,
    InterruptProblemClusterNotFullyReplaced=25,
    InterruptProblemNewClusterAlreadyActive=26,
    InterruptProblemNewClusterTooLarge=27,
    InterruptProblemCannotHardwareQuiesce=28,
    InterruptProblemIpiDestinationUpdateFailed=29,
    InterruptProblemNoMemory=30,
    InterruptProblemNoIrtEntries=31,
    InterruptProblemConnectionDataBaitAndSwitch=32,
    InterruptProblemInvalidLogicalFlatId=33,
    InterruptProblemDeinitializeLocalUnitFailed=34,
    InterruptProblemDeinitializeIoUnitFailed=35,
    InterruptProblemMismatchedThermalLvtIsr=36,
    InterruptProblemHvRetargetFailed=37,
    InterruptProblemDeferredErrorSetupFailed=38,
    InterruptProblemBadInterruptPartition=39
};

struct _UNICODE_STRING// Size=0x10 (Id=568)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _REGISTERED_INTERRUPT_CONTROLLER// Size=0x178 (Id=152)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * InternalData;// Offset=0x10 Size=0x8
    unsigned long InternalDataSize;// Offset=0x18 Size=0x4
    struct _INTERRUPT_FUNCTION_TABLE FunctionTable;// Offset=0x20 Size=0xd0
    enum _KNOWN_CONTROLLER_TYPE KnownType;// Offset=0xf0 Size=0x4
    unsigned long Capabilities;// Offset=0xf4 Size=0x4
    unsigned long Flags;// Offset=0xf8 Size=0x4
    unsigned long MaxPriority;// Offset=0xfc Size=0x4
    unsigned long UnitId;// Offset=0x100 Size=0x4
    struct _LIST_ENTRY LinesHead;// Offset=0x108 Size=0x10
    struct _LIST_ENTRY OutputLinesHead;// Offset=0x118 Size=0x10
    long MinLine;// Offset=0x128 Size=0x4
    long MaxLine;// Offset=0x12c Size=0x4
    unsigned long MaxClusterSize;// Offset=0x130 Size=0x4
    unsigned long MaxClusters;// Offset=0x134 Size=0x4
    unsigned long InterruptReplayDataSize;// Offset=0x138 Size=0x4
    enum _INTERRUPT_PROBLEM Problem;// Offset=0x13c Size=0x4
    long ProblemStatus;// Offset=0x140 Size=0x4
    char * ProblemSourceFile;// Offset=0x148 Size=0x8
    unsigned long ProblemSourceLine;// Offset=0x150 Size=0x4
    unsigned long CustomProblem;// Offset=0x154 Size=0x4
    long CustomProblemStatus;// Offset=0x158 Size=0x4
    struct _UNICODE_STRING ResourceId;// Offset=0x160 Size=0x10
    struct POHANDLE__ * PowerHandle;// Offset=0x170 Size=0x8
};
