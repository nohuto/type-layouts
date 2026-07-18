union _LARGE_INTEGER// Size=0x8 (Id=915)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12193)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PPM_FFH_THROTTLE_STATE_INFO// Size=0x20 (Id=790)
{
    unsigned char EnableLogging;// Offset=0x0 Size=0x1
    unsigned long MismatchCount;// Offset=0x4 Size=0x4
    unsigned char Initialized;// Offset=0x8 Size=0x1
    unsigned long long LastValue;// Offset=0x10 Size=0x8
    union _LARGE_INTEGER LastLogTickCount;// Offset=0x18 Size=0x8
};
