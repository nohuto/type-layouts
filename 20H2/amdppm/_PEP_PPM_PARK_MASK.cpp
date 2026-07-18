struct _PEP_PPM_PARK_MASK// Size=0x18 (Id=709)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    unsigned long long EvaluationTime;// Offset=0x8 Size=0x8
    struct _PEP_PROCESSOR_PARK_STATE * Processors;// Offset=0x10 Size=0x8
};
