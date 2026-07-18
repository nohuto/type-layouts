struct _INTERFACE// Size=0x20 (Id=160)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
};

struct _SDEV_IDENTIFIER_INTERFACE// Size=0x28 (Id=858)
{
    struct _INTERFACE InterfaceHeader;// Offset=0x0 Size=0x20
    unsigned long long  ( * GetIdentifier)(void * );// Offset=0x20 Size=0x8
};
