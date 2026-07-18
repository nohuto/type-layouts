union _FRAME_SNAPSHOT// Size=0x8 (Id=878)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long HighPart:21;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x15
        unsigned long long TimeWhenLowPartWasZero_ms:43;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x2b
    };
    long long Asll;// Offset=0x0 Size=0x8
};

struct _FRAME_NUMBER_DATA// Size=0x10 (Id=640)
{
    union _FRAME_SNAPSHOT Snapshot;// Offset=0x0 Size=0x8
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long TimeIncrementPerTick;// Offset=0xc Size=0x4
};
