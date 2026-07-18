struct KSFASTPROPERTY_ITEM// Size=0x20 (Id=1126)
{
    unsigned long PropertyId;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned char  ( * GetPropertyHandler)(struct _FILE_OBJECT * ,struct KSIDENTIFIER * ,unsigned long ,void * ,unsigned long ,struct _IO_STATUS_BLOCK * );// Offset=0x8 Size=0x8
        unsigned char GetSupported;// Offset=0x8 Size=0x1
    };
    union // Size=0x8 (Id=0)
    {
        unsigned char  ( * SetPropertyHandler)(struct _FILE_OBJECT * ,struct KSIDENTIFIER * ,unsigned long ,void * ,unsigned long ,struct _IO_STATUS_BLOCK * );// Offset=0x10 Size=0x8
        unsigned char SetSupported;// Offset=0x10 Size=0x1
    };
    unsigned long Reserved;// Offset=0x18 Size=0x4
};
