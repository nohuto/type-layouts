union _LARGE_INTEGER// Size=0x8 (Id=156)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5909)
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

enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown=0,
    InterruptActiveHigh=1,
    InterruptRisingEdge=1,
    InterruptActiveLow=2,
    InterruptFallingEdge=2,
    InterruptActiveBoth=3,
    InterruptActiveBothTriggerLow=3,
    InterruptActiveBothTriggerHigh=4
};

struct _IO_INTERRUPT_MESSAGE_INFO_ENTRY// Size=0x30 (Id=2099)
{
    union _LARGE_INTEGER MessageAddress;// Offset=0x0 Size=0x8
    unsigned long long TargetProcessorSet;// Offset=0x8 Size=0x8
    struct _KINTERRUPT * InterruptObject;// Offset=0x10 Size=0x8
    unsigned long MessageData;// Offset=0x18 Size=0x4
    unsigned long Vector;// Offset=0x1c Size=0x4
    unsigned char Irql;// Offset=0x20 Size=0x1
    enum _KINTERRUPT_MODE Mode;// Offset=0x24 Size=0x4
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0x28 Size=0x4
};
