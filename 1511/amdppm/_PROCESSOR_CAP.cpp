struct _PROCESSOR_NUMBER// Size=0x4 (Id=460)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned char Number;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
};

struct _PROCESSOR_CAP// Size=0x14 (Id=566)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    struct _PROCESSOR_NUMBER ProcessorNumber;// Offset=0x4 Size=0x4
    unsigned long PlatformCap;// Offset=0x8 Size=0x4
    unsigned long ThermalCap;// Offset=0xc Size=0x4
    unsigned long LimitReasons;// Offset=0x10 Size=0x4
};
