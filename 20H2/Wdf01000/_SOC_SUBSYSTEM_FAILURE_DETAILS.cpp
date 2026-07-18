enum _SOC_SUBSYSTEM_TYPE
{
    SOC_SUBSYS_WIRELESS_MODEM=0,
    SOC_SUBSYS_AUDIO_DSP=1,
    SOC_SUBSYS_WIRELSS_CONNECTIVITY=2,
    SOC_SUBSYS_SENSORS=3,
    SOC_SUBSYS_COMPUTE_DSP=4,
    SOC_SUBSYS_SECURE_PROC=5,
    SOC_SUBSYS_VENDOR_DEFINED=65536
};

struct _SOC_SUBSYSTEM_FAILURE_DETAILS// Size=0x20 (Id=3007)
{
    enum _SOC_SUBSYSTEM_TYPE SubsysType;// Offset=0x0 Size=0x4
    unsigned long long FirmwareVersion;// Offset=0x8 Size=0x8
    unsigned long long HardwareVersion;// Offset=0x10 Size=0x8
    unsigned long UnifiedFailureRegionSize;// Offset=0x18 Size=0x4
    char UnifiedFailureRegion[1];// Offset=0x1c Size=0x1
};
