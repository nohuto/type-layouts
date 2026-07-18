struct _GUID// Size=0x10 (Id=117)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PO_POWER_PLANE_PROFILE// Size=0x8 (Id=2002)
{
    unsigned long ExclusivePowerMw;// Offset=0x0 Size=0x4
    unsigned long PeakPowerMw;// Offset=0x4 Size=0x4
};

struct _POP_COMPONENT_POWER_PROFILE// Size=0x28 (Id=1874)
{
    struct _GUID ComponentGuid;// Offset=0x0 Size=0x10
    struct _POP_DEVICE_POWER_PROFILE * Device;// Offset=0x10 Size=0x8
    unsigned long long FxCount;// Offset=0x18 Size=0x8
    struct _PO_POWER_PLANE_PROFILE FxPower[1];// Offset=0x20 Size=0x8
};
