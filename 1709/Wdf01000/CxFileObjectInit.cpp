enum _WDF_FILEOBJECT_CLASS
{
    WdfFileObjectInvalid=0,
    WdfFileObjectNotRequired=1,
    WdfFileObjectWdfCanUseFsContext=2,
    WdfFileObjectWdfCanUseFsContext2=3,
    WdfFileObjectWdfCannotUseFsContexts=4,
    WdfFileObjectCanBeOptional=-2147483648
};

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

struct _WDF_OBJECT_ATTRIBUTES// Size=0x38 (Id=901)
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

enum _WDF_TRI_STATE
{
    WdfFalse=0,
    WdfTrue=1,
    WdfUseDefault=2
};

struct _WDFCX_FILEOBJECT_CONFIG// Size=0x28 (Id=422)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned char  ( * EvtCxDeviceFileCreate)(struct WDFDEVICE__ * ,struct WDFREQUEST__ * ,struct WDFFILEOBJECT__ * );// Offset=0x8 Size=0x8
    void  ( * EvtFileClose)(struct WDFFILEOBJECT__ * );// Offset=0x10 Size=0x8
    void  ( * EvtFileCleanup)(struct WDFFILEOBJECT__ * );// Offset=0x18 Size=0x8
    enum _WDF_TRI_STATE AutoForwardCleanupClose;// Offset=0x20 Size=0x4
    enum _WDF_FILEOBJECT_CLASS FileObjectClass;// Offset=0x24 Size=0x4
};

struct CxFileObjectInit// Size=0x70 (Id=453)
{
    enum _WDF_FILEOBJECT_CLASS Class;// Offset=0x0 Size=0x4
    struct _WDF_OBJECT_ATTRIBUTES Attributes;// Offset=0x8 Size=0x38
    struct _WDFCX_FILEOBJECT_CONFIG Callbacks;// Offset=0x40 Size=0x28
    enum _WDF_TRI_STATE AutoForwardCleanupClose;// Offset=0x68 Size=0x4
    unsigned char Set;// Offset=0x6c Size=0x1
};
