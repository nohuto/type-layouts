struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=320)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_QOS_CLASSIFICATION_ELEMENT// Size=0x10 (Id=1439)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned short ConditionSelector;// Offset=0x8 Size=0x2
    unsigned short ConditionField;// Offset=0xa Size=0x2
    unsigned short ActionSelector;// Offset=0xc Size=0x2
    unsigned short ActionField;// Offset=0xe Size=0x2
};
