enum _STORAGE_DUMP_USAGE
{
    StorageDumpUsageUnknown=0,
    StorageDumpUsageCrash=1,
    StorageDumpUsageHibernation=2,
    StorageDumpUsageMax=3
};

enum _STORAGE_DUMP_ACTION
{
    StorageDumpActionUnknown=0,
    StorageDumpActionCrash=1,
    StorageDumpActionHibernation=2,
    StorageDumpActionHiberResume=3,
    StorageDumpActionMax=4
};

struct _DUMP_ENTRY// Size=0x10 (Id=442)
{
    struct _DUMP_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _DUMP_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _STORAGE_DUMP_INFO// Size=0x48 (Id=538)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    enum _STORAGE_DUMP_USAGE Usage;// Offset=0x4 Size=0x4
    enum _STORAGE_DUMP_ACTION Action;// Offset=0x8 Size=0x4
    struct _DUMP_DISK_INFO * RootDisk;// Offset=0x10 Size=0x8
    struct _DUMP_ENTRY DiskList;// Offset=0x18 Size=0x10
    struct _DUMP_ENTRY AdapterList;// Offset=0x28 Size=0x10
    struct _DUMP_ENTRY DriverList;// Offset=0x38 Size=0x10
};
