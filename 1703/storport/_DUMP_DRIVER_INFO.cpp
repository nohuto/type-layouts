struct _DUMP_ENTRY// Size=0x10 (Id=408)
{
    struct _DUMP_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _DUMP_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DUMP_DRIVER_INFO// Size=0x80 (Id=247)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _DUMP_ENTRY Entry;// Offset=0x8 Size=0x10
    wchar_t * Name;// Offset=0x18 Size=0x8
    wchar_t * BaseName;// Offset=0x20 Size=0x8
    wchar_t * ImportName;// Offset=0x28 Size=0x8
    wchar_t * ImportBaseName;// Offset=0x30 Size=0x8
    unsigned long ContextSize;// Offset=0x38 Size=0x4
    void * Context;// Offset=0x40 Size=0x8
    long  ( * InitializeRoutine)(struct _DUMP_DISK_INFO * ,struct _DUMP_INIT_INFO * );// Offset=0x48 Size=0x8
    void  ( * ReleaseRoutine)(struct _DUMP_DISK_INFO * );// Offset=0x50 Size=0x8
    void  ( * ControlRoutine)(struct _DUMP_DISK_INFO * ,unsigned long * ,unsigned long * );// Offset=0x58 Size=0x8
    void  ( * NotifyRoutine)(struct _DUMP_DISK_INFO * ,enum _DUMP_EVENT );// Offset=0x60 Size=0x8
    long  ( * ReadRoutine)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * );// Offset=0x68 Size=0x8
    long  ( * WriteRoutine)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * ,void * );// Offset=0x70 Size=0x8
    void * Reserved;// Offset=0x78 Size=0x8
};
