struct _RTL_BALANCED_LINKS// Size=0x20 (Id=1386)
{
    struct _RTL_BALANCED_LINKS * Parent;// Offset=0x0 Size=0x8
    struct _RTL_BALANCED_LINKS * LeftChild;// Offset=0x8 Size=0x8
    struct _RTL_BALANCED_LINKS * RightChild;// Offset=0x10 Size=0x8
    char Balance;// Offset=0x18 Size=0x1
    unsigned char Reserved[3];// Offset=0x19 Size=0x3
};

struct _KTMOBJECT_NAMESPACE_LINK// Size=0x28 (Id=1042)
{
    struct _RTL_BALANCED_LINKS Links;// Offset=0x0 Size=0x20
    unsigned char Expired;// Offset=0x20 Size=0x1
};
