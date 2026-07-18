struct _LUID// Size=0x8 (Id=34)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _LUID_AND_ATTRIBUTES// Size=0xc (Id=396)
{
    struct _LUID Luid;// Offset=0x0 Size=0x8
    unsigned long Attributes;// Offset=0x8 Size=0x4
};

struct _INITIAL_PRIVILEGE_SET// Size=0x2c (Id=353)
{
    unsigned long PrivilegeCount;// Offset=0x0 Size=0x4
    unsigned long Control;// Offset=0x4 Size=0x4
    struct _LUID_AND_ATTRIBUTES Privilege[3];// Offset=0x8 Size=0x24
};
