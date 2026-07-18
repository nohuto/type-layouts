struct _INTERFACE// Size=0x20 (Id=150)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
};

struct _SECURE_DRIVER_INTERFACE// Size=0x38 (Id=1815)
{
    struct _INTERFACE InterfaceHeader;// Offset=0x0 Size=0x20
    struct _EPROCESS *  ( * ProcessReference)(void * );// Offset=0x20 Size=0x8
    void  ( * ProcessDereference)(void * ,struct _EPROCESS * );// Offset=0x28 Size=0x8
    unsigned long Reserved;// Offset=0x30 Size=0x4
};
