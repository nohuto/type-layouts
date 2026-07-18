struct _CLS_LSN// Size=0x8 (Id=1834)
{
    unsigned long long Internal;// Offset=0x0 Size=0x8
};

struct _CLFS_PHYSICAL_LSN_INFORMATION// Size=0x18 (Id=636)
{
    unsigned char StreamIdentifier;// Offset=0x0 Size=0x1
    struct _CLS_LSN VirtualLsn;// Offset=0x8 Size=0x8
    struct _CLS_LSN PhysicalLsn;// Offset=0x10 Size=0x8
};
