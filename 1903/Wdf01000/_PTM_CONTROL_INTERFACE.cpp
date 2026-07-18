struct _PTM_CONTROL_INTERFACE// Size=0x40 (Id=2679)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * QueryGranularity)(void * ,unsigned char * );// Offset=0x20 Size=0x8
    long  ( * QueryTimeSource)(void * ,unsigned long * );// Offset=0x28 Size=0x8
    long  ( * Enable)(void * );// Offset=0x30 Size=0x8
    long  ( * Disable)(void * );// Offset=0x38 Size=0x8
};
