struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=313)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_PROCESSOR_VENDOR
{
    NdisProcessorVendorUnknown=0,
    NdisProcessorVendorGenuinIntel=1,
    NdisProcessorVendorGenuineIntel=1,
    NdisProcessorVendorAuthenticAMD=2
};

struct _NDIS_PROCESSOR_INFO// Size=0x10 (Id=1220)
{
    unsigned long CpuNumber;// Offset=0x0 Size=0x4
    unsigned long PhysicalPackageId;// Offset=0x4 Size=0x4
    unsigned long CoreId;// Offset=0x8 Size=0x4
    unsigned long HyperThreadID;// Offset=0xc Size=0x4
};

struct _NDIS_SYSTEM_PROCESSOR_INFO// Size=0x430 (Id=1106)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    enum _NDIS_PROCESSOR_VENDOR ProcessorVendor;// Offset=0x8 Size=0x4
    unsigned long NumPhysicalPackages;// Offset=0xc Size=0x4
    unsigned long NumCores;// Offset=0x10 Size=0x4
    unsigned long NumCoresPerPhysicalPackage;// Offset=0x14 Size=0x4
    unsigned long MaxHyperThreadingCpusPerCore;// Offset=0x18 Size=0x4
    unsigned long RssBaseCpu;// Offset=0x1c Size=0x4
    unsigned long RssCpuCount;// Offset=0x20 Size=0x4
    unsigned char * RssProcessors;// Offset=0x28 Size=0x8
    struct _NDIS_PROCESSOR_INFO CpuInfo[64];// Offset=0x30 Size=0x400
};
