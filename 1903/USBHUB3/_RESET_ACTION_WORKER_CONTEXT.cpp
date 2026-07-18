enum _DEVICE_RESET_TYPE
{
    FunctionLevelDeviceReset=0,
    PlatformLevelDeviceReset=1
};

struct _RESET_ACTION_WORKER_CONTEXT// Size=0x20 (Id=392)
{
    struct _DEVICE_RESET_INTERFACE_STANDARD * ResetInterface;// Offset=0x0 Size=0x8
    enum _DEVICE_RESET_TYPE ResetType;// Offset=0x8 Size=0x4
    void * Context;// Offset=0x10 Size=0x8
    void  ( * ResetCompletionMethod)(void * ,long );// Offset=0x18 Size=0x8
};
