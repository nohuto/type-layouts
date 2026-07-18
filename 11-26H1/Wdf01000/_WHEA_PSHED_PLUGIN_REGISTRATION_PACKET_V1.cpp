struct _WHEA_PSHED_PLUGIN_CALLBACKS// Size=0x78 (Id=3421)
{
    long  ( * GetAllErrorSources)(void * ,unsigned long * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR ** ,unsigned long * );// Offset=0x0 Size=0x8
    void * Reserved;// Offset=0x8 Size=0x8
    long  ( * GetErrorSourceInfo)(void * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * );// Offset=0x10 Size=0x8
    long  ( * SetErrorSourceInfo)(void * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * );// Offset=0x18 Size=0x8
    long  ( * EnableErrorSource)(void * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * );// Offset=0x20 Size=0x8
    long  ( * DisableErrorSource)(void * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * );// Offset=0x28 Size=0x8
    long  ( * WriteErrorRecord)(void * ,unsigned long ,unsigned long ,struct _WHEA_ERROR_RECORD * );// Offset=0x30 Size=0x8
    long  ( * ReadErrorRecord)(void * ,unsigned long ,unsigned long long ,unsigned long long * ,unsigned long * ,struct _WHEA_ERROR_RECORD * );// Offset=0x38 Size=0x8
    long  ( * ClearErrorRecord)(void * ,unsigned long ,unsigned long long );// Offset=0x40 Size=0x8
    long  ( * RetrieveErrorInfo)(void * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * ,unsigned long long ,struct _WHEA_ERROR_PACKET_V2 * );// Offset=0x48 Size=0x8
    long  ( * FinalizeErrorRecord)(void * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * ,unsigned long ,struct _WHEA_ERROR_RECORD * );// Offset=0x50 Size=0x8
    long  ( * ClearErrorStatus)(void * ,struct _WHEA_ERROR_SOURCE_DESCRIPTOR * ,unsigned long ,struct _WHEA_ERROR_RECORD * );// Offset=0x58 Size=0x8
    long  ( * AttemptRecovery)(void * ,unsigned long ,struct _WHEA_ERROR_RECORD * );// Offset=0x60 Size=0x8
    long  ( * GetInjectionCapabilities)(void * ,union _WHEA_ERROR_INJECTION_CAPABILITIES * );// Offset=0x68 Size=0x8
    long  ( * InjectError)(void * ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long long );// Offset=0x70 Size=0x8
};

struct _WHEA_PSHED_PLUGIN_REGISTRATION_PACKET_V1// Size=0x90 (Id=2956)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long Version;// Offset=0x4 Size=0x4
    void * Context;// Offset=0x8 Size=0x8
    unsigned long FunctionalAreaMask;// Offset=0x10 Size=0x4
    unsigned long Reserved;// Offset=0x14 Size=0x4
    struct _WHEA_PSHED_PLUGIN_CALLBACKS Callbacks;// Offset=0x18 Size=0x78
};
