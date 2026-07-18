struct _PCI_LINK_CONFIG_INTERFACE_V1// Size=0x30 (Id=1437)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SetMaximumLinkBandwidth)(void * ,unsigned long ,unsigned char ,unsigned char * ,enum _PCI_LINK_SPEED * );// Offset=0x20 Size=0x8
    long  ( * GetLinkInformation)(void * ,struct _PCI_LINK_INFORMATION * );// Offset=0x28 Size=0x8
};
