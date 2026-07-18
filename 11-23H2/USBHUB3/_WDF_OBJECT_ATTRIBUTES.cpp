enum _WDF_EXECUTION_LEVEL
{
    WdfExecutionLevelInvalid=0,
    WdfExecutionLevelInheritFromParent=1,
    WdfExecutionLevelPassive=2,
    WdfExecutionLevelDispatch=3
};

enum _WDF_SYNCHRONIZATION_SCOPE
{
    WdfSynchronizationScopeInvalid=0,
    WdfSynchronizationScopeInheritFromParent=1,
    WdfSynchronizationScopeDevice=2,
    WdfSynchronizationScopeQueue=3,
    WdfSynchronizationScopeNone=4
};

struct _WDF_OBJECT_ATTRIBUTES// Size=0x38 (Id=143)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    void  ( * EvtCleanupCallback)(void * );// Offset=0x8 Size=0x8
    void  ( * EvtDestroyCallback)(void * );// Offset=0x10 Size=0x8
    enum _WDF_EXECUTION_LEVEL ExecutionLevel;// Offset=0x18 Size=0x4
    enum _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope;// Offset=0x1c Size=0x4
    void * ParentObject;// Offset=0x20 Size=0x8
    unsigned long long ContextSizeOverride;// Offset=0x28 Size=0x8
    struct _WDF_OBJECT_CONTEXT_TYPE_INFO * ContextTypeInfo;// Offset=0x30 Size=0x8
};
