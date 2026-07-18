struct _unnamed_73// Size=0x8 (Id=73)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=74)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_73 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

enum _IRQ_DEVICE_POLICY
{
    IrqPolicyMachineDefault=0,
    IrqPolicyAllCloseProcessors=1,
    IrqPolicyOneCloseProcessor=2,
    IrqPolicyAllProcessorsInMachine=3,
    IrqPolicySpecifiedProcessors=4,
    IrqPolicySpreadMessagesAcrossAllProcessors=5
};

enum _IRQ_PRIORITY
{
    IrqPriorityUndefined=0,
    IrqPriorityLow=1,
    IrqPriorityNormal=2,
    IrqPriorityHigh=3
};

struct _IO_RESOURCE_DESCRIPTOR// Size=0x20 (Id=31)
{
    unsigned char Option;// Offset=0x0 Size=0x1
    unsigned char Type;// Offset=0x1 Size=0x1
    unsigned char ShareDisposition;// Offset=0x2 Size=0x1
    unsigned char Spare1;// Offset=0x3 Size=0x1
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short Spare2;// Offset=0x6 Size=0x2
    union _unnamed_30 u;// Offset=0x8 Size=0x18
};
