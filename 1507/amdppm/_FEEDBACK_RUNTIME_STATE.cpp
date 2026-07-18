struct _DIFFERENTIAL_FEEDBACK_STATE// Size=0x40 (Id=508)
{
    unsigned long long LastActualCount;// Offset=0x0 Size=0x8
    unsigned long long LastReferenceCount;// Offset=0x8 Size=0x8
    unsigned long long CumulativeActualCount;// Offset=0x10 Size=0x8
    unsigned long long CumulativeReferenceCount;// Offset=0x18 Size=0x8
    unsigned long long ActualMask;// Offset=0x20 Size=0x8
    unsigned long long ReferenceMask;// Offset=0x28 Size=0x8
    void  ( * FeedbackRoutine)(void * ,unsigned char ,unsigned long long * ,unsigned long long * );// Offset=0x30 Size=0x8
    void * Context;// Offset=0x38 Size=0x8
};

struct _FEEDBACK_RUNTIME_STATE// Size=0x48 (Id=501)
{
    struct _DIFFERENTIAL_FEEDBACK_STATE HardwareFeedback;// Offset=0x0 Size=0x40
    unsigned long NominalFrequency;// Offset=0x40 Size=0x4
};
