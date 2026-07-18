struct _COMPOSITE_DEVICE_CAPABILITIES// Size=0x4 (Id=765)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long CapabilityFunctionSuspend:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _REGISTER_COMPOSITE_DEVICE// Size=0x18 (Id=2871)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    struct USBDI_HANDLE__ * Reserved;// Offset=0x8 Size=0x8
    struct _COMPOSITE_DEVICE_CAPABILITIES CapabilityFlags;// Offset=0x10 Size=0x4
    unsigned long FunctionCount;// Offset=0x14 Size=0x4
};
