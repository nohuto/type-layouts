struct _LUID// Size=0x8 (Id=94)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_SUBJECT_CONTEXT// Size=0x20 (Id=438)
{
    void * ClientToken;// Offset=0x0 Size=0x8
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x8 Size=0x4
    void * PrimaryToken;// Offset=0x10 Size=0x8
    void * ProcessAuditId;// Offset=0x18 Size=0x8
};

struct _LUID_AND_ATTRIBUTES// Size=0xc (Id=435)
{
    struct _LUID Luid;// Offset=0x0 Size=0x8
    unsigned long Attributes;// Offset=0x8 Size=0x4
};

struct _INITIAL_PRIVILEGE_SET// Size=0x2c (Id=425)
{
    unsigned long PrivilegeCount;// Offset=0x0 Size=0x4
    unsigned long Control;// Offset=0x4 Size=0x4
    struct _LUID_AND_ATTRIBUTES Privilege[3];// Offset=0x8 Size=0x24
};

struct _PRIVILEGE_SET// Size=0x14 (Id=424)
{
    unsigned long PrivilegeCount;// Offset=0x0 Size=0x4
    unsigned long Control;// Offset=0x4 Size=0x4
    struct _LUID_AND_ATTRIBUTES Privilege[1];// Offset=0x8 Size=0xc
};

union _unnamed_372// Size=0x2c (Id=372)
{
    union // Size=0x2c (Id=0)
    {
        struct _INITIAL_PRIVILEGE_SET InitialPrivilegeSet;// Offset=0x0 Size=0x2c
        struct _PRIVILEGE_SET PrivilegeSet;// Offset=0x0 Size=0x14
    };
};

struct _UNICODE_STRING// Size=0x10 (Id=539)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _ACCESS_STATE// Size=0xa0 (Id=373)
{
    struct _LUID OperationID;// Offset=0x0 Size=0x8
    unsigned char SecurityEvaluated;// Offset=0x8 Size=0x1
    unsigned char GenerateAudit;// Offset=0x9 Size=0x1
    unsigned char GenerateOnClose;// Offset=0xa Size=0x1
    unsigned char PrivilegesAllocated;// Offset=0xb Size=0x1
    unsigned long Flags;// Offset=0xc Size=0x4
    unsigned long RemainingDesiredAccess;// Offset=0x10 Size=0x4
    unsigned long PreviouslyGrantedAccess;// Offset=0x14 Size=0x4
    unsigned long OriginalDesiredAccess;// Offset=0x18 Size=0x4
    struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext;// Offset=0x20 Size=0x20
    void * SecurityDescriptor;// Offset=0x40 Size=0x8
    void * AuxData;// Offset=0x48 Size=0x8
    union _unnamed_372 Privileges;// Offset=0x50 Size=0x2c
    unsigned char AuditPrivileges;// Offset=0x7c Size=0x1
    struct _UNICODE_STRING ObjectName;// Offset=0x80 Size=0x10
    struct _UNICODE_STRING ObjectTypeName;// Offset=0x90 Size=0x10
};
