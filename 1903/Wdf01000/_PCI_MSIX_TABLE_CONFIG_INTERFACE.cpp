struct _PCI_MSIX_TABLE_CONFIG_INTERFACE// Size=0x48 (Id=4411)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SetTableEntry)(void * ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    long  ( * MaskTableEntry)(void * ,unsigned long );// Offset=0x28 Size=0x8
    long  ( * UnmaskTableEntry)(void * ,unsigned long );// Offset=0x30 Size=0x8
    long  ( * GetTableEntry)(void * ,unsigned long ,unsigned long * ,unsigned char * );// Offset=0x38 Size=0x8
    long  ( * GetTableSize)(void * ,unsigned long * );// Offset=0x40 Size=0x8
};
