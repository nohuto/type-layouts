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

struct _GROUP_AFFINITY// Size=0x10 (Id=256)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _anonymous_1801// Size=0xc (Id=1801)
{
    unsigned long MessageAddressHigh;// Offset=0x0 Size=0x4
    unsigned long MessageAddressLow;// Offset=0x4 Size=0x4
    unsigned short MessageData;// Offset=0x8 Size=0x2
    unsigned short Reserved;// Offset=0xa Size=0x2
};

union _anonymous_1802// Size=0xc (Id=1802)
{
    struct _anonymous_1801 Msi;// Offset=0x0 Size=0xc
};

struct _INTERRUPT_REMAPPING_INFO// Size=0x10 (Id=1803)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IrtIndex:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long FlagHalInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long FlagTranslated:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    union _anonymous_1802 u;// Offset=0x4 Size=0xc
};

struct _anonymous_1307// Size=0x8 (Id=1307)
{
    unsigned long Gsiv;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WakeInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReservedFlags:31;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _anonymous_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_1308// Size=0x10 (Id=1308)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long DataPayload;// Offset=0x8 Size=0x4
};

struct _anonymous_1313// Size=0x4 (Id=1313)
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

union _anonymous_1314// Size=0x4 (Id=1314)
{
    struct _anonymous_1313 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _anonymous_1315// Size=0x4 (Id=1315)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedDestination:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long PassPW:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WaitingForEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _anonymous_1316// Size=0x4 (Id=1316)
{
    struct _anonymous_1315 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_HT_INTR_INFO// Size=0x8 (Id=1317)
{
    union _anonymous_1314 LowPart;// Offset=0x0 Size=0x4
    union _anonymous_1316 HighPart;// Offset=0x4 Size=0x4
};

struct _anonymous_1309// Size=0x8 (Id=1309)
{
    struct _INTERRUPT_HT_INTR_INFO IntrInfo;// Offset=0x0 Size=0x8
};

struct _anonymous_1311// Size=0x4 (Id=1311)
{
    enum HAL_APIC_DESTINATION_MODE DestinationMode;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_VECTOR_DATA// Size=0x58 (Id=1312)
{
    enum INTERRUPT_CONNECTION_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned char Irql;// Offset=0x8 Size=0x1
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0xc Size=0x4
    enum _KINTERRUPT_MODE Mode;// Offset=0x10 Size=0x4
    struct _GROUP_AFFINITY TargetProcessors;// Offset=0x18 Size=0x10
    struct _INTERRUPT_REMAPPING_INFO IntRemapInfo;// Offset=0x28 Size=0x10
    struct _anonymous_1307 ControllerInput;// Offset=0x38 Size=0x8
    unsigned long long HvDeviceId;// Offset=0x40 Size=0x8
    union // Size=0x58 (Id=0)
    {
        struct _anonymous_1308 XapicMessage;// Offset=0x48 Size=0x10
        struct _anonymous_1309 Hypertransport;// Offset=0x48 Size=0x8
        struct _anonymous_1308 GenericMessage;// Offset=0x48 Size=0x10
        struct _anonymous_1311 MessageRequest;// Offset=0x48 Size=0x4
    };
};

struct _INTERRUPT_CONNECTION_DATA// Size=0x60 (Id=1800)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _INTERRUPT_VECTOR_DATA Vectors[1];// Offset=0x8 Size=0x58
};
