struct _GUID// Size=0x10 (Id=175)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _LOADER_PARTITION_INFORMATION_EX// Size=0x1c (Id=1611)
{
    unsigned long PartitionStyle;// Offset=0x0 Size=0x4
    unsigned long PartitionNumber;// Offset=0x4 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Signature;// Offset=0x8 Size=0x4
        struct _GUID DeviceId;// Offset=0x8 Size=0x10
    };
    unsigned long Flags;// Offset=0x18 Size=0x4
};

struct _BOOTDISK_INFORMATION_LITE// Size=0x20 (Id=3590)
{
    unsigned long NumberEntries;// Offset=0x0 Size=0x4
    struct _LOADER_PARTITION_INFORMATION_EX Entries[1];// Offset=0x4 Size=0x1c
};
