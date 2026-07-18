struct _DUMP_ENTRY// Size=0x10 (Id=428)
{
    struct _DUMP_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _DUMP_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _DUMP_DRIVER_INFO// Size=0x78 (Id=246)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _DUMP_ENTRY Entry;// Offset=0x8 Size=0x10
    wchar_t * Name;// Offset=0x18 Size=0x8
    wchar_t * BaseName;// Offset=0x20 Size=0x8
    wchar_t * ImportName;// Offset=0x28 Size=0x8
    wchar_t * ImportBaseName;// Offset=0x30 Size=0x8
    unsigned long Flags;// Offset=0x38 Size=0x4
    unsigned long ContextSize;// Offset=0x3c Size=0x4
    void * Context;// Offset=0x40 Size=0x8
    long  ( * ReadRoutine)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * );// Offset=0x48 Size=0x8
    long  ( * WriteRoutine)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * ,void * );// Offset=0x50 Size=0x8
    long  ( * FlushRoutine)(struct _DUMP_DISK_INFO * ,unsigned long long * ,unsigned long long * );// Offset=0x58 Size=0x8
    long  ( * ControlRoutine)(struct _DUMP_DISK_INFO * ,enum _DUMP_CONTROL_CODE ,void * );// Offset=0x60 Size=0x8
    struct _STORAGE_DUMP_INFO * DumpInfo;// Offset=0x68 Size=0x8
    void * Reserved;// Offset=0x70 Size=0x8
};
