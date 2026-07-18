struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _MESSAGE_INTERRUPT_INFORMATION// Size=0x20 (Id=135)
{
    unsigned long MessageId;// Offset=0x0 Size=0x4
    unsigned long MessageData;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER MessageAddress;// Offset=0x8 Size=0x8
    unsigned long InterruptVector;// Offset=0x10 Size=0x4
    unsigned long InterruptLevel;// Offset=0x14 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x18 Size=0x4
};
