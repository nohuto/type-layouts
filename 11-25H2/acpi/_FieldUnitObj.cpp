enum _CONNECTIONTYPE
{
    NoConnection=0,
    NamedConnection=1,
    ConnectionDescriptor=2
};

struct _FieldDesc// Size=0x24 (Id=614)
{
    unsigned long dwByteOffset;// Offset=0x0 Size=0x4
    unsigned long dwStartBitPos;// Offset=0x4 Size=0x4
    unsigned long dwNumBits;// Offset=0x8 Size=0x4
    unsigned long dwFieldFlags;// Offset=0xc Size=0x4
    unsigned char bAttribLength;// Offset=0x10 Size=0x1
    enum _CONNECTIONTYPE ConnectionType;// Offset=0x14 Size=0x4
    unsigned long dwConnectionFirstBitPos;// Offset=0x18 Size=0x4
    unsigned long dwConnectionLength;// Offset=0x1c Size=0x4
    unsigned char abConnectionData[1];// Offset=0x20 Size=0x1
};

struct _FieldUnitObj// Size=0x30 (Id=702)
{
    struct _NSObj * pnsFieldParent;// Offset=0x0 Size=0x8
    struct _FieldDesc FieldDesc;// Offset=0x8 Size=0x24
};
