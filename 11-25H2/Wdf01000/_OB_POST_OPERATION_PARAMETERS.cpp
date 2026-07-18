struct _OB_POST_CREATE_HANDLE_INFORMATION// Size=0x4 (Id=890)
{
    unsigned long GrantedAccess;// Offset=0x0 Size=0x4
};

struct _OB_POST_DUPLICATE_HANDLE_INFORMATION// Size=0x4 (Id=2062)
{
    unsigned long GrantedAccess;// Offset=0x0 Size=0x4
};

union _OB_POST_OPERATION_PARAMETERS// Size=0x4 (Id=1541)
{
    struct _OB_POST_CREATE_HANDLE_INFORMATION CreateHandleInformation;// Offset=0x0 Size=0x4
    struct _OB_POST_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;// Offset=0x0 Size=0x4
};
