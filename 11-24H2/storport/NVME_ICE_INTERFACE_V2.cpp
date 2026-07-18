struct NVME_ICE_INTERFACE_V2// Size=0xa8 (Id=837)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long  ( * QueryCapabilitiesV2)(void * ,struct NVME_PCI_ADDRESS * ,struct NVME_ICE_CAPABILITIES_V2 * ,unsigned long * );// Offset=0x20 Size=0x8
    unsigned long  ( * ProgramKeyV2)(void * ,struct NVME_ICE_PROGRAM_KEY_DATA_V2 * ,unsigned long * );// Offset=0x28 Size=0x8
    unsigned long  ( * DumpProgramKeyV2)(void * ,struct NVME_ICE_PROGRAM_KEY_DATA_V2 * ,unsigned long * );// Offset=0x30 Size=0x8
    unsigned long  ( * IOStart)(void * ,struct NVME_ICE_IO_DESCRIPTOR * );// Offset=0x38 Size=0x8
    unsigned long  ( * IOComplete)(void * ,void * );// Offset=0x40 Size=0x8
    unsigned long  ( * DumpIOStart)(const void * ,struct NVME_ICE_IO_DESCRIPTOR * );// Offset=0x48 Size=0x8
    unsigned long  ( * DumpIOComplete)(const void * ,const void * );// Offset=0x50 Size=0x8
    long  ( * DumpInitialize)(void * ,enum _NVME_ICE_DUMP_TYPE );// Offset=0x58 Size=0x8
    void  ( * DumpCleanup)(void * ,enum _NVME_ICE_DUMP_TYPE );// Offset=0x60 Size=0x8
    long  ( * DumpStart)(void * ,enum _NVME_ICE_DUMP_TYPE ,struct NVME_ICE_DUMP_START_PARAMETERS * );// Offset=0x68 Size=0x8
    void  ( * DumpFinish)(void * ,enum _NVME_ICE_DUMP_TYPE );// Offset=0x70 Size=0x8
    unsigned long  ( * QueryStorageDeviceSupport)(void * ,struct NVME_PCI_ADDRESS * );// Offset=0x78 Size=0x8
    unsigned long  ( * QueryPlatformCapabilities)(void * ,struct NVME_ICE_CAPABILITIES_V2 * ,unsigned long * );// Offset=0x80 Size=0x8
    unsigned long  ( * QueryNVMeCapabilities)(void * ,struct NVME_PCI_ADDRESS * ,struct NVME_ICE_NVME_CAPABILITIES * );// Offset=0x88 Size=0x8
    unsigned long  ( * EnableNvmeSupport)(void * ,struct NVME_PCI_ADDRESS * ,struct NVME_ICE_ENABLE_NVME_DEVICE * );// Offset=0x90 Size=0x8
    unsigned long  ( * ConfigureExclusionRanges)(void * ,struct NVME_ICE_ADDRESS_RANGE * ,unsigned short ,enum NVME_ICE_EXCLUSION_ACTION );// Offset=0x98 Size=0x8
    unsigned long  ( * NotifyHardwareReset)(void * ,struct NVME_PCI_ADDRESS * );// Offset=0xa0 Size=0x8
};
