union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS// Size=0x1 (Id=324)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Trustlet:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Ntos:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char WriteHandle:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char ReadHandle:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned char AccessRights;// Offset=0x0 Size=0x1
};

struct _PS_TRUSTLET_ATTRIBUTE_TYPE// Size=0x4 (Id=356)
{
    union // Size=0x4 (Id=0)
    {
        unsigned char Version;// Offset=0x0 Size=0x1
        unsigned char DataCount;// Offset=0x1 Size=0x1
        unsigned char SemanticType;// Offset=0x2 Size=0x1
        union _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS AccessRights;// Offset=0x3 Size=0x1
        unsigned long AttributeType;// Offset=0x0 Size=0x4
    };
};

struct _PS_TRUSTLET_ATTRIBUTE_HEADER// Size=0x8 (Id=53)
{
    struct _PS_TRUSTLET_ATTRIBUTE_TYPE AttributeType;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long InstanceNumber:8;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long Reserved:24;// Offset=0x4 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

struct _PS_TRUSTLET_ATTRIBUTE_DATA// Size=0x10 (Id=52)
{
    struct _PS_TRUSTLET_ATTRIBUTE_HEADER Header;// Offset=0x0 Size=0x8
    unsigned long long Data[1];// Offset=0x8 Size=0x8
};
