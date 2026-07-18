struct NVME_ICE_INTERFACE// Size=0x48 (Id=1164)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long  ( * QueryCapabilities)(const void * ,struct NVME_PCI_ADDRESS * ,struct NVME_ICE_CAPABILITIES * ,unsigned long * );// Offset=0x20 Size=0x8
    unsigned long  ( * ConfigureCapability)(const void * ,struct NVME_ICE_CONFIGURE_CAPABILITY_DATA * );// Offset=0x28 Size=0x8
    unsigned long  ( * ProgramKey)(const void * ,struct NVME_ICE_PROGRAM_KEY_DATA * ,unsigned long * );// Offset=0x30 Size=0x8
    unsigned long  ( * IOStart)(void * ,struct NVME_ICE_IO_DESCRIPTOR * );// Offset=0x38 Size=0x8
    unsigned long  ( * IOComplete)(void * ,void * );// Offset=0x40 Size=0x8
};
