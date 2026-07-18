struct _unnamed_583// Size=0x4 (Id=583)
{
    unsigned char AverageFrequency;// Offset=0x0 Size=0x1
    unsigned char FrequencyLimit;// Offset=0x1 Size=0x1
    unsigned char Reserved[2];// Offset=0x2 Size=0x2
};

struct _unnamed_584// Size=0x4 (Id=584)
{
    unsigned char Reserved[4];// Offset=0x0 Size=0x4
};

union _PCC_OUTPUT_BUFFER// Size=0x4 (Id=585)
{
    struct _unnamed_583 GetAverageFrequency;// Offset=0x0 Size=0x4
    struct _unnamed_584 SetDesiredFrequency;// Offset=0x0 Size=0x4
};
