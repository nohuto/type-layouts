struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
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

struct _ISRDPCSTATS_SEQUENCE// Size=0x28 (Id=2234)
{
    unsigned long SequenceNumber;// Offset=0x0 Size=0x4
    unsigned long long IsrTime;// Offset=0x8 Size=0x8
    unsigned long long IsrCount;// Offset=0x10 Size=0x8
    unsigned long long DpcTime;// Offset=0x18 Size=0x8
    unsigned long long DpcCount;// Offset=0x20 Size=0x8
};

struct _ISRDPCSTATS// Size=0x60 (Id=1931)
{
    unsigned long long IsrTime;// Offset=0x0 Size=0x8
    unsigned long long IsrTimeStart;// Offset=0x8 Size=0x8
    unsigned long long IsrCount;// Offset=0x10 Size=0x8
    unsigned long long DpcTime;// Offset=0x18 Size=0x8
    unsigned long long DpcTimeStart;// Offset=0x20 Size=0x8
    unsigned long long DpcCount;// Offset=0x28 Size=0x8
    unsigned char IsrActive;// Offset=0x30 Size=0x1
    unsigned char Reserved[7];// Offset=0x31 Size=0x7
    struct _ISRDPCSTATS_SEQUENCE DpcWatchdog;// Offset=0x38 Size=0x28
};

struct _KINTERRUPT// Size=0x120 (Id=1468)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY InterruptListEntry;// Offset=0x8 Size=0x10
    unsigned char  ( * ServiceRoutine)(struct _KINTERRUPT * ,void * );// Offset=0x18 Size=0x8
    unsigned char  ( * MessageServiceRoutine)(struct _KINTERRUPT * ,void * ,unsigned long );// Offset=0x20 Size=0x8
    unsigned long MessageIndex;// Offset=0x28 Size=0x4
    void * ServiceContext;// Offset=0x30 Size=0x8
    unsigned long long SpinLock;// Offset=0x38 Size=0x8
    unsigned long TickCount;// Offset=0x40 Size=0x4
    unsigned long long * ActualLock;// Offset=0x48 Size=0x8
    void  ( * DispatchAddress)();// Offset=0x50 Size=0x8
    unsigned long Vector;// Offset=0x58 Size=0x4
    unsigned char Irql;// Offset=0x5c Size=0x1
    unsigned char SynchronizeIrql;// Offset=0x5d Size=0x1
    unsigned char FloatingSave;// Offset=0x5e Size=0x1
    unsigned char Connected;// Offset=0x5f Size=0x1
    unsigned long Number;// Offset=0x60 Size=0x4
    unsigned char ShareVector;// Offset=0x64 Size=0x1
    unsigned char EmulateActiveBoth;// Offset=0x65 Size=0x1
    unsigned short ActiveCount;// Offset=0x66 Size=0x2
    long InternalState;// Offset=0x68 Size=0x4
    enum _KINTERRUPT_MODE Mode;// Offset=0x6c Size=0x4
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0x70 Size=0x4
    unsigned long ServiceCount;// Offset=0x74 Size=0x4
    unsigned long DispatchCount;// Offset=0x78 Size=0x4
    struct _KEVENT * PassiveEvent;// Offset=0x80 Size=0x8
    struct _KTRAP_FRAME * TrapFrame;// Offset=0x88 Size=0x8
    void * DisconnectData;// Offset=0x90 Size=0x8
    struct _KTHREAD * ServiceThread;// Offset=0x98 Size=0x8
    struct _INTERRUPT_CONNECTION_DATA * ConnectionData;// Offset=0xa0 Size=0x8
    void * IntTrackEntry;// Offset=0xa8 Size=0x8
    struct _ISRDPCSTATS IsrDpcStats;// Offset=0xb0 Size=0x60
    void * RedirectObject;// Offset=0x110 Size=0x8
    unsigned char Padding[8];// Offset=0x118 Size=0x8
};
