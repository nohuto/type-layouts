enum _EXP_POOL_CONTEXT_TYPE
{
    ExpPoolContextInvalid=0,
    ExpPoolContextPrivate=1,
    ExpPoolContextSecure=2
};

struct _EXP_POOL_CONTEXT_HEADER// Size=0x8 (Id=951)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    enum _EXP_POOL_CONTEXT_TYPE ContextType;// Offset=0x4 Size=0x4
};
