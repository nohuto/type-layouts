struct _anonymous_693// Size=0x4 (Id=693)
{
    unsigned char AverageFrequency;// Offset=0x0 Size=0x1
    unsigned char FrequencyLimit;// Offset=0x1 Size=0x1
    unsigned char Reserved[2];// Offset=0x2 Size=0x2
};

struct _anonymous_694// Size=0x4 (Id=694)
{
    unsigned char Reserved[4];// Offset=0x0 Size=0x4
};

union _PCC_OUTPUT_BUFFER// Size=0x4 (Id=695)
{
    struct _anonymous_693 GetAverageFrequency;// Offset=0x0 Size=0x4
    struct _anonymous_694 SetDesiredFrequency;// Offset=0x0 Size=0x4
};
