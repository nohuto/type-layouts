struct _PEP_PPM_PARK_SELECTION_V2// Size=0x20 (Id=599)
{
    unsigned long AdditionalUnparkedProcessors;// Offset=0x0 Size=0x4
    unsigned long Count;// Offset=0x4 Size=0x4
    struct _PEP_PROCESSOR_PARK_PREFERENCE * Processors;// Offset=0x8 Size=0x8
    unsigned long long EvaluationTime;// Offset=0x10 Size=0x8
    unsigned char EvaluationType;// Offset=0x18 Size=0x1
};
