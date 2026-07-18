struct _WNF_STATE_NAME// Size=0x8 (Id=736)
{
    unsigned long Data[2];// Offset=0x0 Size=0x8
};

struct _MX_WNF_SUBSCRIPTION_CONTEXT// Size=0x20 (Id=3165)
{
    struct _EX_WNF_SUBSCRIPTION * Handle;// Offset=0x0 Size=0x8
    struct _WNF_STATE_NAME WnfStateName;// Offset=0x8 Size=0x8
    long  ( * Callback)(struct _MX_WNF_SUBSCRIPTION_CONTEXT * ,void * );// Offset=0x10 Size=0x8
    void * CallbackContext;// Offset=0x18 Size=0x8
};
