struct _WDF_FDO_EVENT_CALLBACKS// Size=0x20 (Id=695)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    long  ( * EvtDeviceFilterAddResourceRequirements)(struct WDFDEVICE__ * ,struct WDFIORESREQLIST__ * );// Offset=0x8 Size=0x8
    long  ( * EvtDeviceFilterRemoveResourceRequirements)(struct WDFDEVICE__ * ,struct WDFIORESREQLIST__ * );// Offset=0x10 Size=0x8
    long  ( * EvtDeviceRemoveAddedResources)(struct WDFDEVICE__ * ,struct WDFCMRESLIST__ * ,struct WDFCMRESLIST__ * );// Offset=0x18 Size=0x8
};

struct _WDF_CHILD_LIST_CONFIG// Size=0x60 (Id=1089)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long IdentificationDescriptionSize;// Offset=0x4 Size=0x4
    unsigned long AddressDescriptionSize;// Offset=0x8 Size=0x4
    long  ( * EvtChildListCreateDevice)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct WDFDEVICE_INIT * );// Offset=0x10 Size=0x8
    void  ( * EvtChildListScanForChildren)(struct WDFCHILDLIST__ * );// Offset=0x18 Size=0x8
    void  ( * EvtChildListIdentificationDescriptionCopy)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x20 Size=0x8
    long  ( * EvtChildListIdentificationDescriptionDuplicate)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x28 Size=0x8
    void  ( * EvtChildListIdentificationDescriptionCleanup)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x30 Size=0x8
    unsigned char  ( * EvtChildListIdentificationDescriptionCompare)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x38 Size=0x8
    void  ( * EvtChildListAddressDescriptionCopy)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x40 Size=0x8
    long  ( * EvtChildListAddressDescriptionDuplicate)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x48 Size=0x8
    void  ( * EvtChildListAddressDescriptionCleanup)(struct WDFCHILDLIST__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x50 Size=0x8
    unsigned char  ( * EvtChildListDeviceReenumerated)(struct WDFCHILDLIST__ * ,struct WDFDEVICE__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x58 Size=0x8
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

struct _WDF_OBJECT_ATTRIBUTES// Size=0x38 (Id=956)
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

struct FdoInit// Size=0xc8 (Id=884)
{
    void FdoInit();
    struct _WDF_FDO_EVENT_CALLBACKS EventCallbacks;// Offset=0x0 Size=0x20
    struct _WDF_CHILD_LIST_CONFIG ListConfig;// Offset=0x20 Size=0x60
    struct _WDF_OBJECT_ATTRIBUTES ListConfigAttributes;// Offset=0x80 Size=0x38
    unsigned char Filter;// Offset=0xb8 Size=0x1
    struct _DEVICE_OBJECT * PhysicalDevice;// Offset=0xc0 Size=0x8
};
