struct _PCI_VIRTUALIZATION_INTERFACE// Size=0x50 (Id=4133)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    unsigned long  ( * SetVirtualFunctionData)(void * ,unsigned short ,void * ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    unsigned long  ( * GetVirtualFunctionData)(void * ,unsigned short ,void * ,unsigned long ,unsigned long );// Offset=0x28 Size=0x8
    long  ( * GetLocation)(void * ,unsigned short ,wchar_t * ,unsigned char * ,unsigned char * );// Offset=0x30 Size=0x8
    void  ( * GetResources)(void * ,unsigned char * );// Offset=0x38 Size=0x8
    long  ( * EnableVirtualization)(void * ,unsigned short ,unsigned char ,unsigned char ,unsigned char );// Offset=0x40 Size=0x8
    long  ( * GetVirtualFunctionProbedBars)(void * ,unsigned long * );// Offset=0x48 Size=0x8
};
