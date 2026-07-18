struct _WMI_IDE_CHANNEL_RECORD// Size=0x14 (Id=2026)
{
    unsigned long TargetId;// Offset=0x0 Size=0x4
    unsigned long DeviceType;// Offset=0x4 Size=0x4
    unsigned long DeviceTimingMode;// Offset=0x8 Size=0x4
    unsigned long LocationInformationLen;// Offset=0xc Size=0x4
    wchar_t LocationInformation[1];// Offset=0x10 Size=0x2
};
