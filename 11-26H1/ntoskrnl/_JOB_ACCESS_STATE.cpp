union _unnamed_1939// Size=0x4 (Id=1939)
{
    unsigned long AllFlags;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DebugPriv:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
    };
};

enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_SUBJECT_CONTEXT// Size=0x20 (Id=444)
{
    void * ClientToken;// Offset=0x0 Size=0x8
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x8 Size=0x4
    void * PrimaryToken;// Offset=0x10 Size=0x8
    void * ProcessAuditId;// Offset=0x18 Size=0x8
};

struct _JOB_ACCESS_STATE// Size=0x28 (Id=1940)
{
    union _unnamed_1939 Data;// Offset=0x0 Size=0x4
    struct _SECURITY_SUBJECT_CONTEXT CapturedContext;// Offset=0x8 Size=0x20
};
