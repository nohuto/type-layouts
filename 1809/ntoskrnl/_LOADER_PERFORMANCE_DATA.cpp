struct _LOADER_PERFORMANCE_DATA// Size=0x48 (Id=1773)
{
    unsigned long long StartTime;// Offset=0x0 Size=0x8
    unsigned long long EndTime;// Offset=0x8 Size=0x8
    unsigned long long PreloadEndTime;// Offset=0x10 Size=0x8
    unsigned long long TcbLoaderStartTime;// Offset=0x18 Size=0x8
    unsigned long long LoadHypervisorTime;// Offset=0x20 Size=0x8
    unsigned long long LaunchHypervisorTime;// Offset=0x28 Size=0x8
    unsigned long long LoadVsmTime;// Offset=0x30 Size=0x8
    unsigned long long LaunchVsmTime;// Offset=0x38 Size=0x8
    unsigned long long LoadDriversTime;// Offset=0x40 Size=0x8
};
