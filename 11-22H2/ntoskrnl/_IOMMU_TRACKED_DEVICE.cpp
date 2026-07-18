struct _LIST_ENTRY// Size=0x10 (Id=4)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_271// Size=0x4 (Id=271)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Padding:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long PasidMaxWidth:5;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x5
        unsigned long PasidExePerm:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long PasidPrivMode:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long AtsPageAlignedRequest:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long AtsGlobalInvalidate:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long AtsInvalidateQueueDepth:5;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x5
        unsigned long PriPrgResponsePasidRequired:1;// Offset=0x0 Size=0x4 BitOffset=0x11 BitSize=0x1
        unsigned long Rsvd:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
};

struct _unnamed_272// Size=0x4 (Id=272)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Padding:23;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x17
        unsigned long IsSecureDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x17 BitSize=0x1
        unsigned long Rsvd:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _IOMMU_SVM_CAPABILITIES// Size=0x4 (Id=273)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long AtsCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PriCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PasidCapability:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Rsvd0:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    struct _unnamed_271 CapReg;// Offset=0x0 Size=0x4
    struct _unnamed_272 DeviceInformation;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long AtsPriPasidBits:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned long CapRegBits:15;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0xf
        unsigned long DeviceInformationBits:1;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0x1
        unsigned long Rsvd1:13;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0xd
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _unnamed_387// Size=0x8 (Id=387)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long Pending:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Asid:20;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x14
        unsigned long LastInGroupSeen:1;// Offset=0x4 Size=0x4 BitOffset=0x15 BitSize=0x1
        unsigned long Error:1;// Offset=0x4 Size=0x4 BitOffset=0x16 BitSize=0x1
        unsigned long Unused:9;// Offset=0x4 Size=0x4 BitOffset=0x17 BitSize=0x9
    };
    unsigned long long Long;// Offset=0x0 Size=0x8
};

struct _GROUP_FAULT_REFERENCE// Size=0x8 (Id=388)
{
    union _unnamed_387 u1;// Offset=0x0 Size=0x8
};

struct _IOMMU_TRACKED_DEVICE// Size=0x1070 (Id=274)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
    void * Iommu;// Offset=0x18 Size=0x8
    unsigned long IommuCapabilities;// Offset=0x20 Size=0x4
    unsigned long ReferenceCount;// Offset=0x24 Size=0x4
    unsigned long long SourceId;// Offset=0x28 Size=0x8
    union _IOMMU_SVM_CAPABILITIES Capabilities;// Offset=0x30 Size=0x4
    unsigned long Flags;// Offset=0x34 Size=0x4
    struct _IOMMU_PASID_TABLE_OBJECT * CurrentPasidTable;// Offset=0x38 Size=0x8
    struct _LIST_ENTRY PasidTableDeviceList;// Offset=0x40 Size=0x10
    struct _LIST_ENTRY ActiveDeviceListHead;// Offset=0x50 Size=0x10
    struct _IOMMU_DMA_DEVICE * DmaDevice;// Offset=0x60 Size=0x8
    unsigned long LastGroupFaultSequenceNumber;// Offset=0x68 Size=0x4
    struct _GROUP_FAULT_REFERENCE GroupFaultReferences[512];// Offset=0x70 Size=0x1000
};
