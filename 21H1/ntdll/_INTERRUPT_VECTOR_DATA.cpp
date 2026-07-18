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

struct _GROUP_AFFINITY// Size=0xc (Id=299)
{
    unsigned long Mask;// Offset=0x0 Size=0x4
    unsigned short Group;// Offset=0x4 Size=0x2
    unsigned short Reserved[3];// Offset=0x6 Size=0x6
};

struct _anonymous_739// Size=0xc (Id=739)
{
    unsigned long MessageAddressHigh;// Offset=0x0 Size=0x4
    unsigned long MessageAddressLow;// Offset=0x4 Size=0x4
    unsigned short MessageData;// Offset=0x8 Size=0x2
    unsigned short Reserved;// Offset=0xa Size=0x2
};

union _anonymous_740// Size=0xc (Id=740)
{
    struct _anonymous_739 Msi;// Offset=0x0 Size=0xc
};

struct _INTERRUPT_REMAPPING_INFO// Size=0x10 (Id=741)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IrtIndex:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long FlagHalInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long FlagTranslated:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    union _anonymous_740 u;// Offset=0x4 Size=0xc
};

struct _anonymous_673// Size=0x8 (Id=673)
{
    unsigned long Gsiv;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WakeInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReservedFlags:31;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_674// Size=0x10 (Id=674)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long DataPayload;// Offset=0x8 Size=0x4
};

struct _anonymous_695// Size=0x4 (Id=695)
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

union _anonymous_696// Size=0x4 (Id=696)
{
    struct _anonymous_695 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _anonymous_697// Size=0x4 (Id=697)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedDestination:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long PassPW:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WaitingForEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _anonymous_698// Size=0x4 (Id=698)
{
    struct _anonymous_697 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_HT_INTR_INFO// Size=0x8 (Id=699)
{
    union _anonymous_696 LowPart;// Offset=0x0 Size=0x4
    union _anonymous_698 HighPart;// Offset=0x4 Size=0x4
};

struct _anonymous_675// Size=0x8 (Id=675)
{
    struct _INTERRUPT_HT_INTR_INFO IntrInfo;// Offset=0x0 Size=0x8
};

struct _anonymous_677// Size=0x4 (Id=677)
{
    enum HAL_APIC_DESTINATION_MODE DestinationMode;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_VECTOR_DATA// Size=0x50 (Id=678)
{
    enum INTERRUPT_CONNECTION_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned char Irql;// Offset=0x8 Size=0x1
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0xc Size=0x4
    enum _KINTERRUPT_MODE Mode;// Offset=0x10 Size=0x4
    struct _GROUP_AFFINITY TargetProcessors;// Offset=0x14 Size=0xc
    struct _INTERRUPT_REMAPPING_INFO IntRemapInfo;// Offset=0x20 Size=0x10
    struct _anonymous_673 ControllerInput;// Offset=0x30 Size=0x8
    unsigned long long HvDeviceId;// Offset=0x38 Size=0x8
    union // Size=0x50 (Id=0)
    {
        struct _anonymous_674 XapicMessage;// Offset=0x40 Size=0x10
        struct _anonymous_675 Hypertransport;// Offset=0x40 Size=0x8
        struct _anonymous_674 GenericMessage;// Offset=0x40 Size=0x10
        struct _anonymous_677 MessageRequest;// Offset=0x40 Size=0x4
    };
};
