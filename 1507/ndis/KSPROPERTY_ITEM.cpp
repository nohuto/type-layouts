struct KSPROPERTY_ITEM// Size=0x48 (Id=710)
{
    unsigned long PropertyId;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        long  ( * GetPropertyHandler)(struct _IRP * ,struct KSIDENTIFIER * ,void * );// Offset=0x8 Size=0x8
        unsigned char GetSupported;// Offset=0x8 Size=0x1
    };
    unsigned long MinProperty;// Offset=0x10 Size=0x4
    unsigned long MinData;// Offset=0x14 Size=0x4
    union // Size=0x8 (Id=0)
    {
        long  ( * SetPropertyHandler)(struct _IRP * ,struct KSIDENTIFIER * ,void * );// Offset=0x18 Size=0x8
        unsigned char SetSupported;// Offset=0x18 Size=0x1
    };
    struct KSPROPERTY_VALUES * Values;// Offset=0x20 Size=0x8
    unsigned long RelationsCount;// Offset=0x28 Size=0x4
    struct KSIDENTIFIER * Relations;// Offset=0x30 Size=0x8
    long  ( * SupportHandler)(struct _IRP * ,struct KSIDENTIFIER * ,void * );// Offset=0x38 Size=0x8
    unsigned long SerializedSize;// Offset=0x40 Size=0x4
};
