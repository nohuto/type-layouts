struct _PCI_SECURITY_INTERFACE// Size=0x28 (Id=3962)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SetAccessControlServices)(void * ,enum _PCI_ACS_BIT ,enum _PCI_ACS_BIT ,enum _PCI_ACS_BIT ,enum _PCI_ACS_BIT ,enum _PCI_ACS_BIT ,enum _PCI_ACS_BIT ,enum _PCI_ACS_BIT );// Offset=0x20 Size=0x8
};
