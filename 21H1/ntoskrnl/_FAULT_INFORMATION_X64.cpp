struct _FAULT_INFORMATION_X64_FLAGS// Size=0x4 (Id=1949)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FaultAddressValid:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

enum _FAULT_INFORMATION_ARM64_TYPE
{
    UnsupportedUpstreamTransaction=0,
    AddressSizeFault=1,
    TlbMatchConflict=2,
    ExternalFault=3,
    PermissionFault=4,
    AccessFlagFault=5,
    TranslationFault=6,
    MaxFaultType=7
};

struct _FAULT_INFORMATION_X64// Size=0x28 (Id=1865)
{
    void * DomainHandle;// Offset=0x0 Size=0x8
    void * FaultAddress;// Offset=0x8 Size=0x8
    struct _FAULT_INFORMATION_X64_FLAGS Flags;// Offset=0x10 Size=0x4
    enum _FAULT_INFORMATION_ARM64_TYPE Type;// Offset=0x14 Size=0x4
    unsigned long long IommuBaseAddress;// Offset=0x18 Size=0x8
    unsigned long PciSegment;// Offset=0x20 Size=0x4
};
