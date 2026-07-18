struct _DUMP_ENTRY// Size=0x10 (Id=1010)
{
    struct _DUMP_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _DUMP_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _NTSTOR_UNICODE_STRING// Size=0x10 (Id=854)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _DUMP_DRIVER_INFO// Size=0xb0 (Id=421)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _DUMP_ENTRY Entry;// Offset=0x8 Size=0x10
    long  ( * LiveControl)(struct _DUMP_DISK_INFO * ,enum _DUMP_CONTROL_CODE ,void * );// Offset=0x18 Size=0x8
    wchar_t * Name;// Offset=0x20 Size=0x8
    wchar_t * BaseName;// Offset=0x28 Size=0x8
    wchar_t * LibraryDriverName;// Offset=0x30 Size=0x8
    wchar_t * LibraryDriverBaseName;// Offset=0x38 Size=0x8
    unsigned long Flags;// Offset=0x40 Size=0x4
    unsigned long ContextSize;// Offset=0x44 Size=0x4
    void * Context;// Offset=0x48 Size=0x8
    long  ( * DumpRead)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * );// Offset=0x50 Size=0x8
    long  ( * DumpWrite)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * ,void * );// Offset=0x58 Size=0x8
    long  ( * DumpFlush)(struct _DUMP_DISK_INFO * ,unsigned long long * ,unsigned long long * );// Offset=0x60 Size=0x8
    long  ( * DumpControl)(struct _DUMP_DISK_INFO * ,enum _DUMP_CONTROL_CODE ,void * );// Offset=0x68 Size=0x8
    struct _STORAGE_DUMP_INFO * DumpInfo;// Offset=0x70 Size=0x8
    void * Reserved;// Offset=0x78 Size=0x8
    struct _NTSTOR_UNICODE_STRING DriverFullPath;// Offset=0x80 Size=0x10
    struct _NTSTOR_UNICODE_STRING LibraryDriverFullPath;// Offset=0x90 Size=0x10
    long  ( * DumpRead2)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * ,struct _DUMP_READWRITE_PARAMETERS * );// Offset=0xa0 Size=0x8
    long  ( * DumpWrite2)(struct _DUMP_DISK_INFO * ,enum _DUMP_IO_MODE ,unsigned long long * ,void * ,void * ,struct _DUMP_READWRITE_PARAMETERS * );// Offset=0xa8 Size=0x8
};
