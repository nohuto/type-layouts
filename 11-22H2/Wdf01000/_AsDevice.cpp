struct _Component// Size=0x8 (Id=673)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    unsigned long Id;// Offset=0x4 Size=0x4
};

struct _AsDevice// Size=0x10 (Id=944)
{
    unsigned long long Pdo;// Offset=0x0 Size=0x8
    struct _Component Component;// Offset=0x8 Size=0x8
};
