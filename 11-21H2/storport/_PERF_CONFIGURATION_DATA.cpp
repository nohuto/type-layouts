struct _PERF_CONFIGURATION_DATA// Size=0x28 (Id=150)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long ConcurrentChannels;// Offset=0xc Size=0x4
    unsigned long FirstRedirectionMessageNumber;// Offset=0x10 Size=0x4
    unsigned long LastRedirectionMessageNumber;// Offset=0x14 Size=0x4
    unsigned long DeviceNode;// Offset=0x18 Size=0x4
    unsigned long Reserved;// Offset=0x1c Size=0x4
    struct _GROUP_AFFINITY * MessageTargets;// Offset=0x20 Size=0x8
};
