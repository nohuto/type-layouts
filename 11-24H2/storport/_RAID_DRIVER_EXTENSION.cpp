enum _RAID_OBJECT_TYPE
{
    RaidUnknownObject=0,
    RaidAdapterObject=1094997074,
    RaidUnitObject=1431193940,
    RaidDriverObject=1146246738,
    NvmeAdapterObject=1314275652,
    NvmeNamespaceObject=1314278989
};

union _unnamed_656// Size=0x4 (Id=656)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SupportsNvmeAdapters:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=614)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_412// Size=0x20 (Id=412)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    unsigned long Count;// Offset=0x10 Size=0x4
    unsigned long long Lock;// Offset=0x18 Size=0x8
};

struct _RAID_DRIVER_EXTENSION// Size=0x70 (Id=657)
{
    enum _RAID_OBJECT_TYPE ObjectType;// Offset=0x0 Size=0x4
    union _unnamed_656 Flags;// Offset=0x4 Size=0x4
    struct _DRIVER_OBJECT * DriverObject;// Offset=0x8 Size=0x8
    struct _RAID_PORT_DATA * PortData;// Offset=0x10 Size=0x8
    struct _LIST_ENTRY DriverLink;// Offset=0x18 Size=0x10
    struct _UNICODE_STRING RegistryPath;// Offset=0x28 Size=0x10
    struct _unnamed_412 AdapterList;// Offset=0x38 Size=0x20
    unsigned long AdapterCount;// Offset=0x58 Size=0x4
    struct _LIST_ENTRY HwInitList;// Offset=0x60 Size=0x10
};
