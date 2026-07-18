struct _UNICODE_STRING// Size=0x10 (Id=6)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _PO_POWER_PLANE_PROFILE// Size=0x8 (Id=2549)
{
    unsigned long ExclusivePowerMw;// Offset=0x0 Size=0x4
    unsigned long PeakPowerMw;// Offset=0x4 Size=0x4
};

struct _POP_DEVICE_POWER_PROFILE// Size=0x58 (Id=2337)
{
    struct _UNICODE_STRING DeviceId;// Offset=0x0 Size=0x10
    struct _POP_POWER_PLANE * PowerPlane;// Offset=0x10 Size=0x8
    struct _POP_FX_DEVICE * FxDevice;// Offset=0x18 Size=0x8
    long PowerDrawMw;// Offset=0x20 Size=0x4
    struct _PO_POWER_PLANE_PROFILE DxPower[4];// Offset=0x24 Size=0x20
    unsigned long long ComponentCount;// Offset=0x48 Size=0x8
    struct _POP_COMPONENT_POWER_PROFILE ** Components;// Offset=0x50 Size=0x8
};
