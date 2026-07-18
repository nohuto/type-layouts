struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

enum _KINTERRUPT_POLARITY
{
    InterruptPolarityUnknown=0,
    InterruptActiveHigh=1,
    InterruptRisingEdge=1,
    InterruptActiveLow=2,
    InterruptFallingEdge=2,
    InterruptActiveBoth=3,
    InterruptActiveBothTriggerLow=3,
    InterruptActiveBothTriggerHigh=4
};

enum _KINTERRUPT_MODE
{
    LevelSensitive=0,
    Latched=1
};

struct _EXT_IOMMU_FUNCTION_TABLE// Size=0x98 (Id=311)
{
    long  ( * ConfigureSettings)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_SETTINGS * );// Offset=0x0 Size=0x8
    long  ( * Initialize)(struct _EXT_IOMMU * ,unsigned long ,unsigned char ,unsigned char );// Offset=0x8 Size=0x8
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

struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED// Size=0xb0 (Id=406)
{
    long  ( * FindDevice)(struct _EXT_IOMMU * ,struct _EXT_IOMMU_DEVICE_ID * ,unsigned char ,struct _EXT_IOMMU_OUTPUT_MAPPING * );// Offset=0x0 Size=0x8
    long  ( * SetDeviceSvmCapabilities)(void * ,struct _EXT_IOMMU_DEVICE * ,unsigned long ,unsigned char );// Offset=0x8 Size=0x8
    void  ( * SetDevicePasidTable)(void * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,unsigned char ,unsigned char );// Offset=0x10 Size=0x8
    long  ( * GrowPasidTable)(void * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,unsigned long ,enum _IOMMU_PASID_SETTING ,enum _IOMMU_ATS_SETTING );// Offset=0x18 Size=0x8
    long  ( * SetPasidAddressSpace)(void * ,struct _EXT_IOMMU_DEVICE * ,struct _EXT_IOMMU_DOMAIN * ,unsigned long ,unsigned char * );// Offset=0x20 Size=0x8
    void  ( * FlushTb)(void * ,unsigned long ,struct _EXT_IOMMU_DOMAIN * ,void * ,struct _LIST_ENTRY * ,unsigned long ,struct _KTB_FLUSH_VA * );// Offset=0x28 Size=0x8
    void  ( * FlushDeviceTbOnly)(void * ,unsigned long long ,unsigned long );// Offset=0x30 Size=0x8
    void  ( * DismissPageFault)(void * ,unsigned long ,unsigned long long ,unsigned short ,long );// Offset=0x38 Size=0x8
    unsigned long  ( * GetPageFault)(void * ,unsigned long * ,unsigned long long * ,unsigned short * ,void ** ,unsigned long long * );// Offset=0x40 Size=0x8
    long  ( * SetMessageInterruptRouting)(void * ,unsigned char ,union _LARGE_INTEGER ,unsigned long );// Offset=0x48 Size=0x8
    void  ( * EnableInterrupt)(void * );// Offset=0x50 Size=0x8
    void  ( * DisableInterrupt)(void * );// Offset=0x58 Size=0x8
    unsigned char  ( * HandleInterrupt)(void * );// Offset=0x60 Size=0x8
    unsigned char  ( * CheckForReservedRegion)(struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x68 Size=0x8
    void  ( * MarkHiberRegions)(void * ,void * );// Offset=0x70 Size=0x8
    void  ( * DrainSvmPageRequests)(void * ,unsigned long long ,unsigned long );// Offset=0x78 Size=0x8
    void  ( * CancelPageRequests)(void * ,unsigned long long ,unsigned long );// Offset=0x80 Size=0x8
    long  ( * EnumerateReservedDevices)(void * ,unsigned long * ,struct _IOMMU_RESERVED_DEVICE ** );// Offset=0x88 Size=0x8
    long  ( * ProcessReservedDomains)(void * ,unsigned long ,struct _IOMMU_RESERVED_DEVICE ** );// Offset=0x90 Size=0x8
    long  ( * QueryAcpiDeviceMapping)(void * ,struct _EXT_IOMMU_DEVICE_ID * ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0x98 Size=0x8
    unsigned int  ( * GetRidAcpiMapCount)(void * ,struct _EXT_IOMMU_DEVICE_ID * );// Offset=0xa0 Size=0x8
    long  ( * ConfigureAts)(void * ,struct _EXT_IOMMU_DEVICE * ,unsigned char );// Offset=0xa8 Size=0x8
};

struct _EX_PUSH_LOCK// Size=0x8 (Id=120)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned long long Locked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
            unsigned long long Waiting:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
            unsigned long long Waking:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long MultipleShared:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
            unsigned long long Shared:60;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x3c
        };
        unsigned long long Value;// Offset=0x0 Size=0x8
        void * Ptr;// Offset=0x0 Size=0x8
    };
};

