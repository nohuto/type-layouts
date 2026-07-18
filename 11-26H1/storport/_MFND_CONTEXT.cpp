union _unnamed_661// Size=0x4 (Id=661)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PrivilegeTransitionInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PrivilegeStateError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AdminPrivilegeRefCountError:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long PrivilegeTransitionConflict:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long InAdminPrivilegeWithoutRefCount:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long InUserPrivilegeWithNonZeroRefCount:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long Reserved:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _UNICODE_STRING// Size=0x10 (Id=619)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

enum _MFND_OPERATION_PRIVILEGE
{
    MFND_PRIVILEGE_USER=0,
    MFND_PRIVILEGE_SUPER_ADMIN=1
};

enum _MFND_OPERATION_MODE
{
    MFND_MODE_SINGLE_PHYSICAL_FUNCTION=0,
    MFND_MODE_MULTIPLE_PHYSICAL_FUNCTION=1
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DISPATCHER_HEADER// Size=0x18 (Id=924)
{
    union // Size=0x4 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        long LockNV;// Offset=0x0 Size=0x4
        unsigned char Type;// Offset=0x0 Size=0x1
        unsigned char Signalling;// Offset=0x1 Size=0x1
        unsigned char Size;// Offset=0x2 Size=0x1
        unsigned char Reserved1;// Offset=0x3 Size=0x1
        unsigned char TimerType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char TimerControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Absolute:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Wake:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char EncodedTolerableDelay:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char Hand;// Offset=0x2 Size=0x1
        unsigned char TimerMiscFlags;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char Index:6;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x6
            unsigned char Inserted:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Expired:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char Timer2Type;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char Timer2Flags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Timer2Inserted:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Timer2Expiring:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char Timer2CancelPending:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char Timer2SetPending:1;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Timer2Running:1;// Offset=0x1 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char Timer2Disabled:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char Timer2ReservedFlags:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
            };
        };
        unsigned char Timer2ComponentId;// Offset=0x2 Size=0x1
        unsigned char Timer2RelativeId;// Offset=0x3 Size=0x1
        unsigned char QueueType;// Offset=0x0 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char QueueControlFlags;// Offset=0x1 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char Abandoned:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char DisableIncrement:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char QueueReservedControlFlags:6;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x6
            };
        };
        unsigned char QueueSize;// Offset=0x2 Size=0x1
        unsigned char QueueReserved;// Offset=0x3 Size=0x1
        unsigned char ThreadType;// Offset=0x0 Size=0x1
        unsigned char ThreadReserved;// Offset=0x1 Size=0x1
        union // Size=0x1 (Id=0)
        {
            unsigned char ThreadControlFlags;// Offset=0x2 Size=0x1
            struct // Size=0x1 (Id=0)
            {
                unsigned char CycleProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char CounterProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x1 BitSize=0x1
                unsigned char GroupScheduling:1;// Offset=0x2 Size=0x1 BitOffset=0x2 BitSize=0x1
                unsigned char AffinitySet:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
                unsigned char Tagged:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
                unsigned char EnergyProfiling:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
                unsigned char SchedulerAssist:1;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x1
                unsigned char ThreadReservedControlFlags:1;// Offset=0x2 Size=0x1 BitOffset=0x7 BitSize=0x1
            };
        };
        unsigned char DebugActive;// Offset=0x3 Size=0x1
        struct // Size=0x1 (Id=0)
        {
            unsigned char ActiveDR7:1;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x1
            unsigned char Instrumented:1;// Offset=0x3 Size=0x1 BitOffset=0x1 BitSize=0x1
            unsigned char Minimal:1;// Offset=0x3 Size=0x1 BitOffset=0x2 BitSize=0x1
            unsigned char Reserved4:2;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x2
            unsigned char AltSyscall:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char Emulation:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char Reserved5:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned char MutantType;// Offset=0x0 Size=0x1
        unsigned char MutantSize;// Offset=0x1 Size=0x1
        unsigned char DpcActive;// Offset=0x2 Size=0x1
        unsigned char MutantReserved;// Offset=0x3 Size=0x1
    };
    long SignalState;// Offset=0x4 Size=0x4
    struct _LIST_ENTRY WaitListHead;// Offset=0x8 Size=0x10
};

struct _KEVENT// Size=0x18 (Id=21)
{
    struct _DISPATCHER_HEADER Header;// Offset=0x0 Size=0x18
};

struct _FAST_MUTEX// Size=0x38 (Id=19)
{
    long Count;// Offset=0x0 Size=0x4
    void * Owner;// Offset=0x8 Size=0x8
    unsigned long Contention;// Offset=0x10 Size=0x4
    struct _KEVENT Event;// Offset=0x18 Size=0x18
    unsigned long OldIrql;// Offset=0x30 Size=0x4
};

struct _MFND_CONTEXT// Size=0xb8 (Id=664)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Reserved0;// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    union _unnamed_661 StateFlags;// Offset=0x8 Size=0x4
    unsigned long Reserved1;// Offset=0xc Size=0x4
    struct _UNICODE_STRING MFNDInterfaceName;// Offset=0x10 Size=0x10
    enum _MFND_OPERATION_PRIVILEGE MFNDOperationPrivilege;// Offset=0x20 Size=0x4
    enum _MFND_OPERATION_MODE MFNDOperationMode;// Offset=0x24 Size=0x4
    struct NVME_FEATURE_MFND_CHILD_CONTROLLER_PROPERTY * MFNDCCProperty;// Offset=0x28 Size=0x8
    unsigned long * MFNDCCQoSStatLogQueryBitmap;// Offset=0x30 Size=0x8
    unsigned long * NVMeErrorStatusLogQueryBitmap;// Offset=0x38 Size=0x8
    unsigned long * NVMeSmartHealthLogQueryBitmap;// Offset=0x40 Size=0x8
    unsigned long * NVMeDevicePanicLogQueryBitmap;// Offset=0x48 Size=0x8
    struct _KEVENT MFNDMigrationQoSEvent;// Offset=0x50 Size=0x18
    long OutstandingMQoSRequestCount;// Offset=0x68 Size=0x4
    unsigned long Reserved2;// Offset=0x6c Size=0x4
    struct _MFND_MIGRATION_QOS_CONTEXT * MFNDMigrationQoS;// Offset=0x70 Size=0x8
    long long AdminPrivilegeRefCount;// Offset=0x78 Size=0x8
    struct _FAST_MUTEX PrivilegeTransitionMutex;// Offset=0x80 Size=0x38
};
