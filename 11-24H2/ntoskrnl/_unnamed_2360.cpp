struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _EFI_FIRMWARE_INFORMATION// Size=0x38 (Id=2439)
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

struct _PCAT_FIRMWARE_INFORMATION// Size=0x4 (Id=2451)
{
    unsigned long PlaceHolder;// Offset=0x0 Size=0x4
};

union _unnamed_2360// Size=0x38 (Id=2360)
{
    union // Size=0x38 (Id=0)
    {
        struct _EFI_FIRMWARE_INFORMATION EfiInformation;// Offset=0x0 Size=0x38
        struct _PCAT_FIRMWARE_INFORMATION PcatInformation;// Offset=0x0 Size=0x4
    };
};