struct _IOMMU_PAGE_HANDLING_DATA// Size=0x28 (Id=394)
{
    struct _EX_PUSH_LOCK ResetLock;// Offset=0x0 Size=0x8
    unsigned long long Lock;// Offset=0x8 Size=0x8
    unsigned long ValidGroupFaultSequenceNumber;// Offset=0x10 Size=0x4
    unsigned long  ( * GetPageFault)(void * ,unsigned long * ,unsigned long long * ,unsigned short * ,void ** ,unsigned long long * );// Offset=0x18 Size=0x8
    void  ( * DismissPageFault)(void * ,unsigned long ,unsigned long long ,unsigned short ,long );// Offset=0x20 Size=0x8
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

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

struct _unnamed_167// Size=0x4 (Id=167)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long DeviceNumber:5;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x5
        unsigned long FunctionNumber:3;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x3
        unsigned long Reserved:24;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x18
    };
};

union _unnamed_168// Size=0x4 (Id=168)
{
    struct _unnamed_167 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _PCI_SLOT_NUMBER// Size=0x4 (Id=373)
{
    union _unnamed_168 u;// Offset=0x0 Size=0x4
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=253)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _REGISTERED_IOMMU// Size=0x218 (Id=284)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    void * InternalData;// Offset=0x10 Size=0x8
    unsigned long InternalDataSize;// Offset=0x18 Size=0x4
    void * InterruptContext;// Offset=0x20 Size=0x8
    unsigned char Irql;// Offset=0x28 Size=0x1
    long Gsi;// Offset=0x2c Size=0x4
    enum _KINTERRUPT_POLARITY InterruptPolarity;// Offset=0x30 Size=0x4
    enum _KINTERRUPT_MODE InterruptMode;// Offset=0x34 Size=0x4
    struct _EXT_IOMMU_FUNCTION_TABLE FunctionTable;// Offset=0x38 Size=0x98
    struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED FunctionTableExtended;// Offset=0xd0 Size=0xb0
    unsigned long Flags;// Offset=0x180 Size=0x4
    struct _IOMMU_PAGE_HANDLING_DATA PageHandling;// Offset=0x188 Size=0x28
    unsigned long MaximumDomainIds;// Offset=0x1b0 Size=0x4
    unsigned long long DomainIdBitmapLock;// Offset=0x1b8 Size=0x8
    struct _RTL_BITMAP DomainIdBitmap;// Offset=0x1c0 Size=0x10
    unsigned long Capabilities;// Offset=0x1d0 Size=0x4
    enum _EXT_IOMMU_KNOWN_IOMMU_TYPE KnownType;// Offset=0x1d4 Size=0x4
    unsigned long PciSegment;// Offset=0x1d8 Size=0x4
    unsigned long PciBus;// Offset=0x1dc Size=0x4
    struct _PCI_SLOT_NUMBER PciSlot;// Offset=0x1e0 Size=0x4
    union _LARGE_INTEGER MsiAddress;// Offset=0x1e8 Size=0x8
    unsigned long long MsiData;// Offset=0x1f0 Size=0x8
    unsigned long MaximumAsids;// Offset=0x1f8 Size=0x4
    unsigned long Identifier;// Offset=0x1fc Size=0x4
    struct _UNICODE_STRING ResourceId;// Offset=0x200 Size=0x10
    struct _IOMMU_RESERVED_DEVICE_LIST * ReservedDevices;// Offset=0x210 Size=0x8
};
