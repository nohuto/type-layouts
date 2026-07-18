enum _D3DKMDT_MONITOR_ORIENTATION
{
    D3DKMDT_MO_UNINITIALIZED=0,
    D3DKMDT_MO_0DEG=1,
    D3DKMDT_MO_90DEG=2,
    D3DKMDT_MO_180DEG=3,
    D3DKMDT_MO_270DEG=4
};

enum _DMM_MODE_PRUNING_ALGORITHM
{
    DMM_MPA_UNINITIALIZED=0,
    DMM_MPA_GDI=1,
    DMM_MPA_VISTA=2,
    DMM_MPA_GDI_VISTA_UNION=3,
    DMM_MPA_MAXVALID=3
};

enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

enum _DMM_VIDPN_MONITOR_TYPE
{
    DMM_VMT_UNINITIALIZED=0,
    DMM_VMT_PHYSICAL_MONITOR=1,
    DMM_VMT_BOOT_PERSISTENT_MONITOR=2,
    DMM_VMT_PERSISTENT_MONITOR=3,
    DMM_VMT_TEMPORARY_MONITOR=4,
    DMM_VMT_SIMULATED_MONITOR=5
};

struct _DMM_MONITOR_SERIALIZATION// Size=0x28 (Id=175)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned int VideoPresentTargetId;// Offset=0x4 Size=0x4
    enum _D3DKMDT_MONITOR_ORIENTATION Orientation;// Offset=0x8 Size=0x4
    unsigned char IsSimulatedMonitor;// Offset=0xc Size=0x1
    unsigned char IsUsingDefaultProfile;// Offset=0xd Size=0x1
    enum _DMM_MODE_PRUNING_ALGORITHM ModePruningAlgorithm;// Offset=0x10 Size=0x4
    enum _DEVICE_POWER_STATE MonitorPowerState;// Offset=0x14 Size=0x4
    unsigned long SourceModeSetOffset;// Offset=0x18 Size=0x4
    unsigned long FrequencyRangeSetOffset;// Offset=0x1c Size=0x4
    unsigned long DescriptorSetOffset;// Offset=0x20 Size=0x4
    enum _DMM_VIDPN_MONITOR_TYPE MonitorType;// Offset=0x24 Size=0x4
};
