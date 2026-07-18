struct _HAL_ERROR_INFO// Size=0x90 (Id=2947)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long InitMaxSize;// Offset=0x4 Size=0x4
    unsigned long McaMaxSize;// Offset=0x8 Size=0x4
    unsigned long McaPreviousEventsCount;// Offset=0xc Size=0x4
    unsigned long McaCorrectedEventsCount;// Offset=0x10 Size=0x4
    unsigned long McaKernelDeliveryFails;// Offset=0x14 Size=0x4
    unsigned long McaDriverDpcQueueFails;// Offset=0x18 Size=0x4
    unsigned long McaReserved;// Offset=0x1c Size=0x4
    unsigned long CmcMaxSize;// Offset=0x20 Size=0x4
    unsigned long CmcPollingInterval;// Offset=0x24 Size=0x4
    unsigned long CmcInterruptsCount;// Offset=0x28 Size=0x4
    unsigned long CmcKernelDeliveryFails;// Offset=0x2c Size=0x4
    unsigned long CmcDriverDpcQueueFails;// Offset=0x30 Size=0x4
    unsigned long CmcGetStateFails;// Offset=0x34 Size=0x4
    unsigned long CmcClearStateFails;// Offset=0x38 Size=0x4
    unsigned long CmcReserved;// Offset=0x3c Size=0x4
    unsigned long long CmcLogId;// Offset=0x40 Size=0x8
    unsigned long CpeMaxSize;// Offset=0x48 Size=0x4
    unsigned long CpePollingInterval;// Offset=0x4c Size=0x4
    unsigned long CpeInterruptsCount;// Offset=0x50 Size=0x4
    unsigned long CpeKernelDeliveryFails;// Offset=0x54 Size=0x4
    unsigned long CpeDriverDpcQueueFails;// Offset=0x58 Size=0x4
    unsigned long CpeGetStateFails;// Offset=0x5c Size=0x4
    unsigned long CpeClearStateFails;// Offset=0x60 Size=0x4
    unsigned long CpeInterruptSources;// Offset=0x64 Size=0x4
    unsigned long long CpeLogId;// Offset=0x68 Size=0x8
    unsigned long long KernelReserved[4];// Offset=0x70 Size=0x20
};
