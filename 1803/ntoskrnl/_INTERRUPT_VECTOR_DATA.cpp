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

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _GROUP_AFFINITY// Size=0x10 (Id=324)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _unnamed_1485// Size=0xc (Id=1485)
{
    unsigned long MessageAddressHigh;// Offset=0x0 Size=0x4
    unsigned long MessageAddressLow;// Offset=0x4 Size=0x4
    unsigned short MessageData;// Offset=0x8 Size=0x2
    unsigned short Reserved;// Offset=0xa Size=0x2
};

union _unnamed_1486// Size=0xc (Id=1486)
{
    struct _unnamed_1485 Msi;// Offset=0x0 Size=0xc
};

struct _INTERRUPT_REMAPPING_INFO// Size=0x10 (Id=1487)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IrtIndex:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long FlagHalInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long FlagTranslated:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    union _unnamed_1486 u;// Offset=0x4 Size=0xc
};

struct _unnamed_966// Size=0x8 (Id=966)
{
    unsigned long Gsiv;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WakeInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReservedFlags:31;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=638)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_967// Size=0x10 (Id=967)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long DataPayload;// Offset=0x8 Size=0x4
};

struct _unnamed_972// Size=0x4 (Id=972)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Mask:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Polarity:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MessageType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
        unsigned long RequestEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DestinationMode:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MessageType3:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Destination:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Vector:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long ExtendedAddress:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _unnamed_973// Size=0x4 (Id=973)
{
    struct _unnamed_972 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _unnamed_974// Size=0x4 (Id=974)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedDestination:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long PassPW:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WaitingForEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_975// Size=0x4 (Id=975)
{
    struct _unnamed_974 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_HT_INTR_INFO// Size=0x8 (Id=976)
{
    union _unnamed_973 LowPart;// Offset=0x0 Size=0x4
    union _unnamed_975 HighPart;// Offset=0x4 Size=0x4
};

struct _unnamed_968// Size=0x8 (Id=968)
{
    struct _INTERRUPT_HT_INTR_INFO IntrInfo;// Offset=0x0 Size=0x8
};

struct _unnamed_970// Size=0x4 (Id=970)
{
    enum HAL_APIC_DESTINATION_MODE DestinationMode;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_VECTOR_DATA// Size=0x58 (Id=971)
{
    enum INTERRUPT_CONNECTION_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned char Irql;// Offset=0x8 Size=0x1
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0xc Size=0x4
    enum _KINTERRUPT_MODE Mode;// Offset=0x10 Size=0x4
    struct _GROUP_AFFINITY TargetProcessors;// Offset=0x18 Size=0x10
    struct _INTERRUPT_REMAPPING_INFO IntRemapInfo;// Offset=0x28 Size=0x10
    struct _unnamed_966 ControllerInput;// Offset=0x38 Size=0x8
    unsigned long long HvDeviceId;// Offset=0x40 Size=0x8
    union // Size=0x58 (Id=0)
    {
        struct _unnamed_967 XapicMessage;// Offset=0x48 Size=0x10
        struct _unnamed_968 Hypertransport;// Offset=0x48 Size=0x8
        struct _unnamed_967 GenericMessage;// Offset=0x48 Size=0x10
        struct _unnamed_970 MessageRequest;// Offset=0x48 Size=0x4
    };
};
