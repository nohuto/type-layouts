enum _EXP_POOL_CONTEXT_TYPE
{
    ExpPoolContextInvalid=0,
    ExpPoolContextPrivate=1,
    ExpPoolContextSecure=2
};

struct _EXP_POOL_CONTEXT_HEADER// Size=0x8 (Id=948)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    enum _EXP_POOL_CONTEXT_TYPE ContextType;// Offset=0x4 Size=0x4
};

struct _EXP_SECURE_POOL_CONTEXT// Size=0x10 (Id=949)
{
    struct _EXP_POOL_CONTEXT_HEADER Header;// Offset=0x0 Size=0x8
    void * Handle;// Offset=0x8 Size=0x8
};
