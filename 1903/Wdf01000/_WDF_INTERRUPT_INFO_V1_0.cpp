union _LARGE_INTEGER// Size=0x8 (Id=260)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=12818)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

enum _WDF_INTERRUPT_POLARITY
{
    WdfInterruptPolarityUnknown=0,
    WdfInterruptActiveHigh=1,
    WdfInterruptActiveLow=2
};

struct _WDF_INTERRUPT_INFO_V1_0// Size=0x38 (Id=5065)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    union _LARGE_INTEGER MessageAddress;// Offset=0x8 Size=0x8
    unsigned long long TargetProcessorSet;// Offset=0x10 Size=0x8
    unsigned long MessageData;// Offset=0x18 Size=0x4
    unsigned long MessageNumber;// Offset=0x1c Size=0x4
    unsigned long Vector;// Offset=0x20 Size=0x4
    unsigned char Irql;// Offset=0x24 Size=0x1
    enum _KINTERRUPT_MODE Mode;// Offset=0x28 Size=0x4
    enum _WDF_INTERRUPT_POLARITY Polarity;// Offset=0x2c Size=0x4
    unsigned char MessageSignaled;// Offset=0x30 Size=0x1
    unsigned char ShareDisposition;// Offset=0x31 Size=0x1
};
