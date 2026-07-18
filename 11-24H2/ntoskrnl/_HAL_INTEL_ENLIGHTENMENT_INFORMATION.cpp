struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION// Size=0x270 (Id=272)
{
    unsigned long Enlightenments;// Offset=0x0 Size=0x4
    unsigned long HypervisorConnected;// Offset=0x4 Size=0x4
    void  ( * EndOfInterrupt)();// Offset=0x8 Size=0x8
    void  ( * ApicWriteIcr)(unsigned long ,unsigned long );// Offset=0x10 Size=0x8
    unsigned long Reserved0;// Offset=0x18 Size=0x4
    unsigned long SpinCountMask;// Offset=0x1c Size=0x4
    void  ( * LongSpinWait)(unsigned long );// Offset=0x20 Size=0x8
    unsigned long long  ( * GetReferenceTime)(unsigned long * );// Offset=0x28 Size=0x8
    long  ( * SetSystemSleepProperty)(unsigned int ,unsigned char ,unsigned char );// Offset=0x30 Size=0x8
    long  ( * EnterSleepState)(unsigned int );// Offset=0x38 Size=0x8
    long  ( * NotifyDebugDeviceAvailable)();// Offset=0x40 Size=0x8
    long  ( * MapDeviceInterrupt)(unsigned long long ,void * ,struct _GROUP_AFFINITY * ,void * );// Offset=0x48 Size=0x8
    long  ( * UnmapDeviceInterrupt)(unsigned long long ,void * );// Offset=0x50 Size=0x8
    long  ( * RetargetDeviceInterrupt)(unsigned long long ,void * ,void * ,struct _GROUP_AFFINITY * ,void * );// Offset=0x58 Size=0x8
    long  ( * SetHpetConfig)(unsigned long ,unsigned long long ,unsigned char ,void * );// Offset=0x60 Size=0x8
    long  ( * NotifyHpetEnabled)();// Offset=0x68 Size=0x8
    long  ( * QueryAssociatedProcessors)(unsigned long ,unsigned long * ,unsigned long * );// Offset=0x70 Size=0x8
    long  ( * ReadMultipleMsr)(unsigned long ,unsigned long ,unsigned long * ,unsigned long long * );// Offset=0x78 Size=0x8
    long  ( * WriteMultipleMsr)(unsigned long ,unsigned long ,unsigned long * ,unsigned long long * );// Offset=0x80 Size=0x8
    long  ( * ReadCpuid)(unsigned long ,unsigned long ,unsigned long * ,unsigned long * ,unsigned long * ,unsigned long * );// Offset=0x88 Size=0x8
    long  ( * LpWritebackInvalidate)(unsigned long );// Offset=0x90 Size=0x8
    long  ( * GetMachineCheckContext)(unsigned long ,unsigned int * ,unsigned long long * ,unsigned int * );// Offset=0x98 Size=0x8
    long  ( * SuspendPartition)(unsigned long long );// Offset=0xa0 Size=0x8
    long  ( * ResumePartition)(unsigned long long );// Offset=0xa8 Size=0x8
    long  ( * SetSystemMachineCheckProperty)(void * );// Offset=0xb0 Size=0x8
    long  ( * WheaErrorNotification)(struct _WHEA_RECOVERY_CONTEXT * ,unsigned char );// Offset=0xb8 Size=0x8
    unsigned long  ( * GetProcessorIndexFromVpIndex)(unsigned long );// Offset=0xc0 Size=0x8
    long  ( * SyntheticClusterIpi)(struct _KAFFINITY_EX * ,unsigned long );// Offset=0xc8 Size=0x8
    unsigned char  ( * VpStartEnabled)();// Offset=0xd0 Size=0x8
    long  ( * StartVirtualProcessor)(unsigned long ,void * );// Offset=0xd8 Size=0x8
    long  ( * GetVpIndexFromApicId)(unsigned long ,unsigned long * );// Offset=0xe0 Size=0x8
    long  ( * IumAccessPciDevice)(unsigned char ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,unsigned long ,void * );// Offset=0xe8 Size=0x8
    unsigned long long  ( * IumEfiRuntimeService)(unsigned long ,void * ,unsigned long long ,unsigned long long * );// Offset=0xf0 Size=0x8
    void  ( * GetSystemPasidCapabilities)(struct _HAL_HV_SYSTEM_PASID_CAPABILITIES * );// Offset=0xf8 Size=0x8
    long  ( * GetDeviceCapabilities)(struct _EXT_IOMMU_DEVICE_ID * ,void * );// Offset=0x100 Size=0x8
    long  ( * CreatePasidSpace)(unsigned long ,unsigned long );// Offset=0x108 Size=0x8
    long  ( * SetPasidAddressSpace)(unsigned long ,unsigned long ,unsigned long long );// Offset=0x110 Size=0x8
    void  ( * FlushPasid)(unsigned long ,unsigned long ,unsigned long ,struct _KTB_FLUSH_VA * ,unsigned char );// Offset=0x118 Size=0x8
    long  ( * AttachPasidSpace)(unsigned long long ,unsigned long );// Offset=0x120 Size=0x8
    long  ( * DetachPasidSpace)(unsigned long long );// Offset=0x128 Size=0x8
    long  ( * EnablePasid)(unsigned long long ,unsigned long );// Offset=0x130 Size=0x8
    long  ( * DisablePasid)(unsigned long long ,unsigned long );// Offset=0x138 Size=0x8
    long  ( * AcknowledgePageRequest)(unsigned long ,void * ,unsigned long * );// Offset=0x140 Size=0x8
    long  ( * CreatePrQueue)(unsigned long ,unsigned long ,union _LARGE_INTEGER ,unsigned long ,unsigned long );// Offset=0x148 Size=0x8
    long  ( * DeletePrQueue)(unsigned long );// Offset=0x150 Size=0x8
    long  ( * ClearPrqStalled)(unsigned long );// Offset=0x158 Size=0x8
    long  ( * SetDeviceDmaEnabled)(struct _EXT_IOMMU_DEVICE_ID * ,unsigned char );// Offset=0x160 Size=0x8
    long  ( * SetDeviceCapabilities)(unsigned long long ,unsigned long ,unsigned long );// Offset=0x168 Size=0x8
    long  ( * AttachPrQueue)(unsigned long long ,unsigned long );// Offset=0x170 Size=0x8
    long  ( * DetachPrQueue)(unsigned long long );// Offset=0x178 Size=0x8
    long  ( * HvDebuggerPowerHandler)(unsigned char );// Offset=0x180 Size=0x8
    long  ( * SetQpcBias)(unsigned long long );// Offset=0x188 Size=0x8
    unsigned long long  ( * GetQpcBias)();// Offset=0x190 Size=0x8
    long  ( * RegisterDeviceId)(struct _EXT_IOMMU_DEVICE_ID * ,unsigned long long );// Offset=0x198 Size=0x8
    long  ( * UnregisterDeviceId)(unsigned long long );// Offset=0x1a0 Size=0x8
    long  ( * AllocateDeviceDomain)(struct _HAL_HV_DMA_CREATE_DOMAIN_INFO * );// Offset=0x1a8 Size=0x8
    long  ( * AttachDeviceDomain)(unsigned long long ,struct _HAL_HV_DMA_DOMAIN_INFO * );// Offset=0x1b0 Size=0x8
    long  ( * DetachDeviceDomain)(unsigned long long );// Offset=0x1b8 Size=0x8
    long  ( * DeleteDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO * );// Offset=0x1c0 Size=0x8
    long  ( * MapDeviceLogicalRange)(struct _HAL_HV_DMA_DOMAIN_INFO * ,unsigned long ,unsigned long long ,unsigned long long * ,unsigned long long * ,unsigned char );// Offset=0x1c8 Size=0x8
    long  ( * UnmapDeviceLogicalRange)(struct _HAL_HV_DMA_DOMAIN_INFO * ,unsigned long long ,unsigned long long * );// Offset=0x1d0 Size=0x8
    long  ( * MapDeviceSparsePages)(struct _HAL_HV_DMA_DOMAIN_INFO * ,unsigned long ,unsigned long long * ,unsigned long long * );// Offset=0x1d8 Size=0x8
    long  ( * UnmapDeviceSparsePages)(struct _HAL_HV_DMA_DOMAIN_INFO * ,unsigned long long * ,unsigned long long * );// Offset=0x1e0 Size=0x8
    long  ( * GetDmaGuardEnabled)(unsigned char * );// Offset=0x1e8 Size=0x8
    long  ( * UpdateMicrocode)(void * ,unsigned int ,unsigned char );// Offset=0x1f0 Size=0x8
    long  ( * GetMicrocodeLatency)(unsigned long long * );// Offset=0x1f8 Size=0x8
    long  ( * GetSintMessage)(unsigned char ,void ** );// Offset=0x200 Size=0x8
    void *  ( * GetSintMessagePage)(unsigned long );// Offset=0x208 Size=0x8
    long  ( * RestoreTime)(unsigned int ,unsigned long long ,unsigned long long );// Offset=0x210 Size=0x8
    long  ( * GetLogicalProcessorHwId)(unsigned long ,unsigned long long * );// Offset=0x218 Size=0x8
    long  ( * WakeVirtualProcessors)(struct _KAFFINITY_EX * );// Offset=0x220 Size=0x8
    long  ( * SetRootFaultReportingReady)();// Offset=0x228 Size=0x8
    long  ( * ConfigureDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO * ,struct _HAL_HV_DMA_DOMAIN_CONFIG * );// Offset=0x230 Size=0x8
    long  ( * UnblockDefaultDma)();// Offset=0x238 Size=0x8
    long  ( * FlushDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO * );// Offset=0x240 Size=0x8
    long  ( * FlushDeviceDomainVaList)(struct _HAL_HV_DMA_DOMAIN_INFO * ,unsigned long ,struct _KTB_FLUSH_VA * ,unsigned char );// Offset=0x248 Size=0x8
    long  ( * GetHybridPassthroughReservedRegions)(struct _HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS * );// Offset=0x250 Size=0x8
    long  ( * ReserveDeviceDomainAttachment)(unsigned long long ,struct _HAL_HV_DMA_DOMAIN_INFO * );// Offset=0x258 Size=0x8
    long  ( * UnreserveDeviceDomainAttachment)(unsigned long long );// Offset=0x260 Size=0x8
    long  ( * ChangeIsolatedMemoryVisibility)(unsigned long long ,unsigned long long ,unsigned int ,unsigned long long * );// Offset=0x268 Size=0x8
};
