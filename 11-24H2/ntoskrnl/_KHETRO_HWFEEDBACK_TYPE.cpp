struct _KHETERO_HWFEEDBACK_CLASS// Size=0x4 (Id=750)
{
    unsigned char PerformanceClass;// Offset=0x0 Size=0x1
    unsigned char EfficiencyClass;// Offset=0x1 Size=0x1
    unsigned char PerformanceClassRawValue;// Offset=0x2 Size=0x1
    unsigned char EfficiencyClassRawValue;// Offset=0x3 Size=0x1
};

struct _KHETRO_HWFEEDBACK_TYPE// Size=0x8 (Id=749)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _KHETERO_HWFEEDBACK_CLASS HwFeedbackClass[1];// Offset=0x4 Size=0x4
};
