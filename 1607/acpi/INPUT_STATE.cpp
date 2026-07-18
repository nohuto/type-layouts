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

struct _GROUP_AFFINITY// Size=0x10 (Id=204)
{
    unsigned long long Mask;// Offset=0x0 Size=0x8
    unsigned short Group;// Offset=0x8 Size=0x2
    unsigned short Reserved[3];// Offset=0xa Size=0x6
};

struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_632// Size=0x8 (Id=632)
{
    unsigned long MessageAddressLow;// Offset=0x0 Size=0x4
    unsigned short MessageData;// Offset=0x4 Size=0x2
    unsigned short Reserved;// Offset=0x6 Size=0x2
};

union _unnamed_633// Size=0x8 (Id=633)
{
    union _ULARGE_INTEGER RemappedFormat;// Offset=0x0 Size=0x8
    struct _unnamed_632 Msi;// Offset=0x0 Size=0x8
};

struct _INTERRUPT_REMAPPING_INFO// Size=0x10 (Id=634)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long IrtIndex:30;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long FlagHalInternal:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long FlagTranslated:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    union _unnamed_633 u;// Offset=0x8 Size=0x8
};

struct _unnamed_548// Size=0x8 (Id=548)
{
    unsigned long Gsiv;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long WakeInterrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long ReservedFlags:31;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_28// Size=0x8 (Id=28)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=29)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_28 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_549// Size=0x10 (Id=549)
{
    union _LARGE_INTEGER Address;// Offset=0x0 Size=0x8
    unsigned long DataPayload;// Offset=0x8 Size=0x4
};

struct _unnamed_578// Size=0x4 (Id=578)
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

union _unnamed_579// Size=0x4 (Id=579)
{
    struct _unnamed_578 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _unnamed_580// Size=0x4 (Id=580)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedDestination:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long PassPW:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WaitingForEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_581// Size=0x4 (Id=581)
{
    struct _unnamed_580 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_HT_INTR_INFO// Size=0x8 (Id=582)
{
    union _unnamed_579 LowPart;// Offset=0x0 Size=0x4
    union _unnamed_581 HighPart;// Offset=0x4 Size=0x4
};

struct _unnamed_550// Size=0x8 (Id=550)
{
    struct _INTERRUPT_HT_INTR_INFO IntrInfo;// Offset=0x0 Size=0x8
};

struct _unnamed_551// Size=0x4 (Id=551)
{
    enum HAL_APIC_DESTINATION_MODE DestinationMode;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_VECTOR_DATA// Size=0x58 (Id=552)
{
    enum INTERRUPT_CONNECTION_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned char Irql;// Offset=0x8 Size=0x1
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0xc Size=0x4
    enum _KINTERRUPT_MODE Mode;// Offset=0x10 Size=0x4
    struct _GROUP_AFFINITY TargetProcessors;// Offset=0x18 Size=0x10
    struct _INTERRUPT_REMAPPING_INFO IntRemapInfo;// Offset=0x28 Size=0x10
    struct _unnamed_548 ControllerInput;// Offset=0x38 Size=0x8
    unsigned long long HvDeviceId;// Offset=0x40 Size=0x8
    union // Size=0x58 (Id=0)
    {
        struct _unnamed_549 XapicMessage;// Offset=0x48 Size=0x10
        struct _unnamed_550 Hypertransport;// Offset=0x48 Size=0x8
        struct _unnamed_549 GenericMessage;// Offset=0x48 Size=0x10
        struct _unnamed_551 MessageRequest;// Offset=0x48 Size=0x4
    };
};

struct INPUT_STATE// Size=0xc8 (Id=355)
{
    unsigned long CurrentRefCount;// Offset=0x0 Size=0x4
    unsigned long PossibleRefCount;// Offset=0x4 Size=0x4
    unsigned long CurrentBootRefCount;// Offset=0x8 Size=0x4
    unsigned long PossibleBootRefCount;// Offset=0xc Size=0x4
    struct _INTERRUPT_VECTOR_DATA CurrentInputState;// Offset=0x10 Size=0x58
    struct _INTERRUPT_VECTOR_DATA PossibleInputState;// Offset=0x68 Size=0x58
    unsigned char CurrentlyHalReserved;// Offset=0xc0 Size=0x1
    unsigned char PossiblyHalReserved;// Offset=0xc1 Size=0x1
};
