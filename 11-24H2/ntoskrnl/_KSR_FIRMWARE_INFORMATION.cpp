union _KSR_CAPABILITIES// Size=0x4 (Id=1652)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PerennialDatabase:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long SkipSubAllocator:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long ExtendedNotifications:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Kseg0Vtl1Mappings64KBAligned:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long Vtl1IsolatedDatabase:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long Reserved:27;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1b
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};

struct _UNICODE_STRING// Size=0x10 (Id=539)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _VIRTUAL_EFI_RUNTIME_SERVICES// Size=0x70 (Id=1409)
{
    unsigned long long GetTime;// Offset=0x0 Size=0x8
    unsigned long long SetTime;// Offset=0x8 Size=0x8
    unsigned long long GetWakeupTime;// Offset=0x10 Size=0x8
    unsigned long long SetWakeupTime;// Offset=0x18 Size=0x8
    unsigned long long SetVirtualAddressMap;// Offset=0x20 Size=0x8
    unsigned long long ConvertPointer;// Offset=0x28 Size=0x8
    unsigned long long GetVariable;// Offset=0x30 Size=0x8
    unsigned long long GetNextVariableName;// Offset=0x38 Size=0x8
    unsigned long long SetVariable;// Offset=0x40 Size=0x8
    unsigned long long GetNextHighMonotonicCount;// Offset=0x48 Size=0x8
    unsigned long long ResetSystem;// Offset=0x50 Size=0x8
    unsigned long long UpdateCapsule;// Offset=0x58 Size=0x8
    unsigned long long QueryCapsuleCapabilities;// Offset=0x60 Size=0x8
    unsigned long long QueryVariableInfo;// Offset=0x68 Size=0x8
};

union _KSR_FLAGS// Size=0x4 (Id=1610)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long MpwrResume:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsULong;// Offset=0x0 Size=0x4
};

struct _KSR_FIRMWARE_INFORMATION// Size=0x150 (Id=773)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    union _KSR_CAPABILITIES DownlevelCapabilities;// Offset=0x4 Size=0x4
    struct _UNICODE_STRING EfiVersionString;// Offset=0x8 Size=0x10
    struct _VIRTUAL_EFI_RUNTIME_SERVICES EfiRuntimeServices;// Offset=0x18 Size=0x70
    void * EfiMemoryMap;// Offset=0x88 Size=0x8
    unsigned long EfiMemoryMapSize;// Offset=0x90 Size=0x4
    unsigned long EfiMemoryMapDescriptorSize;// Offset=0x94 Size=0x4
    struct _MEMORY_CACHING_REQUIREMENTS * CachingRequirements;// Offset=0x98 Size=0x8
    unsigned long CachingRequirementsCount;// Offset=0xa0 Size=0x4
    void * Smbios;// Offset=0xa8 Size=0x8
    struct _INBV_DISPLAY_CONTEXT * DisplayContext;// Offset=0xb0 Size=0x8
    void * SecureBootPolicy;// Offset=0xb8 Size=0x8
    unsigned long SecureBootPolicySize;// Offset=0xc0 Size=0x4
    struct DEBUG_MEMORY_REQUIREMENTS DebugDeviceMemory;// Offset=0xc8 Size=0x20
    unsigned long SoftRestartCount;// Offset=0xe8 Size=0x4
    void * CodeIntegrityPolicy;// Offset=0xf0 Size=0x8
    unsigned long CodeIntegrityPolicySize;// Offset=0xf8 Size=0x4
    void * EfiMemoryAttributes;// Offset=0x100 Size=0x8
    void * Esrt;// Offset=0x108 Size=0x8
    unsigned long EsrtSize;// Offset=0x110 Size=0x4
    void * CodeIntegrityPolicyHash;// Offset=0x118 Size=0x8
    unsigned long CodeIntegrityPolicyHashSize;// Offset=0x120 Size=0x4
    void * CodeIntegrityPolicyOriginalHash;// Offset=0x128 Size=0x8
    unsigned long CodeIntegrityPolicyOriginalHashSize;// Offset=0x130 Size=0x4
    struct _PHYSICAL_MEMORY_RANGE * BadPageRanges;// Offset=0x138 Size=0x8
    unsigned long BadPageRangeCount;// Offset=0x140 Size=0x4
    union _KSR_CAPABILITIES Capabilities;// Offset=0x144 Size=0x4
    union _KSR_FLAGS Flags;// Offset=0x148 Size=0x4
};
