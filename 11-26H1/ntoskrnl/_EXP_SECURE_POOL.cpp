struct _EXP_POOL_COMMON_HEADER// Size=0x4 (Id=977)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
};

struct _EXP_SECURE_POOL// Size=0x10 (Id=983)
{
    struct _EXP_POOL_COMMON_HEADER Header;// Offset=0x0 Size=0x4
    void * Handle;// Offset=0x8 Size=0x8
};
