struct _LIST_ENTRY// Size=0x8 (Id=25)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x4
    struct _LIST_ENTRY * Blink;// Offset=0x4 Size=0x4
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

struct _ISRDPCSTATS_SEQUENCE// Size=0x28 (Id=704)
{
    unsigned long SequenceNumber;// Offset=0x0 Size=0x4
    unsigned long long IsrTime;// Offset=0x8 Size=0x8
    unsigned long long IsrCount;// Offset=0x10 Size=0x8
    unsigned long long DpcTime;// Offset=0x18 Size=0x8
    unsigned long long DpcCount;// Offset=0x20 Size=0x8
};

struct _ISRDPCSTATS// Size=0x60 (Id=619)
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

struct _KINTERRUPT// Size=0xd0 (Id=451)
{
    short Type;// Offset=0x0 Size=0x2
    short Size;// Offset=0x2 Size=0x2
    struct _LIST_ENTRY InterruptListEntry;// Offset=0x4 Size=0x8
    unsigned char  ( * ServiceRoutine)(struct _KINTERRUPT * ,void * );// Offset=0xc Size=0x4
    unsigned char  ( * MessageServiceRoutine)(struct _KINTERRUPT * ,void * ,unsigned long );// Offset=0x10 Size=0x4
    unsigned long MessageIndex;// Offset=0x14 Size=0x4
    void * ServiceContext;// Offset=0x18 Size=0x4
    unsigned long SpinLock;// Offset=0x1c Size=0x4
    unsigned long TickCount;// Offset=0x20 Size=0x4
    unsigned long * ActualLock;// Offset=0x24 Size=0x4
    void  ( * DispatchAddress)();// Offset=0x28 Size=0x4
    unsigned long Vector;// Offset=0x2c Size=0x4
    unsigned char Irql;// Offset=0x30 Size=0x1
    unsigned char SynchronizeIrql;// Offset=0x31 Size=0x1
    unsigned char FloatingSave;// Offset=0x32 Size=0x1
    unsigned char Connected;// Offset=0x33 Size=0x1
    unsigned long Number;// Offset=0x34 Size=0x4
    unsigned char ShareVector;// Offset=0x38 Size=0x1
    unsigned char EmulateActiveBoth;// Offset=0x39 Size=0x1
    unsigned short ActiveCount;// Offset=0x3a Size=0x2
    long InternalState;// Offset=0x3c Size=0x4
    enum _KINTERRUPT_MODE Mode;// Offset=0x40 Size=0x4
    enum _KINTERRUPT_POLARITY Polarity;// Offset=0x44 Size=0x4
    unsigned long ServiceCount;// Offset=0x48 Size=0x4
    unsigned long DispatchCount;// Offset=0x4c Size=0x4
    struct _KEVENT * PassiveEvent;// Offset=0x50 Size=0x4
    struct _KTRAP_FRAME * TrapFrame;// Offset=0x54 Size=0x4
    void * DisconnectData;// Offset=0x58 Size=0x4
    struct _KTHREAD * ServiceThread;// Offset=0x5c Size=0x4
    struct _INTERRUPT_CONNECTION_DATA * ConnectionData;// Offset=0x60 Size=0x4
    void * IntTrackEntry;// Offset=0x64 Size=0x4
    struct _ISRDPCSTATS IsrDpcStats;// Offset=0x68 Size=0x60
    void * RedirectObject;// Offset=0xc8 Size=0x4
    void * PhysicalDeviceObject;// Offset=0xcc Size=0x4
};
