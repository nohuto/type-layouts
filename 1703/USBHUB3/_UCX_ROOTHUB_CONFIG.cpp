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

struct _WDF_OBJECT_ATTRIBUTES// Size=0x38 (Id=128)
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

struct _UCX_ROOTHUB_CONFIG// Size=0xa0 (Id=310)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long NumberOfPresentedControlUrbCallbacks;// Offset=0x4 Size=0x4
    void  ( * EvtRootHubClearHubFeature)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x8 Size=0x8
    void  ( * EvtRootHubClearPortFeature)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x10 Size=0x8
    void  ( * EvtRootHubGetHubStatus)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x18 Size=0x8
    void  ( * EvtRootHubGetPortStatus)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x20 Size=0x8
    void  ( * EvtRootHubSetHubFeature)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x28 Size=0x8
    void  ( * EvtRootHubSetPortFeature)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x30 Size=0x8
    void  ( * EvtRootHubGetPortErrorCount)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x38 Size=0x8
    void  ( * EvtRootHubControlUrb)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x40 Size=0x8
    void  ( * EvtRootHubInterruptTx)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x48 Size=0x8
    void  ( * EvtRootHubGetInfo)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x50 Size=0x8
    void  ( * EvtRootHubGet20PortInfo)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x58 Size=0x8
    void  ( * EvtRootHubGet30PortInfo)(struct UCXROOTHUB__ * ,struct WDFREQUEST__ * );// Offset=0x60 Size=0x8
    struct _WDF_OBJECT_ATTRIBUTES WdfRequestAttributes;// Offset=0x68 Size=0x38
};
