struct _OB_POST_CREATE_HANDLE_INFORMATION// Size=0x4 (Id=1740)
{
    unsigned long GrantedAccess;// Offset=0x0 Size=0x4
};

struct _OB_POST_DUPLICATE_HANDLE_INFORMATION// Size=0x4 (Id=3125)
{
    unsigned long GrantedAccess;// Offset=0x0 Size=0x4
};

union _OB_POST_OPERATION_PARAMETERS// Size=0x4 (Id=3880)
{
    struct _OB_POST_CREATE_HANDLE_INFORMATION CreateHandleInformation;// Offset=0x0 Size=0x4
    struct _OB_POST_DUPLICATE_HANDLE_INFORMATION DuplicateHandleInformation;// Offset=0x0 Size=0x4
};
