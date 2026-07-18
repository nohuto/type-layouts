struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EFI_FIRMWARE_INFORMATION// Size=0x38 (Id=1873)
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

struct _PCAT_FIRMWARE_INFORMATION// Size=0x4 (Id=1880)
{
    unsigned long PlaceHolder;// Offset=0x0 Size=0x4
};

union _anonymous_1808// Size=0x38 (Id=1808)
{
    union // Size=0x38 (Id=0)
    {
        struct _EFI_FIRMWARE_INFORMATION EfiInformation;// Offset=0x0 Size=0x38
        struct _PCAT_FIRMWARE_INFORMATION PcatInformation;// Offset=0x0 Size=0x4
    };
};

struct _FIRMWARE_INFORMATION_LOADER_BLOCK// Size=0x40 (Id=1809)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FirmwareTypeUefi:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long EfiRuntimeUseIum:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long EfiRuntimePageProtectionSupported:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    union _anonymous_1808 u;// Offset=0x8 Size=0x38
};
