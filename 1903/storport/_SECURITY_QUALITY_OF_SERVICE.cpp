enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_QUALITY_OF_SERVICE// Size=0xc (Id=482)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x4 Size=0x4
    unsigned char ContextTrackingMode;// Offset=0x8 Size=0x1
    unsigned char EffectiveOnly;// Offset=0x9 Size=0x1
};
