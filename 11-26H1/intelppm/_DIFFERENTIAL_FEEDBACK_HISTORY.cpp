struct _DIFFERENTIAL_FEEDBACK_HISTORY// Size=0x38 (Id=675)
{
    unsigned long long HwActualCount;// Offset=0x0 Size=0x8
    unsigned long long HwReferenceCount;// Offset=0x8 Size=0x8
    unsigned long long CurrentCumulativeActualCount;// Offset=0x10 Size=0x8
    unsigned long long CurrentCumulativeReferenceCount;// Offset=0x18 Size=0x8
    unsigned long long NewCumulativeActualCount;// Offset=0x20 Size=0x8
    unsigned long long NewCumulativeReferenceCount;// Offset=0x28 Size=0x8
    unsigned char Reset;// Offset=0x30 Size=0x1
};
