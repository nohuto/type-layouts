struct _FUNCTION_LEVEL_DEVICE_RESET_PARAMETERS// Size=0x18 (Id=3265)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * DeviceResetCompletion)(long ,void * );// Offset=0x8 Size=0x8
    void * CompletionContext;// Offset=0x10 Size=0x8
};
