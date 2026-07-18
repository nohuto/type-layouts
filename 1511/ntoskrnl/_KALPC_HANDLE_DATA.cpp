struct _HANDLE_TABLE_ENTRY_INFO// Size=0x4 (Id=88)
{
    unsigned long AuditMask;// Offset=0x0 Size=0x4
};

struct _OB_DUPLICATE_OBJECT_STATE// Size=0x28 (Id=902)
{
    struct _EPROCESS * SourceProcess;// Offset=0x0 Size=0x8
    void * SourceHandle;// Offset=0x8 Size=0x8
    void * Object;// Offset=0x10 Size=0x8
    unsigned long TargetAccess;// Offset=0x18 Size=0x4
    struct _HANDLE_TABLE_ENTRY_INFO ObjectInfo;// Offset=0x1c Size=0x4
    unsigned long HandleAttributes;// Offset=0x20 Size=0x4
};

struct _KALPC_HANDLE_DATA// Size=0x30 (Id=433)
{
    unsigned long Flags;// Offset=0x0 Size=0x4
    unsigned long ObjectType;// Offset=0x4 Size=0x4
    struct _OB_DUPLICATE_OBJECT_STATE DuplicateContext;// Offset=0x8 Size=0x28
};
