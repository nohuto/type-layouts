struct KSMETHOD_ITEM// Size=0x28 (Id=1346)
{
    unsigned long MethodId;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        long  ( * MethodHandler)(struct _IRP * ,struct KSIDENTIFIER * ,void * );// Offset=0x8 Size=0x8
        unsigned char MethodSupported;// Offset=0x8 Size=0x1
    };
    unsigned long MinMethod;// Offset=0x10 Size=0x4
    unsigned long MinData;// Offset=0x14 Size=0x4
    long  ( * SupportHandler)(struct _IRP * ,struct KSIDENTIFIER * ,void * );// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
};
