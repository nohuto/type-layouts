struct _HIDDEN_PROCESSOR_POWER_INTERFACE// Size=0x28 (Id=1568)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    long  ( * ReadPerfMsr)(unsigned long ,unsigned long ,unsigned long long * );// Offset=0x8 Size=0x8
    long  ( * WritePerfMsr)(unsigned long ,unsigned long ,unsigned long long ,unsigned long long );// Offset=0x10 Size=0x8
    long  ( * ReadPerfIoPort)(unsigned long ,unsigned short ,unsigned short ,unsigned long * );// Offset=0x18 Size=0x8
    long  ( * WritePerfIoPort)(unsigned long ,unsigned short ,unsigned short ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
};
