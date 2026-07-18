enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_SUBJECT_CONTEXT// Size=0x10 (Id=517)
{
    void * ClientToken;// Offset=0x0 Size=0x4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x4 Size=0x4
    void * PrimaryToken;// Offset=0x8 Size=0x4
    void * ProcessAuditId;// Offset=0xc Size=0x4
};
