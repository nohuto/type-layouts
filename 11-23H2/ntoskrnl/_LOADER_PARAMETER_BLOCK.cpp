struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _I386_LOADER_BLOCK// Size=0x10 (Id=2160)
{
    void * CommonDataArea;// Offset=0x0 Size=0x8
    unsigned long MachineType;// Offset=0x8 Size=0x4
    unsigned long VirtualBias;// Offset=0xc Size=0x4
};

struct _ARM_LOADER_BLOCK// Size=0x4 (Id=2238)
{
    unsigned long PlaceHolder;// Offset=0x0 Size=0x4
};

union _unnamed_1941// Size=0x10 (Id=1941)
{
    union // Size=0x10 (Id=0)
    {
        struct _I386_LOADER_BLOCK I386;// Offset=0x0 Size=0x10
        struct _ARM_LOADER_BLOCK Arm;// Offset=0x0 Size=0x4
    };
};

struct _EFI_FIRMWARE_INFORMATION// Size=0x38 (Id=2245)
{
    unsigned long FirmwareVersion;// Offset=0x0 Size=0x4
    struct _VIRTUAL_EFI_RUNTIME_SERVICES * VirtualEfiRuntimeServices;// Offset=0x8 Size=0x8
    long SetVirtualAddressMapStatus;// Offset=0x10 Size=0x4
    unsigned long MissedMappingsCount;// Offset=0x14 Size=0x4
    struct _LIST_ENTRY FirmwareResourceList;// Offset=0x18 Size=0x10
    void * EfiMemoryMap;// Offset=0x28 Size=0x8
    unsigned long EfiMemoryMapSize;// Offset=0x30 Size=0x4
    unsigned long EfiMemoryMapDescriptorSize;// Offset=0x34 Size=0x4
};

struct _PCAT_FIRMWARE_INFORMATION// Size=0x4 (Id=2255)
{
    unsigned long PlaceHolder;// Offset=0x0 Size=0x4
};

union _unnamed_2170// Size=0x38 (Id=2170)
{
    union // Size=0x38 (Id=0)
    {
        struct _EFI_FIRMWARE_INFORMATION EfiInformation;// Offset=0x0 Size=0x38
        struct _PCAT_FIRMWARE_INFORMATION PcatInformation;// Offset=0x0 Size=0x4
    };
};

struct _FIRMWARE_INFORMATION_LOADER_BLOCK// Size=0x40 (Id=2171)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FirmwareTypeUefi:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EfiRuntimeUseIum:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EfiRuntimePageProtectionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    union _unnamed_2170 u;// Offset=0x8 Size=0x38
};

struct _RTL_RB_TREE// Size=0x10 (Id=115)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _LOADER_PARAMETER_BLOCK// Size=0x170 (Id=1942)
{
    unsigned long OsMajorVersion;// Offset=0x0 Size=0x4
    unsigned long OsMinorVersion;// Offset=0x4 Size=0x4
    unsigned long Size;// Offset=0x8 Size=0x4
    unsigned long OsLoaderSecurityVersion;// Offset=0xc Size=0x4
    struct _LIST_ENTRY LoadOrderListHead;// Offset=0x10 Size=0x10
    struct _LIST_ENTRY MemoryDescriptorListHead;// Offset=0x20 Size=0x10
    struct _LIST_ENTRY BootDriverListHead;// Offset=0x30 Size=0x10
    struct _LIST_ENTRY EarlyLaunchListHead;// Offset=0x40 Size=0x10
    struct _LIST_ENTRY CoreDriverListHead;// Offset=0x50 Size=0x10
    struct _LIST_ENTRY CoreExtensionsDriverListHead;// Offset=0x60 Size=0x10
    struct _LIST_ENTRY TpmCoreDriverListHead;// Offset=0x70 Size=0x10
    unsigned long long KernelStack;// Offset=0x80 Size=0x8
    unsigned long long Prcb;// Offset=0x88 Size=0x8
    unsigned long long Process;// Offset=0x90 Size=0x8
    unsigned long long Thread;// Offset=0x98 Size=0x8
    unsigned long KernelStackSize;// Offset=0xa0 Size=0x4
    unsigned long RegistryLength;// Offset=0xa4 Size=0x4
    void * RegistryBase;// Offset=0xa8 Size=0x8
    struct _CONFIGURATION_COMPONENT_DATA * ConfigurationRoot;// Offset=0xb0 Size=0x8
    char * ArcBootDeviceName;// Offset=0xb8 Size=0x8
    char * ArcHalDeviceName;// Offset=0xc0 Size=0x8
    char * NtBootPathName;// Offset=0xc8 Size=0x8
    char * NtHalPathName;// Offset=0xd0 Size=0x8
    char * LoadOptions;// Offset=0xd8 Size=0x8
    struct _NLS_DATA_BLOCK * NlsData;// Offset=0xe0 Size=0x8
    struct _ARC_DISK_INFORMATION * ArcDiskInformation;// Offset=0xe8 Size=0x8
    struct _LOADER_PARAMETER_EXTENSION * Extension;// Offset=0xf0 Size=0x8
    union _unnamed_1941 u;// Offset=0xf8 Size=0x10
    struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;// Offset=0x108 Size=0x40
    char * OsBootstatPathName;// Offset=0x148 Size=0x8
    char * ArcOSDataDeviceName;// Offset=0x150 Size=0x8
    char * ArcWindowsSysPartName;// Offset=0x158 Size=0x8
    struct _RTL_RB_TREE MemoryDescriptorTree;// Offset=0x160 Size=0x10
};
