enum _FAULT_INFORMATION_ARCH
{
    FaultInformationInvalid=0,
    FaultInformationArm64=1
};

struct _FAULT_INFORMATION_ARM64_FLAGS// Size=0x4 (Id=2581)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long WriteNotRead:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long InstructionNotData:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Privileged:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long FaultAddressValid:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Reserved:28;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1c
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

struct _FAULT_INFORMATION_ARM64// Size=0x28 (Id=1662)
{
    void * DomainHandle;// Offset=0x0 Size=0x8
    void * FaultAddress;// Offset=0x8 Size=0x8
    struct _DEVICE_OBJECT * PhysicalDeviceObject;// Offset=0x10 Size=0x8
    unsigned long InputMappingId;// Offset=0x18 Size=0x4
    struct _FAULT_INFORMATION_ARM64_FLAGS Flags;// Offset=0x1c Size=0x4
    enum _FAULT_INFORMATION_ARM64_TYPE Type;// Offset=0x20 Size=0x4
};

struct _FAULT_INFORMATION// Size=0x30 (Id=5140)
{
    enum _FAULT_INFORMATION_ARCH Type;// Offset=0x0 Size=0x4
    struct _FAULT_INFORMATION_ARM64 Arm64;// Offset=0x8 Size=0x28
};
