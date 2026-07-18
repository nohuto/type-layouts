enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SE_IMPERSONATION_STATE// Size=0x10 (Id=3335)
{
    void * Token;// Offset=0x0 Size=0x8
    unsigned char CopyOnOpen;// Offset=0x8 Size=0x1
    unsigned char EffectiveOnly;// Offset=0x9 Size=0x1
    enum _SECURITY_IMPERSONATION_LEVEL Level;// Offset=0xc Size=0x4
};
