struct KSFASTMETHOD_ITEM// Size=0x10 (Id=697)
{
    unsigned long MethodId;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned char  ( * MethodHandler)(struct _FILE_OBJECT * ,struct KSIDENTIFIER * ,unsigned long ,void * ,unsigned long ,struct _IO_STATUS_BLOCK * );// Offset=0x8 Size=0x8
        unsigned char MethodSupported;// Offset=0x8 Size=0x1
    };
};
