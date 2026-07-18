union _WHEA_RECOVERY_ACTION// Size=0x8 (Id=3043)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long NoneAttempted:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long TerminateProcess:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long ForwardedToVm:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long MarkPageBad:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long PoisonNotPresent:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x3b
    };
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
};

enum _WHEA_RECOVERY_TYPE
{
    WheaRecoveryTypeActionRequired=1,
    WheaRecoveryTypeActionOptional=2,
    WheaRecoveryTypeMax=3
};

enum _WHEA_RECOVERY_FAILURE_REASON
{
    WheaRecoveryFailureReasonKernelCouldNotMarkMemoryBad=1,
    WheaRecoveryFailureReasonKernelMarkMemoryBadTimedOut=2,
    WheaRecoveryFailureReasonNoRecoveryContext=3,
    WheaRecoveryFailureReasonNotContinuable=4,
    WheaRecoveryFailureReasonPcc=5,
    WheaRecoveryFailureReasonOverflow=6,
    WheaRecoveryFailureReasonNotSupported=7,
    WheaRecoveryFailureReasonMiscOrAddrNotValid=8,
    WheaRecoveryFailureReasonInvalidAddressMode=9,
    WheaRecoveryFailureReasonHighIrql=10,
    WheaRecoveryFailureReasonInsufficientAltContextWrappers=11,
    WheaRecoveryFailureReasonInterruptsDisabled=12,
    WheaRecoveryFailureReasonSwapBusy=13,
    WheaRecoveryFailureReasonStackOverflow=14,
    WheaRecoveryFailureReasonUnexpectedFailure=15,
    WheaRecoveryFailureReasonKernelWillPageFaultBCAtCurrentIrql=16,
    WheaRecoveryFailureReasonFarNotValid=17,
    WheaRecoveryFailureReasonMax=18
};

struct _WHEA_ERROR_RECOVERY_INFO_SECTION// Size=0x27 (Id=1770)
{
    unsigned char RecoveryKernel;// Offset=0x0 Size=0x1
    union _WHEA_RECOVERY_ACTION RecoveryAction;// Offset=0x1 Size=0x8
    enum _WHEA_RECOVERY_TYPE RecoveryType;// Offset=0x9 Size=0x4
    unsigned char Irql;// Offset=0xd Size=0x1
    unsigned char RecoverySucceeded;// Offset=0xe Size=0x1
    enum _WHEA_RECOVERY_FAILURE_REASON FailureReason;// Offset=0xf Size=0x4
    char ProcessName[20];// Offset=0x13 Size=0x14
};
