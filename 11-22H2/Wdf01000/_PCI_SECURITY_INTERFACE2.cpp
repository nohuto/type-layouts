struct _PCI_SECURITY_INTERFACE2// Size=0x30 (Id=3456)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    unsigned long SupportedScenarios;// Offset=0x24 Size=0x4
    long  ( * SetAccessControlServices)(void * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
};
