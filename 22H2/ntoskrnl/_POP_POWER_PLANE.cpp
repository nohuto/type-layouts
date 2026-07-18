struct _UNICODE_STRING// Size=0x10 (Id=471)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _POP_POWER_PLANE// Size=0x40 (Id=2014)
{
    struct _UNICODE_STRING PowerPlaneId;// Offset=0x0 Size=0x10
    unsigned long long Lock;// Offset=0x10 Size=0x8
    unsigned char OldIrql;// Offset=0x18 Size=0x1
    long DevicePowerMw;// Offset=0x1c Size=0x4
    void * PmaxHandle;// Offset=0x20 Size=0x8
    void  ( * NotifyDevicePowerDraw)(void * ,unsigned long );// Offset=0x28 Size=0x8
    unsigned long long DeviceCount;// Offset=0x30 Size=0x8
    struct _POP_DEVICE_POWER_PROFILE ** Devices;// Offset=0x38 Size=0x8
};
