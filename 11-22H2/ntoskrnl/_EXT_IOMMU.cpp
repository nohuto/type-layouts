enum _EXT_IOMMU_KNOWN_IOMMU_TYPE
{
    ExtIommuInvalid=0,
    ExtIommuAmd=1,
    ExtIommuIntel=2,
    ExtIommuSmmuv1=3,
    ExtIommuSmmuv2=4,
    ExtIommuSmmuv3=5,
    ExtIommuIts=6,
    ExtIommuUnknown=4096
};

union _EXT_IOMMU_CAPABILITIES// Size=0x8 (Id=386)
{
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long GeneratesMsiInterrupts:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long CoherentTableWalks:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long InterruptsNotSubjectToRemapping:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long InterruptRemapping:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long Stage2DmaRemapping:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long Svm:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long PcieFunctionBased:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
    };
};

struct _unnamed_305// Size=0x2 (Id=305)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short PciSegment:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
    };
};

struct _EXT_IOMMU_FUNCTION_TABLE// Size=0x98 (Id=289)
{
    long  ( * ConfigureSettings)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_SETTINGS * );// Offset=0x0 Size=0x8
    long  ( * Initialize)(struct _EXT_IOMMU * ,unsigned long ,unsigned char );// Offset=0x8 Size=0x8
    long  ( * AllocateDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DOMAIN * ,struct _EXT_IOMMU_DOMAIN * ,void * );// Offset=0x10 Size=0x8
    void  ( * FreeDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DOMAIN * ,void * );// Offset=0x18 Size=0x8
    long  ( * CreateDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE_ID * ,union _EXT_IOMMU_CREATE_DEVICE_FLAGS ,void * ,struct _EXT_IOMMU_DEVICE ** ,void * );// Offset=0x20 Size=0x8
    void  ( * DeleteDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,void * );// Offset=0x28 Size=0x8
    unsigned char  ( * OwnDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x30 Size=0x8
    void  ( * ConfigureDeviceFaultReporting)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,unsigned char );// Offset=0x38 Size=0x8
    long  ( * AttachDeviceDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,void * );// Offset=0x40 Size=0x8
    void  ( * DetachDeviceDomain)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE * ,void * );// Offset=0x48 Size=0x8
    void  ( * FlushDomainTb)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DOMAIN * ,struct _EXT_IOMMU_FLUSH_CONTEXT * ,unsigned int ,struct _KTB_FLUSH_VA * );// Offset=0x50 Size=0x8
    void  ( * SyncFlush)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_FLUSH_CONTEXT * );// Offset=0x58 Size=0x8
    void  ( * CompleteFlush)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_FLUSH_CONTEXT * );// Offset=0x60 Size=0x8
    long  ( * AllocateRemappingTableEntry)(void * ,unsigned long ,unsigned long ,unsigned long ,unsigned short ,unsigned char ,unsigned char ,unsigned long ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x68 Size=0x8
    long  ( * FreeRemappingTableEntry)(void * ,unsigned long ,unsigned long );// Offset=0x70 Size=0x8
    unsigned char  ( * UpdateRemappingTableEntry)(void * ,unsigned char ,unsigned long ,struct _INTERRUPT_LINE_STATE * );// Offset=0x78 Size=0x8
    void  ( * InvalidateRemappingTableEntry)(void * ,unsigned long );// Offset=0x80 Size=0x8
    void  ( * UpdateRemappingDestination)(void * ,unsigned char ,unsigned long * ,unsigned long * ,unsigned long );// Offset=0x88 Size=0x8
    void  ( * CaptureGlobalCrashdumpState)(void * );// Offset=0x90 Size=0x8
};

struct _EXT_IOMMU// Size=0xb8 (Id=306)
{
    void * Context;// Offset=0x0 Size=0x8
    enum _EXT_IOMMU_KNOWN_IOMMU_TYPE Type;// Offset=0x8 Size=0x4
    union _EXT_IOMMU_CAPABILITIES Capabilities;// Offset=0x10 Size=0x8
    unsigned int MaxOutputAddressWidth;// Offset=0x18 Size=0x4
    struct _unnamed_305 Flags;// Offset=0x1c Size=0x2
    unsigned short PciSegmentNumber;// Offset=0x1e Size=0x2
    struct _EXT_IOMMU_FUNCTION_TABLE FunctionTable;// Offset=0x20 Size=0x98
};
