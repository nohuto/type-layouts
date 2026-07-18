struct ACPI_PSS_STATE// Size=0x30 (Id=692)
{
    unsigned long CoreFrequency;// Offset=0x0 Size=0x4
    unsigned long Power;// Offset=0x4 Size=0x4
    unsigned long Latency;// Offset=0x8 Size=0x4
    unsigned long BmLatency;// Offset=0xc Size=0x4
    unsigned long long Control;// Offset=0x10 Size=0x8
    unsigned long long Status;// Offset=0x18 Size=0x8
    unsigned long long ControlMask;// Offset=0x20 Size=0x8
    unsigned long long StatusMask;// Offset=0x28 Size=0x8
};
