union _HAL_UNMASKED_INTERRUPT_FLAGS// Size=0x2 (Id=1999)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short SecondaryInterrupt:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Reserved:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
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

struct _HAL_UNMASKED_INTERRUPT_INFORMATION// Size=0x20 (Id=1894)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    union _HAL_UNMASKED_INTERRUPT_FLAGS Flags;// Offset=0x4 Size=0x2
    enum _KINTERRUPT_MODE Mode;// Offset=0x8 Size=0x4
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0xc Size=0x4
    unsigned long Gsiv;// Offset=0x10 Size=0x4
    unsigned short PinNumber;// Offset=0x14 Size=0x2
    void * DeviceHandle;// Offset=0x18 Size=0x8
};
