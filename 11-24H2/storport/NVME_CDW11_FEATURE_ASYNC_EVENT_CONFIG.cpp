union NVME_CDW11_FEATURE_ASYNC_EVENT_CONFIG// Size=0x4 (Id=1235)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CriticalWarnings:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
        unsigned long NsAttributeNotices:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long FwActivationNotices:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long TelemetryLogNotices:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long ANAChangeNotices:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
        unsigned long PredictableLogChangeNotices:1;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x1
        unsigned long LBAStatusNotices:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned long EnduranceEventNotices:1;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x1
        unsigned long NormalNVMSubsystemShutdown:1;// Offset=0x0 Size=0x4 BitOffset=0xf BitSize=0x1
        unsigned long Reserved0:11;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0xb
        unsigned long ZoneDescriptorNotices:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Reserved1:3;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x3
        unsigned long DiscoveryLogPageChange:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
