enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_QUALITY_OF_SERVICE// Size=0xc (Id=715)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x4 Size=0x4
    unsigned char ContextTrackingMode;// Offset=0x8 Size=0x1
    unsigned char EffectiveOnly;// Offset=0x9 Size=0x1
};

struct _LUID// Size=0x8 (Id=34)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _TOKEN_SOURCE// Size=0x10 (Id=1005)
{
    char SourceName[8];// Offset=0x0 Size=0x8
    struct _LUID SourceIdentifier;// Offset=0x8 Size=0x8
};

struct _TOKEN_CONTROL// Size=0x28 (Id=1358)
{
    struct _LUID TokenId;// Offset=0x0 Size=0x8
    struct _LUID AuthenticationId;// Offset=0x8 Size=0x8
    struct _LUID ModifiedId;// Offset=0x10 Size=0x8
    struct _TOKEN_SOURCE TokenSource;// Offset=0x18 Size=0x10
};

struct _SECURITY_CLIENT_CONTEXT// Size=0x48 (Id=801)
{
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;// Offset=0x0 Size=0xc
    void * ClientToken;// Offset=0x10 Size=0x8
    unsigned char DirectlyAccessClientToken;// Offset=0x18 Size=0x1
    unsigned char DirectAccessEffectiveOnly;// Offset=0x19 Size=0x1
    unsigned char ServerIsRemote;// Offset=0x1a Size=0x1
    struct _TOKEN_CONTROL ClientTokenControl;// Offset=0x1c Size=0x28
};

struct _unnamed_484// Size=0x4 (Id=484)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Revoked:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Impersonated:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

union _unnamed_485// Size=0x4 (Id=485)
{
    struct _unnamed_484 s1;// Offset=0x0 Size=0x4
};

struct _KALPC_SECURITY_DATA// Size=0x70 (Id=486)
{
    struct _ALPC_HANDLE_TABLE * HandleTable;// Offset=0x0 Size=0x8
    void * ContextHandle;// Offset=0x8 Size=0x8
    struct _EPROCESS * OwningProcess;// Offset=0x10 Size=0x8
    struct _ALPC_PORT * OwnerPort;// Offset=0x18 Size=0x8
    struct _SECURITY_CLIENT_CONTEXT DynamicSecurity;// Offset=0x20 Size=0x48
    union _unnamed_485 u1;// Offset=0x68 Size=0x4
};
