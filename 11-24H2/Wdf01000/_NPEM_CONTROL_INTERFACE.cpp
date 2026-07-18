struct _NPEM_CONTROL_INTERFACE// Size=0x40 (Id=3542)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * SetNpemSupportState)(void * ,unsigned char );// Offset=0x20 Size=0x8
    long  ( * QueryStandardCapabilities)(void * ,union _NPEM_CAPABILITY_STANDARD * );// Offset=0x28 Size=0x8
    long  ( * SetStandardControl)(void * ,enum _NPEM_CONTROL_STANDARD_CONTROL_BIT ,unsigned char );// Offset=0x30 Size=0x8
    unsigned long  ( * QueryNpemControl)(void * );// Offset=0x38 Size=0x8
};
