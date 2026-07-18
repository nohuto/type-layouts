struct _OB_PRE_CREATE_HANDLE_INFORMATION// Size=0x8 (Id=2641)
{
    unsigned long DesiredAccess;// Offset=0x0 Size=0x4
    unsigned long OriginalDesiredAccess;// Offset=0x4 Size=0x4
};

struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION// Size=0x18 (Id=3219)
{
    unsigned long DesiredAccess;// Offset=0x0 Size=0x4
    unsigned long OriginalDesiredAccess;// Offset=0x4 Size=0x4
    void * SourceProcess;// Offset=0x8 Size=0x8
    void * TargetProcess;// Offset=0x10 Size=0x8
};

union _OB_PRE_OPERATION_PARAMETERS// Size=0x18 (Id=2221)
{
    struct _OB_PRE_CREATE_HANDLE_INFORMATION CreateHandleInformation;// Offset=0x0 Size=0x8
    struct _OB_PRE_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;// Offset=0x0 Size=0x18
};
