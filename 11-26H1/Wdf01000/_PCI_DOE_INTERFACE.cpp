struct _PCI_DOE_INTERFACE// Size=0x38 (Id=2531)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * QuerySupportedDoeProtocols)(void * ,unsigned short ,unsigned long ,unsigned char * ,unsigned long * );// Offset=0x20 Size=0x8
    void  ( * ResetDoeInstances)(void * );// Offset=0x28 Size=0x8
    long  ( * SendDoeRequest)(void * ,unsigned short ,unsigned char ,unsigned long ,unsigned long * ,unsigned long ,unsigned long * ,unsigned long * );// Offset=0x30 Size=0x8
};
