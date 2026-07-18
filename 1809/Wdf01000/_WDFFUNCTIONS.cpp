struct _WDFFUNCTIONS// Size=0xe28 (Id=581)
{
    long  ( * pfnWdfChildListCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_CHILD_LIST_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFCHILDLIST__ ** );// Offset=0x0 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfChildListGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * );// Offset=0x8 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfChildListRetrievePdo)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_RETRIEVE_INFO * );// Offset=0x10 Size=0x8
    long  ( * pfnWdfChildListRetrieveAddressDescription)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x18 Size=0x8
    void  ( * pfnWdfChildListBeginScan)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * );// Offset=0x20 Size=0x8
    void  ( * pfnWdfChildListEndScan)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * );// Offset=0x28 Size=0x8
    void  ( * pfnWdfChildListBeginIteration)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_LIST_ITERATOR * );// Offset=0x30 Size=0x8
    long  ( * pfnWdfChildListRetrieveNextDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_LIST_ITERATOR * ,struct WDFDEVICE__ ** ,struct _WDF_CHILD_RETRIEVE_INFO * );// Offset=0x38 Size=0x8
    void  ( * pfnWdfChildListEndIteration)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_LIST_ITERATOR * );// Offset=0x40 Size=0x8
    long  ( * pfnWdfChildListAddOrUpdateChildDescriptionAsPresent)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x48 Size=0x8
    long  ( * pfnWdfChildListUpdateChildDescriptionAsMissing)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x50 Size=0x8
    void  ( * pfnWdfChildListUpdateAllChildDescriptionsAsPresent)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * );// Offset=0x58 Size=0x8
    unsigned char  ( * pfnWdfChildListRequestChildEject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCHILDLIST__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x60 Size=0x8
    long  ( * pfnWdfCollectionCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFCOLLECTION__ ** );// Offset=0x68 Size=0x8
    unsigned long  ( * pfnWdfCollectionGetCount)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOLLECTION__ * );// Offset=0x70 Size=0x8
    long  ( * pfnWdfCollectionAdd)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOLLECTION__ * ,void * );// Offset=0x78 Size=0x8
    void  ( * pfnWdfCollectionRemove)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOLLECTION__ * ,void * );// Offset=0x80 Size=0x8
    void  ( * pfnWdfCollectionRemoveItem)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOLLECTION__ * ,unsigned long );// Offset=0x88 Size=0x8
    void *  ( * pfnWdfCollectionGetItem)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOLLECTION__ * ,unsigned long );// Offset=0x90 Size=0x8
    void *  ( * pfnWdfCollectionGetFirstItem)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOLLECTION__ * );// Offset=0x98 Size=0x8
    void *  ( * pfnWdfCollectionGetLastItem)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOLLECTION__ * );// Offset=0xa0 Size=0x8
    long  ( * pfnWdfCommonBufferCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * ,unsigned long long ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFCOMMONBUFFER__ ** );// Offset=0xa8 Size=0x8
    void *  ( * pfnWdfCommonBufferGetAlignedVirtualAddress)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOMMONBUFFER__ * );// Offset=0xb0 Size=0x8
    union _LARGE_INTEGER  ( * pfnWdfCommonBufferGetAlignedLogicalAddress)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOMMONBUFFER__ * );// Offset=0xb8 Size=0x8
    unsigned long long  ( * pfnWdfCommonBufferGetLength)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOMMONBUFFER__ * );// Offset=0xc0 Size=0x8
    struct WDFDEVICE_INIT *  ( * pfnWdfControlDeviceInitAllocate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * ,struct _UNICODE_STRING * );// Offset=0xc8 Size=0x8
    void  ( * pfnWdfControlDeviceInitSetShutdownNotification)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,void  ( * )(struct WDFDEVICE__ * ),unsigned char );// Offset=0xd0 Size=0x8
    void  ( * pfnWdfControlFinishInitializing)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0xd8 Size=0x8
    void  ( * pfnWdfDeviceGetDeviceState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_STATE * );// Offset=0xe0 Size=0x8
    void  ( * pfnWdfDeviceSetDeviceState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_STATE * );// Offset=0xe8 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfWdmDeviceGetWdfDeviceHandle)(struct _WDF_DRIVER_GLOBALS * ,struct _DEVICE_OBJECT * );// Offset=0xf0 Size=0x8
    struct _DEVICE_OBJECT *  ( * pfnWdfDeviceWdmGetDeviceObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0xf8 Size=0x8
    struct _DEVICE_OBJECT *  ( * pfnWdfDeviceWdmGetAttachedDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x100 Size=0x8
    struct _DEVICE_OBJECT *  ( * pfnWdfDeviceWdmGetPhysicalDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x108 Size=0x8
    long  ( * pfnWdfDeviceWdmDispatchPreprocessedIrp)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _IRP * );// Offset=0x110 Size=0x8
    long  ( * pfnWdfDeviceAddDependentUsageDeviceObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0x118 Size=0x8
    long  ( * pfnWdfDeviceAddRemovalRelationsPhysicalDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0x120 Size=0x8
    void  ( * pfnWdfDeviceRemoveRemovalRelationsPhysicalDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0x128 Size=0x8
    void  ( * pfnWdfDeviceClearRemovalRelationsDevices)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x130 Size=0x8
    struct WDFDRIVER__ *  ( * pfnWdfDeviceGetDriver)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x138 Size=0x8
    long  ( * pfnWdfDeviceRetrieveDeviceName)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct WDFSTRING__ * );// Offset=0x140 Size=0x8
    long  ( * pfnWdfDeviceAssignMofResourceName)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _UNICODE_STRING * );// Offset=0x148 Size=0x8
    struct WDFIOTARGET__ *  ( * pfnWdfDeviceGetIoTarget)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x150 Size=0x8
    enum _WDF_DEVICE_PNP_STATE  ( * pfnWdfDeviceGetDevicePnpState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x158 Size=0x8
    enum _WDF_DEVICE_POWER_STATE  ( * pfnWdfDeviceGetDevicePowerState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x160 Size=0x8
    enum _WDF_DEVICE_POWER_POLICY_STATE  ( * pfnWdfDeviceGetDevicePowerPolicyState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x168 Size=0x8
    long  ( * pfnWdfDeviceAssignS0IdleSettings)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS * );// Offset=0x170 Size=0x8
    long  ( * pfnWdfDeviceAssignSxWakeSettings)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS * );// Offset=0x178 Size=0x8
    long  ( * pfnWdfDeviceOpenRegistryKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,unsigned long ,unsigned long ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFKEY__ ** );// Offset=0x180 Size=0x8
    void  ( * pfnWdfDeviceSetSpecialFileSupport)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,enum _WDF_SPECIAL_FILE_TYPE ,unsigned char );// Offset=0x188 Size=0x8
    void  ( * pfnWdfDeviceSetCharacteristics)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,unsigned long );// Offset=0x190 Size=0x8
    unsigned long  ( * pfnWdfDeviceGetCharacteristics)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x198 Size=0x8
    unsigned long  ( * pfnWdfDeviceGetAlignmentRequirement)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x1a0 Size=0x8
    void  ( * pfnWdfDeviceSetAlignmentRequirement)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,unsigned long );// Offset=0x1a8 Size=0x8
    void  ( * pfnWdfDeviceInitFree)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0x1b0 Size=0x8
    void  ( * pfnWdfDeviceInitSetPnpPowerEventCallbacks)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_PNPPOWER_EVENT_CALLBACKS * );// Offset=0x1b8 Size=0x8
    void  ( * pfnWdfDeviceInitSetPowerPolicyEventCallbacks)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_POWER_POLICY_EVENT_CALLBACKS * );// Offset=0x1c0 Size=0x8
    void  ( * pfnWdfDeviceInitSetPowerPolicyOwnership)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,unsigned char );// Offset=0x1c8 Size=0x8
    long  ( * pfnWdfDeviceInitRegisterPnpStateChangeCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,enum _WDF_DEVICE_PNP_STATE ,void  ( * )(struct WDFDEVICE__ * ,struct _WDF_DEVICE_PNP_NOTIFICATION_DATA * ),unsigned long );// Offset=0x1d0 Size=0x8
    long  ( * pfnWdfDeviceInitRegisterPowerStateChangeCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,enum _WDF_DEVICE_POWER_STATE ,void  ( * )(struct WDFDEVICE__ * ,struct _WDF_DEVICE_POWER_NOTIFICATION_DATA * ),unsigned long );// Offset=0x1d8 Size=0x8
    long  ( * pfnWdfDeviceInitRegisterPowerPolicyStateChangeCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,enum _WDF_DEVICE_POWER_POLICY_STATE ,void  ( * )(struct WDFDEVICE__ * ,struct _WDF_DEVICE_POWER_POLICY_NOTIFICATION_DATA * ),unsigned long );// Offset=0x1e0 Size=0x8
    void  ( * pfnWdfDeviceInitSetIoType)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,enum _WDF_DEVICE_IO_TYPE );// Offset=0x1e8 Size=0x8
    void  ( * pfnWdfDeviceInitSetExclusive)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,unsigned char );// Offset=0x1f0 Size=0x8
    void  ( * pfnWdfDeviceInitSetPowerNotPageable)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0x1f8 Size=0x8
    void  ( * pfnWdfDeviceInitSetPowerPageable)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0x200 Size=0x8
    void  ( * pfnWdfDeviceInitSetPowerInrush)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0x208 Size=0x8
    void  ( * pfnWdfDeviceInitSetDeviceType)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,unsigned long );// Offset=0x210 Size=0x8
    long  ( * pfnWdfDeviceInitAssignName)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * );// Offset=0x218 Size=0x8
    long  ( * pfnWdfDeviceInitAssignSDDLString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * );// Offset=0x220 Size=0x8
    void  ( * pfnWdfDeviceInitSetDeviceClass)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _GUID * );// Offset=0x228 Size=0x8
    void  ( * pfnWdfDeviceInitSetCharacteristics)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,unsigned long ,unsigned char );// Offset=0x230 Size=0x8
    void  ( * pfnWdfDeviceInitSetFileObjectConfig)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_FILEOBJECT_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * );// Offset=0x238 Size=0x8
    void  ( * pfnWdfDeviceInitSetRequestAttributes)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_OBJECT_ATTRIBUTES * );// Offset=0x240 Size=0x8
    long  ( * pfnWdfDeviceInitAssignWdmIrpPreprocessCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,long  ( * )(struct WDFDEVICE__ * ,struct _IRP * ),unsigned char ,unsigned char * ,unsigned long );// Offset=0x248 Size=0x8
    void  ( * pfnWdfDeviceInitSetIoInCallerContextCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,void  ( * )(struct WDFDEVICE__ * ,struct WDFREQUEST__ * ));// Offset=0x250 Size=0x8
    long  ( * pfnWdfDeviceCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT ** ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFDEVICE__ ** );// Offset=0x258 Size=0x8
    void  ( * pfnWdfDeviceSetStaticStopRemove)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,unsigned char );// Offset=0x260 Size=0x8
    long  ( * pfnWdfDeviceCreateDeviceInterface)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _GUID * ,struct _UNICODE_STRING * );// Offset=0x268 Size=0x8
    void  ( * pfnWdfDeviceSetDeviceInterfaceState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _GUID * ,struct _UNICODE_STRING * ,unsigned char );// Offset=0x270 Size=0x8
    long  ( * pfnWdfDeviceRetrieveDeviceInterfaceString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _GUID * ,struct _UNICODE_STRING * ,struct WDFSTRING__ * );// Offset=0x278 Size=0x8
    long  ( * pfnWdfDeviceCreateSymbolicLink)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _UNICODE_STRING * );// Offset=0x280 Size=0x8
    long  ( * pfnWdfDeviceQueryProperty)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,enum DEVICE_REGISTRY_PROPERTY ,unsigned long ,void * ,unsigned long * );// Offset=0x288 Size=0x8
    long  ( * pfnWdfDeviceAllocAndQueryProperty)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,enum DEVICE_REGISTRY_PROPERTY ,enum _POOL_TYPE ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** );// Offset=0x290 Size=0x8
    void  ( * pfnWdfDeviceSetPnpCapabilities)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_PNP_CAPABILITIES * );// Offset=0x298 Size=0x8
    void  ( * pfnWdfDeviceSetPowerCapabilities)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_POWER_CAPABILITIES * );// Offset=0x2a0 Size=0x8
    void  ( * pfnWdfDeviceSetBusInformationForChildren)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _PNP_BUS_INFORMATION * );// Offset=0x2a8 Size=0x8
    long  ( * pfnWdfDeviceIndicateWakeStatus)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,long );// Offset=0x2b0 Size=0x8
    void  ( * pfnWdfDeviceSetFailed)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,enum _WDF_DEVICE_FAILED_ACTION );// Offset=0x2b8 Size=0x8
    long  ( * pfnWdfDeviceStopIdleNoTrack)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,unsigned char );// Offset=0x2c0 Size=0x8
    void  ( * pfnWdfDeviceResumeIdleNoTrack)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x2c8 Size=0x8
    struct WDFFILEOBJECT__ *  ( * pfnWdfDeviceGetFileObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _FILE_OBJECT * );// Offset=0x2d0 Size=0x8
    long  ( * pfnWdfDeviceEnqueueRequest)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct WDFREQUEST__ * );// Offset=0x2d8 Size=0x8
    struct WDFQUEUE__ *  ( * pfnWdfDeviceGetDefaultQueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x2e0 Size=0x8
    long  ( * pfnWdfDeviceConfigureRequestDispatching)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct WDFQUEUE__ * ,enum _WDF_REQUEST_TYPE );// Offset=0x2e8 Size=0x8
    long  ( * pfnWdfDmaEnablerCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DMA_ENABLER_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFDMAENABLER__ ** );// Offset=0x2f0 Size=0x8
    unsigned long long  ( * pfnWdfDmaEnablerGetMaximumLength)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * );// Offset=0x2f8 Size=0x8
    unsigned long long  ( * pfnWdfDmaEnablerGetMaximumScatterGatherElements)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * );// Offset=0x300 Size=0x8
    void  ( * pfnWdfDmaEnablerSetMaximumScatterGatherElements)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * ,unsigned long long );// Offset=0x308 Size=0x8
    long  ( * pfnWdfDmaTransactionCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFDMATRANSACTION__ ** );// Offset=0x310 Size=0x8
    long  ( * pfnWdfDmaTransactionInitialize)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned char  ( * )(struct WDFDMATRANSACTION__ * ,struct WDFDEVICE__ * ,void * ,enum _WDF_DMA_DIRECTION ,struct _SCATTER_GATHER_LIST * ),enum _WDF_DMA_DIRECTION ,struct _MDL * ,void * ,unsigned long long );// Offset=0x318 Size=0x8
    long  ( * pfnWdfDmaTransactionInitializeUsingRequest)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,struct WDFREQUEST__ * ,unsigned char  ( * )(struct WDFDMATRANSACTION__ * ,struct WDFDEVICE__ * ,void * ,enum _WDF_DMA_DIRECTION ,struct _SCATTER_GATHER_LIST * ),enum _WDF_DMA_DIRECTION );// Offset=0x320 Size=0x8
    long  ( * pfnWdfDmaTransactionExecute)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,void * );// Offset=0x328 Size=0x8
    long  ( * pfnWdfDmaTransactionRelease)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0x330 Size=0x8
    unsigned char  ( * pfnWdfDmaTransactionDmaCompleted)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,long * );// Offset=0x338 Size=0x8
    unsigned char  ( * pfnWdfDmaTransactionDmaCompletedWithLength)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned long long ,long * );// Offset=0x340 Size=0x8
    unsigned char  ( * pfnWdfDmaTransactionDmaCompletedFinal)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned long long ,long * );// Offset=0x348 Size=0x8
    unsigned long long  ( * pfnWdfDmaTransactionGetBytesTransferred)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0x350 Size=0x8
    void  ( * pfnWdfDmaTransactionSetMaximumLength)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned long long );// Offset=0x358 Size=0x8
    struct WDFREQUEST__ *  ( * pfnWdfDmaTransactionGetRequest)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0x360 Size=0x8
    unsigned long long  ( * pfnWdfDmaTransactionGetCurrentDmaTransferLength)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0x368 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfDmaTransactionGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0x370 Size=0x8
    long  ( * pfnWdfDpcCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_DPC_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFDPC__ ** );// Offset=0x378 Size=0x8
    unsigned char  ( * pfnWdfDpcEnqueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDPC__ * );// Offset=0x380 Size=0x8
    unsigned char  ( * pfnWdfDpcCancel)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDPC__ * ,unsigned char );// Offset=0x388 Size=0x8
    void *  ( * pfnWdfDpcGetParentObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDPC__ * );// Offset=0x390 Size=0x8
    struct _KDPC *  ( * pfnWdfDpcWdmGetDpc)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDPC__ * );// Offset=0x398 Size=0x8
    long  ( * pfnWdfDriverCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _DRIVER_OBJECT * ,struct _UNICODE_STRING * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct _WDF_DRIVER_CONFIG * ,struct WDFDRIVER__ ** );// Offset=0x3a0 Size=0x8
    wchar_t *  ( * pfnWdfDriverGetRegistryPath)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * );// Offset=0x3a8 Size=0x8
    struct _DRIVER_OBJECT *  ( * pfnWdfDriverWdmGetDriverObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * );// Offset=0x3b0 Size=0x8
    long  ( * pfnWdfDriverOpenParametersRegistryKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * ,unsigned long ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFKEY__ ** );// Offset=0x3b8 Size=0x8
    struct WDFDRIVER__ *  ( * pfnWdfWdmDriverGetWdfDriverHandle)(struct _WDF_DRIVER_GLOBALS * ,struct _DRIVER_OBJECT * );// Offset=0x3c0 Size=0x8
    long  ( * pfnWdfDriverRegisterTraceInfo)(struct _WDF_DRIVER_GLOBALS * ,struct _DRIVER_OBJECT * ,long  ( * )(unsigned char ,void * ,unsigned long ,void * ,void * ,unsigned long * ),void * );// Offset=0x3c8 Size=0x8
    long  ( * pfnWdfDriverRetrieveVersionString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * ,struct WDFSTRING__ * );// Offset=0x3d0 Size=0x8
    unsigned char  ( * pfnWdfDriverIsVersionAvailable)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * ,struct _WDF_DRIVER_VERSION_AVAILABLE_PARAMS * );// Offset=0x3d8 Size=0x8
    struct _DEVICE_OBJECT *  ( * pfnWdfFdoInitWdmGetPhysicalDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0x3e0 Size=0x8
    long  ( * pfnWdfFdoInitOpenRegistryKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,unsigned long ,unsigned long ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFKEY__ ** );// Offset=0x3e8 Size=0x8
    long  ( * pfnWdfFdoInitQueryProperty)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,enum DEVICE_REGISTRY_PROPERTY ,unsigned long ,void * ,unsigned long * );// Offset=0x3f0 Size=0x8
    long  ( * pfnWdfFdoInitAllocAndQueryProperty)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,enum DEVICE_REGISTRY_PROPERTY ,enum _POOL_TYPE ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** );// Offset=0x3f8 Size=0x8
    void  ( * pfnWdfFdoInitSetEventCallbacks)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_FDO_EVENT_CALLBACKS * );// Offset=0x400 Size=0x8
    void  ( * pfnWdfFdoInitSetFilter)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0x408 Size=0x8
    void  ( * pfnWdfFdoInitSetDefaultChildListConfig)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_CHILD_LIST_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * );// Offset=0x410 Size=0x8
    long  ( * pfnWdfFdoQueryForInterface)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _GUID * ,struct _INTERFACE * ,unsigned short ,unsigned short ,void * );// Offset=0x418 Size=0x8
    struct WDFCHILDLIST__ *  ( * pfnWdfFdoGetDefaultChildList)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x420 Size=0x8
    long  ( * pfnWdfFdoAddStaticChild)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct WDFDEVICE__ * );// Offset=0x428 Size=0x8
    void  ( * pfnWdfFdoLockStaticChildListForIteration)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x430 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfFdoRetrieveNextStaticChild)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct WDFDEVICE__ * ,unsigned long );// Offset=0x438 Size=0x8
    void  ( * pfnWdfFdoUnlockStaticChildListFromIteration)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x440 Size=0x8
    struct _UNICODE_STRING *  ( * pfnWdfFileObjectGetFileName)(struct _WDF_DRIVER_GLOBALS * ,struct WDFFILEOBJECT__ * );// Offset=0x448 Size=0x8
    unsigned long  ( * pfnWdfFileObjectGetFlags)(struct _WDF_DRIVER_GLOBALS * ,struct WDFFILEOBJECT__ * );// Offset=0x450 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfFileObjectGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFFILEOBJECT__ * );// Offset=0x458 Size=0x8
    struct _FILE_OBJECT *  ( * pfnWdfFileObjectWdmGetFileObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFFILEOBJECT__ * );// Offset=0x460 Size=0x8
    long  ( * pfnWdfInterruptCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_INTERRUPT_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFINTERRUPT__ ** );// Offset=0x468 Size=0x8
    unsigned char  ( * pfnWdfInterruptQueueDpcForIsr)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0x470 Size=0x8
    unsigned char  ( * pfnWdfInterruptSynchronize)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * ,unsigned char  ( * )(struct WDFINTERRUPT__ * ,void * ),void * );// Offset=0x478 Size=0x8
    void  ( * pfnWdfInterruptAcquireLock)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0x480 Size=0x8
    void  ( * pfnWdfInterruptReleaseLock)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0x488 Size=0x8
    void  ( * pfnWdfInterruptEnable)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0x490 Size=0x8
    void  ( * pfnWdfInterruptDisable)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0x498 Size=0x8
    struct _KINTERRUPT *  ( * pfnWdfInterruptWdmGetInterrupt)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0x4a0 Size=0x8
    void  ( * pfnWdfInterruptGetInfo)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * ,struct _WDF_INTERRUPT_INFO * );// Offset=0x4a8 Size=0x8
    void  ( * pfnWdfInterruptSetPolicy)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * ,enum _WDF_INTERRUPT_POLICY ,enum _WDF_INTERRUPT_PRIORITY ,unsigned long long );// Offset=0x4b0 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfInterruptGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0x4b8 Size=0x8
    long  ( * pfnWdfIoQueueCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_IO_QUEUE_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFQUEUE__ ** );// Offset=0x4c0 Size=0x8
    enum _WDF_IO_QUEUE_STATE  ( * pfnWdfIoQueueGetState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,unsigned long * ,unsigned long * );// Offset=0x4c8 Size=0x8
    void  ( * pfnWdfIoQueueStart)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * );// Offset=0x4d0 Size=0x8
    void  ( * pfnWdfIoQueueStop)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,void  ( * )(struct WDFQUEUE__ * ,void * ),void * );// Offset=0x4d8 Size=0x8
    void  ( * pfnWdfIoQueueStopSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * );// Offset=0x4e0 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfIoQueueGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * );// Offset=0x4e8 Size=0x8
    long  ( * pfnWdfIoQueueRetrieveNextRequest)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,struct WDFREQUEST__ ** );// Offset=0x4f0 Size=0x8
    long  ( * pfnWdfIoQueueRetrieveRequestByFileObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,struct WDFFILEOBJECT__ * ,struct WDFREQUEST__ ** );// Offset=0x4f8 Size=0x8
    long  ( * pfnWdfIoQueueFindRequest)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,struct WDFREQUEST__ * ,struct WDFFILEOBJECT__ * ,struct _WDF_REQUEST_PARAMETERS * ,struct WDFREQUEST__ ** );// Offset=0x500 Size=0x8
    long  ( * pfnWdfIoQueueRetrieveFoundRequest)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,struct WDFREQUEST__ * ,struct WDFREQUEST__ ** );// Offset=0x508 Size=0x8
    void  ( * pfnWdfIoQueueDrainSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * );// Offset=0x510 Size=0x8
    void  ( * pfnWdfIoQueueDrain)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,void  ( * )(struct WDFQUEUE__ * ,void * ),void * );// Offset=0x518 Size=0x8
    void  ( * pfnWdfIoQueuePurgeSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * );// Offset=0x520 Size=0x8
    void  ( * pfnWdfIoQueuePurge)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,void  ( * )(struct WDFQUEUE__ * ,void * ),void * );// Offset=0x528 Size=0x8
    long  ( * pfnWdfIoQueueReadyNotify)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,void  ( * )(struct WDFQUEUE__ * ,void * ),void * );// Offset=0x530 Size=0x8
    long  ( * pfnWdfIoTargetCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFIOTARGET__ ** );// Offset=0x538 Size=0x8
    long  ( * pfnWdfIoTargetOpen)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct _WDF_IO_TARGET_OPEN_PARAMS * );// Offset=0x540 Size=0x8
    void  ( * pfnWdfIoTargetCloseForQueryRemove)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x548 Size=0x8
    void  ( * pfnWdfIoTargetClose)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x550 Size=0x8
    long  ( * pfnWdfIoTargetStart)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x558 Size=0x8
    void  ( * pfnWdfIoTargetStop)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,enum _WDF_IO_TARGET_SENT_IO_ACTION );// Offset=0x560 Size=0x8
    enum _WDF_IO_TARGET_STATE  ( * pfnWdfIoTargetGetState)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x568 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfIoTargetGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x570 Size=0x8
    long  ( * pfnWdfIoTargetQueryTargetProperty)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,enum DEVICE_REGISTRY_PROPERTY ,unsigned long ,void * ,unsigned long * );// Offset=0x578 Size=0x8
    long  ( * pfnWdfIoTargetAllocAndQueryTargetProperty)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,enum DEVICE_REGISTRY_PROPERTY ,enum _POOL_TYPE ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** );// Offset=0x580 Size=0x8
    long  ( * pfnWdfIoTargetQueryForInterface)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct _GUID * ,struct _INTERFACE * ,unsigned short ,unsigned short ,void * );// Offset=0x588 Size=0x8
    struct _DEVICE_OBJECT *  ( * pfnWdfIoTargetWdmGetTargetDeviceObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x590 Size=0x8
    struct _DEVICE_OBJECT *  ( * pfnWdfIoTargetWdmGetTargetPhysicalDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x598 Size=0x8
    struct _FILE_OBJECT *  ( * pfnWdfIoTargetWdmGetTargetFileObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x5a0 Size=0x8
    void *  ( * pfnWdfIoTargetWdmGetTargetFileHandle)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * );// Offset=0x5a8 Size=0x8
    long  ( * pfnWdfIoTargetSendReadSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,struct _WDF_MEMORY_DESCRIPTOR * ,long long * ,struct _WDF_REQUEST_SEND_OPTIONS * ,unsigned long long * );// Offset=0x5b0 Size=0x8
    long  ( * pfnWdfIoTargetFormatRequestForRead)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * ,long long * );// Offset=0x5b8 Size=0x8
    long  ( * pfnWdfIoTargetSendWriteSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,struct _WDF_MEMORY_DESCRIPTOR * ,long long * ,struct _WDF_REQUEST_SEND_OPTIONS * ,unsigned long long * );// Offset=0x5c0 Size=0x8
    long  ( * pfnWdfIoTargetFormatRequestForWrite)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * ,long long * );// Offset=0x5c8 Size=0x8
    long  ( * pfnWdfIoTargetSendIoctlSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,unsigned long ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_REQUEST_SEND_OPTIONS * ,unsigned long long * );// Offset=0x5d0 Size=0x8
    long  ( * pfnWdfIoTargetFormatRequestForIoctl)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,unsigned long ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0x5d8 Size=0x8
    long  ( * pfnWdfIoTargetSendInternalIoctlSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,unsigned long ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_REQUEST_SEND_OPTIONS * ,unsigned long long * );// Offset=0x5e0 Size=0x8
    long  ( * pfnWdfIoTargetFormatRequestForInternalIoctl)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,unsigned long ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0x5e8 Size=0x8
    long  ( * pfnWdfIoTargetSendInternalIoctlOthersSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,unsigned long ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_REQUEST_SEND_OPTIONS * ,unsigned long long * );// Offset=0x5f0 Size=0x8
    long  ( * pfnWdfIoTargetFormatRequestForInternalIoctlOthers)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ * ,unsigned long ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0x5f8 Size=0x8
    long  ( * pfnWdfMemoryCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,enum _POOL_TYPE ,unsigned long ,unsigned long long ,struct WDFMEMORY__ ** ,void ** );// Offset=0x600 Size=0x8
    long  ( * pfnWdfMemoryCreatePreallocated)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,void * ,unsigned long long ,struct WDFMEMORY__ ** );// Offset=0x608 Size=0x8
    void *  ( * pfnWdfMemoryGetBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFMEMORY__ * ,unsigned long long * );// Offset=0x610 Size=0x8
    long  ( * pfnWdfMemoryAssignBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFMEMORY__ * ,void * ,unsigned long long );// Offset=0x618 Size=0x8
    long  ( * pfnWdfMemoryCopyToBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFMEMORY__ * ,unsigned long long ,void * ,unsigned long long );// Offset=0x620 Size=0x8
    long  ( * pfnWdfMemoryCopyFromBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFMEMORY__ * ,unsigned long long ,void * ,unsigned long long );// Offset=0x628 Size=0x8
    long  ( * pfnWdfLookasideListCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,unsigned long long ,enum _POOL_TYPE ,struct _WDF_OBJECT_ATTRIBUTES * ,unsigned long ,struct WDFLOOKASIDE__ ** );// Offset=0x630 Size=0x8
    long  ( * pfnWdfMemoryCreateFromLookaside)(struct _WDF_DRIVER_GLOBALS * ,struct WDFLOOKASIDE__ * ,struct WDFMEMORY__ ** );// Offset=0x638 Size=0x8
    long  ( * pfnWdfDeviceMiniportCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct _DEVICE_OBJECT * ,struct _DEVICE_OBJECT * ,struct _DEVICE_OBJECT * ,struct WDFDEVICE__ ** );// Offset=0x640 Size=0x8
    void  ( * pfnWdfDriverMiniportUnload)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * );// Offset=0x648 Size=0x8
    void *  ( * pfnWdfObjectGetTypedContextWorker)(struct _WDF_DRIVER_GLOBALS * ,void * ,struct _WDF_OBJECT_CONTEXT_TYPE_INFO * );// Offset=0x650 Size=0x8
    long  ( * pfnWdfObjectAllocateContext)(struct _WDF_DRIVER_GLOBALS * ,void * ,struct _WDF_OBJECT_ATTRIBUTES * ,void ** );// Offset=0x658 Size=0x8
    void *  ( * pfnWdfObjectContextGetObject)(struct _WDF_DRIVER_GLOBALS * ,void * );// Offset=0x660 Size=0x8
    void  ( * pfnWdfObjectReferenceActual)(struct _WDF_DRIVER_GLOBALS * ,void * ,void * ,long ,char * );// Offset=0x668 Size=0x8
    void  ( * pfnWdfObjectDereferenceActual)(struct _WDF_DRIVER_GLOBALS * ,void * ,void * ,long ,char * );// Offset=0x670 Size=0x8
    long  ( * pfnWdfObjectCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,void ** );// Offset=0x678 Size=0x8
    void  ( * pfnWdfObjectDelete)(struct _WDF_DRIVER_GLOBALS * ,void * );// Offset=0x680 Size=0x8
    long  ( * pfnWdfObjectQuery)(struct _WDF_DRIVER_GLOBALS * ,void * ,struct _GUID * ,unsigned long ,void * );// Offset=0x688 Size=0x8
    struct WDFDEVICE_INIT *  ( * pfnWdfPdoInitAllocate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x690 Size=0x8
    void  ( * pfnWdfPdoInitSetEventCallbacks)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_PDO_EVENT_CALLBACKS * );// Offset=0x698 Size=0x8
    long  ( * pfnWdfPdoInitAssignDeviceID)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * );// Offset=0x6a0 Size=0x8
    long  ( * pfnWdfPdoInitAssignInstanceID)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * );// Offset=0x6a8 Size=0x8
    long  ( * pfnWdfPdoInitAddHardwareID)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * );// Offset=0x6b0 Size=0x8
    long  ( * pfnWdfPdoInitAddCompatibleID)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * );// Offset=0x6b8 Size=0x8
    long  ( * pfnWdfPdoInitAddDeviceText)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * ,struct _UNICODE_STRING * ,unsigned long );// Offset=0x6c0 Size=0x8
    void  ( * pfnWdfPdoInitSetDefaultLocale)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,unsigned long );// Offset=0x6c8 Size=0x8
    long  ( * pfnWdfPdoInitAssignRawDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _GUID * );// Offset=0x6d0 Size=0x8
    long  ( * pfnWdfPdoMarkMissing)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x6d8 Size=0x8
    void  ( * pfnWdfPdoRequestEject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x6e0 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfPdoGetParent)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x6e8 Size=0x8
    long  ( * pfnWdfPdoRetrieveIdentificationDescription)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER * );// Offset=0x6f0 Size=0x8
    long  ( * pfnWdfPdoRetrieveAddressDescription)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x6f8 Size=0x8
    long  ( * pfnWdfPdoUpdateAddressDescription)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER * );// Offset=0x700 Size=0x8
    long  ( * pfnWdfPdoAddEjectionRelationsPhysicalDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0x708 Size=0x8
    void  ( * pfnWdfPdoRemoveEjectionRelationsPhysicalDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0x710 Size=0x8
    void  ( * pfnWdfPdoClearEjectionRelationsDevices)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0x718 Size=0x8
    long  ( * pfnWdfDeviceAddQueryInterface)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_QUERY_INTERFACE_CONFIG * );// Offset=0x720 Size=0x8
    long  ( * pfnWdfRegistryOpenKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,unsigned long ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFKEY__ ** );// Offset=0x728 Size=0x8
    long  ( * pfnWdfRegistryCreateKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,unsigned long ,unsigned long ,unsigned long * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFKEY__ ** );// Offset=0x730 Size=0x8
    void  ( * pfnWdfRegistryClose)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * );// Offset=0x738 Size=0x8
    void *  ( * pfnWdfRegistryWdmGetHandle)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * );// Offset=0x740 Size=0x8
    long  ( * pfnWdfRegistryRemoveKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * );// Offset=0x748 Size=0x8
    long  ( * pfnWdfRegistryRemoveValue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * );// Offset=0x750 Size=0x8
    long  ( * pfnWdfRegistryQueryValue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,unsigned long ,void * ,unsigned long * ,unsigned long * );// Offset=0x758 Size=0x8
    long  ( * pfnWdfRegistryQueryMemory)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,enum _POOL_TYPE ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** ,unsigned long * );// Offset=0x760 Size=0x8
    long  ( * pfnWdfRegistryQueryMultiString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFCOLLECTION__ * );// Offset=0x768 Size=0x8
    long  ( * pfnWdfRegistryQueryUnicodeString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,wchar_t * ,struct _UNICODE_STRING * );// Offset=0x770 Size=0x8
    long  ( * pfnWdfRegistryQueryString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,struct WDFSTRING__ * );// Offset=0x778 Size=0x8
    long  ( * pfnWdfRegistryQueryULong)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,unsigned long * );// Offset=0x780 Size=0x8
    long  ( * pfnWdfRegistryAssignValue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,unsigned long ,unsigned long ,void * );// Offset=0x788 Size=0x8
    long  ( * pfnWdfRegistryAssignMemory)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,unsigned long ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0x790 Size=0x8
    long  ( * pfnWdfRegistryAssignMultiString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,struct WDFCOLLECTION__ * );// Offset=0x798 Size=0x8
    long  ( * pfnWdfRegistryAssignUnicodeString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,struct _UNICODE_STRING * );// Offset=0x7a0 Size=0x8
    long  ( * pfnWdfRegistryAssignString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,struct WDFSTRING__ * );// Offset=0x7a8 Size=0x8
    long  ( * pfnWdfRegistryAssignULong)(struct _WDF_DRIVER_GLOBALS * ,struct WDFKEY__ * ,struct _UNICODE_STRING * ,unsigned long );// Offset=0x7b0 Size=0x8
    long  ( * pfnWdfRequestCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFIOTARGET__ * ,struct WDFREQUEST__ ** );// Offset=0x7b8 Size=0x8
    long  ( * pfnWdfRequestCreateFromIrp)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct _IRP * ,unsigned char ,struct WDFREQUEST__ ** );// Offset=0x7c0 Size=0x8
    long  ( * pfnWdfRequestReuse)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_REUSE_PARAMS * );// Offset=0x7c8 Size=0x8
    long  ( * pfnWdfRequestChangeTarget)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct WDFIOTARGET__ * );// Offset=0x7d0 Size=0x8
    void  ( * pfnWdfRequestFormatRequestUsingCurrentType)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x7d8 Size=0x8
    void  ( * pfnWdfRequestWdmFormatUsingStackLocation)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct _IO_STACK_LOCATION * );// Offset=0x7e0 Size=0x8
    unsigned char  ( * pfnWdfRequestSend)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct WDFIOTARGET__ * ,struct _WDF_REQUEST_SEND_OPTIONS * );// Offset=0x7e8 Size=0x8
    long  ( * pfnWdfRequestGetStatus)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x7f0 Size=0x8
    void  ( * pfnWdfRequestMarkCancelable)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,void  ( * )(struct WDFREQUEST__ * ));// Offset=0x7f8 Size=0x8
    long  ( * pfnWdfRequestUnmarkCancelable)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x800 Size=0x8
    unsigned char  ( * pfnWdfRequestIsCanceled)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x808 Size=0x8
    unsigned char  ( * pfnWdfRequestCancelSentRequest)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x810 Size=0x8
    unsigned char  ( * pfnWdfRequestIsFrom32BitProcess)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x818 Size=0x8
    void  ( * pfnWdfRequestSetCompletionRoutine)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,void  ( * )(struct WDFREQUEST__ * ,struct WDFIOTARGET__ * ,struct _WDF_REQUEST_COMPLETION_PARAMS * ,void * ),void * );// Offset=0x820 Size=0x8
    void  ( * pfnWdfRequestGetCompletionParams)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_COMPLETION_PARAMS * );// Offset=0x828 Size=0x8
    long  ( * pfnWdfRequestAllocateTimer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x830 Size=0x8
    void  ( * pfnWdfRequestComplete)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,long );// Offset=0x838 Size=0x8
    void  ( * pfnWdfRequestCompleteWithPriorityBoost)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,long ,char );// Offset=0x840 Size=0x8
    void  ( * pfnWdfRequestCompleteWithInformation)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,long ,unsigned long long );// Offset=0x848 Size=0x8
    void  ( * pfnWdfRequestGetParameters)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_PARAMETERS * );// Offset=0x850 Size=0x8
    long  ( * pfnWdfRequestRetrieveInputMemory)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ ** );// Offset=0x858 Size=0x8
    long  ( * pfnWdfRequestRetrieveOutputMemory)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ ** );// Offset=0x860 Size=0x8
    long  ( * pfnWdfRequestRetrieveInputBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,unsigned long long ,void ** ,unsigned long long * );// Offset=0x868 Size=0x8
    long  ( * pfnWdfRequestRetrieveOutputBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,unsigned long long ,void ** ,unsigned long long * );// Offset=0x870 Size=0x8
    long  ( * pfnWdfRequestRetrieveInputWdmMdl)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct _MDL ** );// Offset=0x878 Size=0x8
    long  ( * pfnWdfRequestRetrieveOutputWdmMdl)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct _MDL ** );// Offset=0x880 Size=0x8
    long  ( * pfnWdfRequestRetrieveUnsafeUserInputBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,unsigned long long ,void ** ,unsigned long long * );// Offset=0x888 Size=0x8
    long  ( * pfnWdfRequestRetrieveUnsafeUserOutputBuffer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,unsigned long long ,void ** ,unsigned long long * );// Offset=0x890 Size=0x8
    void  ( * pfnWdfRequestSetInformation)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,unsigned long long );// Offset=0x898 Size=0x8
    unsigned long long  ( * pfnWdfRequestGetInformation)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x8a0 Size=0x8
    struct WDFFILEOBJECT__ *  ( * pfnWdfRequestGetFileObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x8a8 Size=0x8
    long  ( * pfnWdfRequestProbeAndLockUserBufferForRead)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,void * ,unsigned long long ,struct WDFMEMORY__ ** );// Offset=0x8b0 Size=0x8
    long  ( * pfnWdfRequestProbeAndLockUserBufferForWrite)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,void * ,unsigned long long ,struct WDFMEMORY__ ** );// Offset=0x8b8 Size=0x8
    char  ( * pfnWdfRequestGetRequestorMode)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x8c0 Size=0x8
    long  ( * pfnWdfRequestForwardToIoQueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct WDFQUEUE__ * );// Offset=0x8c8 Size=0x8
    struct WDFQUEUE__ *  ( * pfnWdfRequestGetIoQueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x8d0 Size=0x8
    long  ( * pfnWdfRequestRequeue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x8d8 Size=0x8
    void  ( * pfnWdfRequestStopAcknowledge)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,unsigned char );// Offset=0x8e0 Size=0x8
    struct _IRP *  ( * pfnWdfRequestWdmGetIrp)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0x8e8 Size=0x8
    void  ( * pfnWdfIoResourceRequirementsListSetSlotNumber)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,unsigned long );// Offset=0x8f0 Size=0x8
    void  ( * pfnWdfIoResourceRequirementsListSetInterfaceType)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,enum _INTERFACE_TYPE );// Offset=0x8f8 Size=0x8
    long  ( * pfnWdfIoResourceRequirementsListAppendIoResList)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,struct WDFIORESLIST__ * );// Offset=0x900 Size=0x8
    long  ( * pfnWdfIoResourceRequirementsListInsertIoResList)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,struct WDFIORESLIST__ * ,unsigned long );// Offset=0x908 Size=0x8
    unsigned long  ( * pfnWdfIoResourceRequirementsListGetCount)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * );// Offset=0x910 Size=0x8
    struct WDFIORESLIST__ *  ( * pfnWdfIoResourceRequirementsListGetIoResList)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,unsigned long );// Offset=0x918 Size=0x8
    void  ( * pfnWdfIoResourceRequirementsListRemove)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,unsigned long );// Offset=0x920 Size=0x8
    void  ( * pfnWdfIoResourceRequirementsListRemoveByIoResList)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,struct WDFIORESLIST__ * );// Offset=0x928 Size=0x8
    long  ( * pfnWdfIoResourceListCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESREQLIST__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFIORESLIST__ ** );// Offset=0x930 Size=0x8
    long  ( * pfnWdfIoResourceListAppendDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESLIST__ * ,struct _IO_RESOURCE_DESCRIPTOR * );// Offset=0x938 Size=0x8
    long  ( * pfnWdfIoResourceListInsertDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESLIST__ * ,struct _IO_RESOURCE_DESCRIPTOR * ,unsigned long );// Offset=0x940 Size=0x8
    void  ( * pfnWdfIoResourceListUpdateDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESLIST__ * ,struct _IO_RESOURCE_DESCRIPTOR * ,unsigned long );// Offset=0x948 Size=0x8
    unsigned long  ( * pfnWdfIoResourceListGetCount)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESLIST__ * );// Offset=0x950 Size=0x8
    struct _IO_RESOURCE_DESCRIPTOR *  ( * pfnWdfIoResourceListGetDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESLIST__ * ,unsigned long );// Offset=0x958 Size=0x8
    void  ( * pfnWdfIoResourceListRemove)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESLIST__ * ,unsigned long );// Offset=0x960 Size=0x8
    void  ( * pfnWdfIoResourceListRemoveByDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIORESLIST__ * ,struct _IO_RESOURCE_DESCRIPTOR * );// Offset=0x968 Size=0x8
    long  ( * pfnWdfCmResourceListAppendDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCMRESLIST__ * ,struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * );// Offset=0x970 Size=0x8
    long  ( * pfnWdfCmResourceListInsertDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCMRESLIST__ * ,struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * ,unsigned long );// Offset=0x978 Size=0x8
    unsigned long  ( * pfnWdfCmResourceListGetCount)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCMRESLIST__ * );// Offset=0x980 Size=0x8
    struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *  ( * pfnWdfCmResourceListGetDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCMRESLIST__ * ,unsigned long );// Offset=0x988 Size=0x8
    void  ( * pfnWdfCmResourceListRemove)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCMRESLIST__ * ,unsigned long );// Offset=0x990 Size=0x8
    void  ( * pfnWdfCmResourceListRemoveByDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCMRESLIST__ * ,struct _CM_PARTIAL_RESOURCE_DESCRIPTOR * );// Offset=0x998 Size=0x8
    long  ( * pfnWdfStringCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _UNICODE_STRING * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFSTRING__ ** );// Offset=0x9a0 Size=0x8
    void  ( * pfnWdfStringGetUnicodeString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFSTRING__ * ,struct _UNICODE_STRING * );// Offset=0x9a8 Size=0x8
    void  ( * pfnWdfObjectAcquireLock)(struct _WDF_DRIVER_GLOBALS * ,void * );// Offset=0x9b0 Size=0x8
    void  ( * pfnWdfObjectReleaseLock)(struct _WDF_DRIVER_GLOBALS * ,void * );// Offset=0x9b8 Size=0x8
    long  ( * pfnWdfWaitLockCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFWAITLOCK__ ** );// Offset=0x9c0 Size=0x8
    long  ( * pfnWdfWaitLockAcquire)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWAITLOCK__ * ,long long * );// Offset=0x9c8 Size=0x8
    void  ( * pfnWdfWaitLockRelease)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWAITLOCK__ * );// Offset=0x9d0 Size=0x8
    long  ( * pfnWdfSpinLockCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFSPINLOCK__ ** );// Offset=0x9d8 Size=0x8
    void  ( * pfnWdfSpinLockAcquire)(struct _WDF_DRIVER_GLOBALS * ,struct WDFSPINLOCK__ * );// Offset=0x9e0 Size=0x8
    void  ( * pfnWdfSpinLockRelease)(struct _WDF_DRIVER_GLOBALS * ,struct WDFSPINLOCK__ * );// Offset=0x9e8 Size=0x8
    long  ( * pfnWdfTimerCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_TIMER_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFTIMER__ ** );// Offset=0x9f0 Size=0x8
    unsigned char  ( * pfnWdfTimerStart)(struct _WDF_DRIVER_GLOBALS * ,struct WDFTIMER__ * ,long long );// Offset=0x9f8 Size=0x8
    unsigned char  ( * pfnWdfTimerStop)(struct _WDF_DRIVER_GLOBALS * ,struct WDFTIMER__ * ,unsigned char );// Offset=0xa00 Size=0x8
    void *  ( * pfnWdfTimerGetParentObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFTIMER__ * );// Offset=0xa08 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFUSBDEVICE__ ** );// Offset=0xa10 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceRetrieveInformation)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct _WDF_USB_DEVICE_INFORMATION * );// Offset=0xa18 Size=0x8
    void  ( * pfnWdfUsbTargetDeviceGetDeviceDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct _USB_DEVICE_DESCRIPTOR * );// Offset=0xa20 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceRetrieveConfigDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,void * ,wchar_t * );// Offset=0xa28 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceQueryString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * ,wchar_t * ,wchar_t * ,unsigned char ,unsigned short );// Offset=0xa30 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceAllocAndQueryString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** ,wchar_t * ,unsigned char ,unsigned short );// Offset=0xa38 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceFormatRequestForString)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * ,unsigned char ,unsigned short );// Offset=0xa40 Size=0x8
    unsigned char  ( * pfnWdfUsbTargetDeviceGetNumInterfaces)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * );// Offset=0xa48 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceSelectConfig)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct _WDF_USB_DEVICE_SELECT_CONFIG_PARAMS * );// Offset=0xa50 Size=0x8
    void *  ( * pfnWdfUsbTargetDeviceWdmGetConfigurationHandle)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * );// Offset=0xa58 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceRetrieveCurrentFrameNumber)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,unsigned long * );// Offset=0xa60 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceSendControlTransferSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * ,union _WDF_USB_CONTROL_SETUP_PACKET * ,struct _WDF_MEMORY_DESCRIPTOR * ,unsigned long * );// Offset=0xa68 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceFormatRequestForControlTransfer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct WDFREQUEST__ * ,union _WDF_USB_CONTROL_SETUP_PACKET * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0xa70 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceIsConnectedSynchronous)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * );// Offset=0xa78 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceResetPortSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * );// Offset=0xa80 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceCyclePortSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * );// Offset=0xa88 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceFormatRequestForCyclePort)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct WDFREQUEST__ * );// Offset=0xa90 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceSendUrbSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * ,struct _URB * );// Offset=0xa98 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceFormatRequestForUrb)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0xaa0 Size=0x8
    void  ( * pfnWdfUsbTargetPipeGetInformation)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct _WDF_USB_PIPE_INFORMATION * );// Offset=0xaa8 Size=0x8
    unsigned char  ( * pfnWdfUsbTargetPipeIsInEndpoint)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * );// Offset=0xab0 Size=0x8
    unsigned char  ( * pfnWdfUsbTargetPipeIsOutEndpoint)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * );// Offset=0xab8 Size=0x8
    enum _WDF_USB_PIPE_TYPE  ( * pfnWdfUsbTargetPipeGetType)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * );// Offset=0xac0 Size=0x8
    void  ( * pfnWdfUsbTargetPipeSetNoMaximumPacketSizeCheck)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * );// Offset=0xac8 Size=0x8
    long  ( * pfnWdfUsbTargetPipeWriteSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * ,struct _WDF_MEMORY_DESCRIPTOR * ,unsigned long * );// Offset=0xad0 Size=0x8
    long  ( * pfnWdfUsbTargetPipeFormatRequestForWrite)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0xad8 Size=0x8
    long  ( * pfnWdfUsbTargetPipeReadSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * ,struct _WDF_MEMORY_DESCRIPTOR * ,unsigned long * );// Offset=0xae0 Size=0x8
    long  ( * pfnWdfUsbTargetPipeFormatRequestForRead)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0xae8 Size=0x8
    long  ( * pfnWdfUsbTargetPipeConfigContinuousReader)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct _WDF_USB_CONTINUOUS_READER_CONFIG * );// Offset=0xaf0 Size=0x8
    long  ( * pfnWdfUsbTargetPipeAbortSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * );// Offset=0xaf8 Size=0x8
    long  ( * pfnWdfUsbTargetPipeFormatRequestForAbort)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * );// Offset=0xb00 Size=0x8
    long  ( * pfnWdfUsbTargetPipeResetSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * );// Offset=0xb08 Size=0x8
    long  ( * pfnWdfUsbTargetPipeFormatRequestForReset)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * );// Offset=0xb10 Size=0x8
    long  ( * pfnWdfUsbTargetPipeSendUrbSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct _WDF_REQUEST_SEND_OPTIONS * ,struct _URB * );// Offset=0xb18 Size=0x8
    long  ( * pfnWdfUsbTargetPipeFormatRequestForUrb)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * ,struct WDFREQUEST__ * ,struct WDFMEMORY__ * ,struct _WDFMEMORY_OFFSET * );// Offset=0xb20 Size=0x8
    unsigned char  ( * pfnWdfUsbInterfaceGetInterfaceNumber)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * );// Offset=0xb28 Size=0x8
    unsigned char  ( * pfnWdfUsbInterfaceGetNumEndpoints)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * ,unsigned char );// Offset=0xb30 Size=0x8
    void  ( * pfnWdfUsbInterfaceGetDescriptor)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * ,unsigned char ,struct _USB_INTERFACE_DESCRIPTOR * );// Offset=0xb38 Size=0x8
    long  ( * pfnWdfUsbInterfaceSelectSetting)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS * );// Offset=0xb40 Size=0x8
    void  ( * pfnWdfUsbInterfaceGetEndpointInformation)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * ,unsigned char ,unsigned char ,struct _WDF_USB_PIPE_INFORMATION * );// Offset=0xb48 Size=0x8
    struct WDFUSBINTERFACE__ *  ( * pfnWdfUsbTargetDeviceGetInterface)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,unsigned char );// Offset=0xb50 Size=0x8
    unsigned char  ( * pfnWdfUsbInterfaceGetConfiguredSettingIndex)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * );// Offset=0xb58 Size=0x8
    unsigned char  ( * pfnWdfUsbInterfaceGetNumConfiguredPipes)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * );// Offset=0xb60 Size=0x8
    struct WDFUSBPIPE__ *  ( * pfnWdfUsbInterfaceGetConfiguredPipe)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * ,unsigned char ,struct _WDF_USB_PIPE_INFORMATION * );// Offset=0xb68 Size=0x8
    void *  ( * pfnWdfUsbTargetPipeWdmGetPipeHandle)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBPIPE__ * );// Offset=0xb70 Size=0x8
    void  ( * pfnWdfVerifierDbgBreakPoint)(struct _WDF_DRIVER_GLOBALS * );// Offset=0xb78 Size=0x8
    void  ( * pfnWdfVerifierKeBugCheck)(struct _WDF_DRIVER_GLOBALS * ,unsigned long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long long );// Offset=0xb80 Size=0x8
    long  ( * pfnWdfWmiProviderCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_WMI_PROVIDER_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFWMIPROVIDER__ ** );// Offset=0xb88 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfWmiProviderGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIPROVIDER__ * );// Offset=0xb90 Size=0x8
    unsigned char  ( * pfnWdfWmiProviderIsEnabled)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIPROVIDER__ * ,enum _WDF_WMI_PROVIDER_CONTROL );// Offset=0xb98 Size=0x8
    unsigned long long  ( * pfnWdfWmiProviderGetTracingHandle)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIPROVIDER__ * );// Offset=0xba0 Size=0x8
    long  ( * pfnWdfWmiInstanceCreate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_WMI_INSTANCE_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFWMIINSTANCE__ ** );// Offset=0xba8 Size=0x8
    long  ( * pfnWdfWmiInstanceRegister)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIINSTANCE__ * );// Offset=0xbb0 Size=0x8
    void  ( * pfnWdfWmiInstanceDeregister)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIINSTANCE__ * );// Offset=0xbb8 Size=0x8
    struct WDFDEVICE__ *  ( * pfnWdfWmiInstanceGetDevice)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIINSTANCE__ * );// Offset=0xbc0 Size=0x8
    struct WDFWMIPROVIDER__ *  ( * pfnWdfWmiInstanceGetProvider)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIINSTANCE__ * );// Offset=0xbc8 Size=0x8
    long  ( * pfnWdfWmiInstanceFireEvent)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWMIINSTANCE__ * ,unsigned long ,void * );// Offset=0xbd0 Size=0x8
    long  ( * pfnWdfWorkItemCreate)(struct _WDF_DRIVER_GLOBALS * ,struct _WDF_WORKITEM_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFWORKITEM__ ** );// Offset=0xbd8 Size=0x8
    void  ( * pfnWdfWorkItemEnqueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWORKITEM__ * );// Offset=0xbe0 Size=0x8
    void *  ( * pfnWdfWorkItemGetParentObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWORKITEM__ * );// Offset=0xbe8 Size=0x8
    void  ( * pfnWdfWorkItemFlush)(struct _WDF_DRIVER_GLOBALS * ,struct WDFWORKITEM__ * );// Offset=0xbf0 Size=0x8
    long  ( * pfnWdfCommonBufferCreateWithConfig)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * ,unsigned long long ,struct _WDF_COMMON_BUFFER_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFCOMMONBUFFER__ ** );// Offset=0xbf8 Size=0x8
    unsigned long long  ( * pfnWdfDmaEnablerGetFragmentLength)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * ,enum _WDF_DMA_DIRECTION );// Offset=0xc00 Size=0x8
    struct _DMA_ADAPTER *  ( * pfnWdfDmaEnablerWdmGetDmaAdapter)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * ,enum _WDF_DMA_DIRECTION );// Offset=0xc08 Size=0x8
    unsigned char  ( * pfnWdfUsbInterfaceGetNumSettings)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBINTERFACE__ * );// Offset=0xc10 Size=0x8
    void  ( * pfnWdfDeviceRemoveDependentUsageDeviceObject)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _DEVICE_OBJECT * );// Offset=0xc18 Size=0x8
    enum POWER_ACTION  ( * pfnWdfDeviceGetSystemPowerAction)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0xc20 Size=0x8
    void  ( * pfnWdfInterruptSetExtendedPolicy)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * ,struct _WDF_INTERRUPT_EXTENDED_POLICY * );// Offset=0xc28 Size=0x8
    long  ( * pfnWdfIoQueueAssignForwardProgressPolicy)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,struct _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY * );// Offset=0xc30 Size=0x8
    long  ( * pfnWdfPdoInitAssignContainerID)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _UNICODE_STRING * );// Offset=0xc38 Size=0x8
    void  ( * pfnWdfPdoInitAllowForwardingRequestToParent)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0xc40 Size=0x8
    long  ( * pfnWdfRequestMarkCancelableEx)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,void  ( * )(struct WDFREQUEST__ * ));// Offset=0xc48 Size=0x8
    unsigned char  ( * pfnWdfRequestIsReserved)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0xc50 Size=0x8
    long  ( * pfnWdfRequestForwardToParentDeviceIoQueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * ,struct WDFQUEUE__ * ,struct _WDF_REQUEST_FORWARD_OPTIONS * );// Offset=0xc58 Size=0x8
    struct WDFCXDEVICE_INIT *  ( * pfnWdfCxDeviceInitAllocate)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0xc60 Size=0x8
    long  ( * pfnWdfCxDeviceInitAssignWdmIrpPreprocessCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCXDEVICE_INIT * ,long  ( * )(struct WDFDEVICE__ * ,struct _IRP * ,void * ),unsigned char ,unsigned char * ,unsigned long );// Offset=0xc68 Size=0x8
    void  ( * pfnWdfCxDeviceInitSetIoInCallerContextCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCXDEVICE_INIT * ,void  ( * )(struct WDFDEVICE__ * ,struct WDFREQUEST__ * ));// Offset=0xc70 Size=0x8
    void  ( * pfnWdfCxDeviceInitSetRequestAttributes)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCXDEVICE_INIT * ,struct _WDF_OBJECT_ATTRIBUTES * );// Offset=0xc78 Size=0x8
    void  ( * pfnWdfCxDeviceInitSetFileObjectConfig)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCXDEVICE_INIT * ,struct _WDFCX_FILEOBJECT_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * );// Offset=0xc80 Size=0x8
    long  ( * pfnWdfDeviceWdmDispatchIrp)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _IRP * ,void * );// Offset=0xc88 Size=0x8
    long  ( * pfnWdfDeviceWdmDispatchIrpToIoQueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _IRP * ,struct WDFQUEUE__ * ,unsigned long );// Offset=0xc90 Size=0x8
    void  ( * pfnWdfDeviceInitSetRemoveLockOptions)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_REMOVE_LOCK_OPTIONS * );// Offset=0xc98 Size=0x8
    long  ( * pfnWdfDeviceConfigureWdmIrpDispatchCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct WDFDRIVER__ * ,unsigned char ,long  ( * )(struct WDFDEVICE__ * ,unsigned char ,unsigned char ,unsigned long ,void * ,struct _IRP * ,void * ),void * );// Offset=0xca0 Size=0x8
    long  ( * pfnWdfDmaEnablerConfigureSystemProfile)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMAENABLER__ * ,struct _WDF_DMA_SYSTEM_PROFILE_CONFIG * ,enum _WDF_DMA_DIRECTION );// Offset=0xca8 Size=0x8
    long  ( * pfnWdfDmaTransactionInitializeUsingOffset)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned char  ( * )(struct WDFDMATRANSACTION__ * ,struct WDFDEVICE__ * ,void * ,enum _WDF_DMA_DIRECTION ,struct _SCATTER_GATHER_LIST * ),enum _WDF_DMA_DIRECTION ,struct _MDL * ,unsigned long long ,unsigned long long );// Offset=0xcb0 Size=0x8
    void  ( * pfnWdfDmaTransactionGetTransferInfo)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned long * ,unsigned long * );// Offset=0xcb8 Size=0x8
    void  ( * pfnWdfDmaTransactionSetChannelConfigurationCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned char  ( * )(struct WDFDMATRANSACTION__ * ,struct WDFDEVICE__ * ,void * ,struct _MDL * ,unsigned long long ,unsigned long long ),void * );// Offset=0xcc0 Size=0x8
    void  ( * pfnWdfDmaTransactionSetTransferCompleteCallback)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,void  ( * )(struct WDFDMATRANSACTION__ * ,struct WDFDEVICE__ * ,void * ,enum _WDF_DMA_DIRECTION ,enum DMA_COMPLETION_STATUS ),void * );// Offset=0xcc8 Size=0x8
    void  ( * pfnWdfDmaTransactionSetImmediateExecution)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned char );// Offset=0xcd0 Size=0x8
    long  ( * pfnWdfDmaTransactionAllocateResources)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,enum _WDF_DMA_DIRECTION ,unsigned long ,void  ( * )(struct WDFDMATRANSACTION__ * ,void * ),void * );// Offset=0xcd8 Size=0x8
    void  ( * pfnWdfDmaTransactionSetDeviceAddressOffset)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned long );// Offset=0xce0 Size=0x8
    void  ( * pfnWdfDmaTransactionFreeResources)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0xce8 Size=0x8
    unsigned char  ( * pfnWdfDmaTransactionCancel)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0xcf0 Size=0x8
    void *  ( * pfnWdfDmaTransactionWdmGetTransferContext)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0xcf8 Size=0x8
    unsigned char  ( * pfnWdfInterruptQueueWorkItemForIsr)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0xd00 Size=0x8
    unsigned char  ( * pfnWdfInterruptTryToAcquireLock)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0xd08 Size=0x8
    void  ( * pfnWdfIoQueueStopAndPurge)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * ,void  ( * )(struct WDFQUEUE__ * ,void * ),void * );// Offset=0xd10 Size=0x8
    void  ( * pfnWdfIoQueueStopAndPurgeSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFQUEUE__ * );// Offset=0xd18 Size=0x8
    void  ( * pfnWdfIoTargetPurge)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,enum _WDF_IO_TARGET_PURGE_IO_ACTION );// Offset=0xd20 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceCreateWithParameters)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_USB_DEVICE_CREATE_CONFIG * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFUSBDEVICE__ ** );// Offset=0xd28 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceQueryUsbCapability)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct _GUID * ,unsigned long ,void * ,unsigned long * );// Offset=0xd30 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceCreateUrb)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** ,struct _URB ** );// Offset=0xd38 Size=0x8
    long  ( * pfnWdfUsbTargetDeviceCreateIsochUrb)(struct _WDF_DRIVER_GLOBALS * ,struct WDFUSBDEVICE__ * ,struct _WDF_OBJECT_ATTRIBUTES * ,unsigned long ,struct WDFMEMORY__ ** ,struct _URB ** );// Offset=0xd40 Size=0x8
    long  ( * pfnWdfDeviceWdmAssignPowerFrameworkSettings)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_POWER_FRAMEWORK_SETTINGS * );// Offset=0xd48 Size=0x8
    void  ( * pfnWdfDmaTransactionStopSystemTransfer)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * );// Offset=0xd50 Size=0x8
    void  ( * pfnWdfCxVerifierKeBugCheck)(struct _WDF_DRIVER_GLOBALS * ,void * ,unsigned long ,unsigned long long ,unsigned long long ,unsigned long long ,unsigned long long );// Offset=0xd58 Size=0x8
    void  ( * pfnWdfInterruptReportActive)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0xd60 Size=0x8
    void  ( * pfnWdfInterruptReportInactive)(struct _WDF_DRIVER_GLOBALS * ,struct WDFINTERRUPT__ * );// Offset=0xd68 Size=0x8
    void  ( * pfnWdfDeviceInitSetReleaseHardwareOrderOnFailure)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,enum _WDF_RELEASE_HARDWARE_ORDER_ON_FAILURE );// Offset=0xd70 Size=0x8
    void *  ( * pfnWdfGetTriageInfo)(struct _WDF_DRIVER_GLOBALS * );// Offset=0xd78 Size=0x8
    void  ( * pfnWdfDeviceInitSetIoTypeEx)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_IO_TYPE_CONFIG * );// Offset=0xd80 Size=0x8
    long  ( * pfnWdfDeviceQueryPropertyEx)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_PROPERTY_DATA * ,unsigned long ,void * ,unsigned long * ,unsigned long * );// Offset=0xd88 Size=0x8
    long  ( * pfnWdfDeviceAllocAndQueryPropertyEx)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_PROPERTY_DATA * ,enum _POOL_TYPE ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** ,unsigned long * );// Offset=0xd90 Size=0x8
    long  ( * pfnWdfDeviceAssignProperty)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _WDF_DEVICE_PROPERTY_DATA * ,unsigned long ,unsigned long ,void * );// Offset=0xd98 Size=0x8
    long  ( * pfnWdfFdoInitQueryPropertyEx)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_DEVICE_PROPERTY_DATA * ,unsigned long ,void * ,unsigned long * ,unsigned long * );// Offset=0xda0 Size=0x8
    long  ( * pfnWdfFdoInitAllocAndQueryPropertyEx)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * ,struct _WDF_DEVICE_PROPERTY_DATA * ,enum _POOL_TYPE ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFMEMORY__ ** ,unsigned long * );// Offset=0xda8 Size=0x8
    long  ( * pfnWdfDeviceStopIdleActual)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,unsigned char ,void * ,long ,char * );// Offset=0xdb0 Size=0x8
    void  ( * pfnWdfDeviceResumeIdleActual)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,void * ,long ,char * );// Offset=0xdb8 Size=0x8
    struct WDFIOTARGET__ *  ( * pfnWdfDeviceGetSelfIoTarget)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * );// Offset=0xdc0 Size=0x8
    void  ( * pfnWdfDeviceInitAllowSelfIoTarget)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE_INIT * );// Offset=0xdc8 Size=0x8
    long  ( * pfnWdfIoTargetSelfAssignDefaultIoQueue)(struct _WDF_DRIVER_GLOBALS * ,struct WDFIOTARGET__ * ,struct WDFQUEUE__ * );// Offset=0xdd0 Size=0x8
    long  ( * pfnWdfDeviceOpenDevicemapKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct _UNICODE_STRING * ,unsigned long ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFKEY__ ** );// Offset=0xdd8 Size=0x8
    void  ( * pfnWdfDmaTransactionSetSingleTransferRequirement)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDMATRANSACTION__ * ,unsigned char );// Offset=0xde0 Size=0x8
    void  ( * pfnWdfCxDeviceInitSetPnpPowerEventCallbacks)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCXDEVICE_INIT * ,struct _WDFCX_PNPPOWER_EVENT_CALLBACKS * );// Offset=0xde8 Size=0x8
    unsigned long  ( * pfnWdfFileObjectGetInitiatorProcessId)(struct _WDF_DRIVER_GLOBALS * ,struct WDFFILEOBJECT__ * );// Offset=0xdf0 Size=0x8
    unsigned long  ( * pfnWdfRequestGetRequestorProcessId)(struct _WDF_DRIVER_GLOBALS * ,struct WDFREQUEST__ * );// Offset=0xdf8 Size=0x8
    long  ( * pfnWdfDeviceRetrieveCompanionTarget)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDEVICE__ * ,struct WDFCOMPANIONTARGET__ ** );// Offset=0xe00 Size=0x8
    long  ( * pfnWdfCompanionTargetSendTaskSynchronously)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOMPANIONTARGET__ * ,unsigned short ,unsigned long ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_MEMORY_DESCRIPTOR * ,struct _WDF_TASK_SEND_OPTIONS * ,unsigned long long * );// Offset=0xe08 Size=0x8
    struct _EPROCESS *  ( * pfnWdfCompanionTargetWdmGetCompanionProcess)(struct _WDF_DRIVER_GLOBALS * ,struct WDFCOMPANIONTARGET__ * );// Offset=0xe10 Size=0x8
    long  ( * pfnWdfDriverOpenPersistentStateRegistryKey)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * ,unsigned long ,struct _WDF_OBJECT_ATTRIBUTES * ,struct WDFKEY__ ** );// Offset=0xe18 Size=0x8
    long  ( * pfnWdfDriverErrorReportApiMissing)(struct _WDF_DRIVER_GLOBALS * ,struct WDFDRIVER__ * ,wchar_t * ,unsigned long ,unsigned char );// Offset=0xe20 Size=0x8
};
