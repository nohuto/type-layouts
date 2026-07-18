struct _LIST_ENTRY// Size=0x10 (Id=3)
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

struct _OPLOCK_TELEMETRY// Size=0x10 (Id=1690)
{
    long long OplockBreakQpc;// Offset=0x0 Size=0x8
    enum _OPLOCK_TELEMETRY_FLAGS TelemetryFlags;// Offset=0x8 Size=0x4
};

struct _DELAY_ACK_FO// Size=0x30 (Id=1350)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    struct _FILE_OBJECT * OriginalFileObject;// Offset=0x10 Size=0x8
    struct _OPLOCK_TELEMETRY TelemetryData;// Offset=0x18 Size=0x10
    struct _OPLOCK_ACK_TIMEOUT * AckTimeout;// Offset=0x28 Size=0x8
};
