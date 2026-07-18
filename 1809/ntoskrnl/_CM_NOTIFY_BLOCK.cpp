struct _LIST_ENTRY// Size=0x10 (Id=22)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous=0,
    SecurityIdentification=1,
    SecurityImpersonation=2,
    SecurityDelegation=3
};

struct _SECURITY_SUBJECT_CONTEXT// Size=0x20 (Id=270)
{
    void * ClientToken;// Offset=0x0 Size=0x8
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;// Offset=0x8 Size=0x4
    void * PrimaryToken;// Offset=0x10 Size=0x8
    void * ProcessAuditId;// Offset=0x18 Size=0x8
};

struct _CM_NOTIFY_BLOCK// Size=0x58 (Id=1433)
{
    struct _LIST_ENTRY HiveList;// Offset=0x0 Size=0x10
    struct _LIST_ENTRY PostList;// Offset=0x10 Size=0x10
    struct _CM_KEY_CONTROL_BLOCK * KeyControlBlock;// Offset=0x20 Size=0x8
    struct _CM_KEY_BODY * KeyBody;// Offset=0x28 Size=0x8
    struct // Size=0x4 (Id=0)
    {
        unsigned long Filter:30;// Offset=0x30 Size=0x4 BitOffset=0x0 BitSize=0x1e
        unsigned long WatchTree:1;// Offset=0x30 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long NotifyPending:1;// Offset=0x30 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    struct _SECURITY_SUBJECT_CONTEXT SubjectContext;// Offset=0x38 Size=0x20
};
