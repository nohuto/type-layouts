struct _LUID// Size=0x8 (Id=34)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _LUID_AND_ATTRIBUTES// Size=0xc (Id=620)
{
    struct _LUID Luid;// Offset=0x0 Size=0x8
    unsigned long Attributes;// Offset=0x8 Size=0x4
};

struct _TOKEN_PRIVILEGES// Size=0x10 (Id=1702)
{
    unsigned long PrivilegeCount;// Offset=0x0 Size=0x4
    struct _LUID_AND_ATTRIBUTES Privileges[1];// Offset=0x4 Size=0xc
};
