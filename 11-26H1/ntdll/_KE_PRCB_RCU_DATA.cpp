struct _KE_PRCB_RCU_DATA// Size=0x20 (Id=654)
{
    unsigned long NestingLevel;// Offset=0x0 Size=0x4
    unsigned char DispatchPin;// Offset=0x4 Size=0x1
    unsigned char GracePeriodNeeded;// Offset=0x5 Size=0x1
    unsigned char ExpediteReporting;// Offset=0x6 Size=0x1
    char IdleState;// Offset=0x7 Size=0x1
    unsigned long long GraceSequenceQuiescent;// Offset=0x8 Size=0x8
    unsigned long long GraceSequenceReported;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY * AwaitingCompletion;// Offset=0x18 Size=0x8
};
