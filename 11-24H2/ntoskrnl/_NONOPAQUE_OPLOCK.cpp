struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _OPLOCK_TELEMETRY_FLAGS
{
    OPLOCK_TELEMETRY_FLAG_NONE=0,
    OPLOCK_TELEMETRY_FLAG_INTEGRITY_UNKNOWN=1,
    OPLOCK_TELEMETRY_FLAG_REMOTE_ORIGIN=2,
    OPLOCK_TELEMETRY_FLAG_HAS_RESTORE_PRIVILEGE=4,
    OPLOCK_TELEMETRY_FLAG_DATA_COLLECTED=-2147483648
};

struct _OPLOCK_TELEMETRY// Size=0x10 (Id=1614)
{
    long long OplockBreakQpc;// Offset=0x0 Size=0x8
    enum _OPLOCK_TELEMETRY_FLAGS TelemetryFlags;// Offset=0x8 Size=0x4
};

struct _NONOPAQUE_OPLOCK// Size=0xb8 (Id=2205)
{
    struct _IRP * IrpExclusiveOplock;// Offset=0x0 Size=0x8
    struct _FILE_OBJECT * FileObject;// Offset=0x8 Size=0x8
    struct _EPROCESS * ExclusiveOplockOwner;// Offset=0x10 Size=0x8
    struct _ETHREAD * ExclusiveOplockOwnerThread;// Offset=0x18 Size=0x8
    unsigned char WaiterPriority;// Offset=0x20 Size=0x1
    struct _LIST_ENTRY IrpOplocksR;// Offset=0x28 Size=0x10
    struct _LIST_ENTRY IrpOplocksRH;// Offset=0x38 Size=0x10
    struct _LIST_ENTRY RHBreakQueue;// Offset=0x48 Size=0x10
    struct _LIST_ENTRY WaitingIrps;// Offset=0x58 Size=0x10
    struct _LIST_ENTRY DelayAckFileObjectQueue;// Offset=0x68 Size=0x10
    struct _LIST_ENTRY AtomicQueue;// Offset=0x78 Size=0x10
    struct _GUID * DeleterParentKey;// Offset=0x88 Size=0x8
    unsigned long OplockState;// Offset=0x90 Size=0x4
    struct _FAST_MUTEX * FastMutex;// Offset=0x98 Size=0x8
    struct _OPLOCK_TELEMETRY TelemetryData;// Offset=0xa0 Size=0x10
    struct _OPLOCK_ACK_TIMEOUT * AckTimeout;// Offset=0xb0 Size=0x8
};
