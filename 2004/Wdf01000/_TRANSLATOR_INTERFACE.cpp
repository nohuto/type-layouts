struct _TRANSLATOR_INTERFACE// Size=0x30 (Id=2756)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    unsigned short Version;// Offset=0x2 Size=0x2
    void * Context;// Offset=0x8 Size=0x8
    void  ( * InterfaceReference)(void * );// Offset=0x10 Size=0x8
    void  ( * InterfaceDereference)(void * );// Offset=0x18 Size=0x8
    long  ( * TranslateResources)(void * ,struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * ,enum _RESOURCE_TRANSLATION_DIRECTION ,unsigned long ,struct _IO_RESOURCE_DESCRIPTOR * ,struct _DEVICE_OBJECT * ,struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * );// Offset=0x20 Size=0x8
    long  ( * TranslateResourceRequirements)(void * ,struct _IO_RESOURCE_DESCRIPTOR * ,struct _DEVICE_OBJECT * ,unsigned long * ,struct _IO_RESOURCE_DESCRIPTOR ** );// Offset=0x28 Size=0x8
};
