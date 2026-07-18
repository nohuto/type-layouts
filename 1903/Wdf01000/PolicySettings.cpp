enum _DEVICE_POWER_STATE
{
    PowerDeviceUnspecified=0,
    PowerDeviceD0=1,
    PowerDeviceD1=2,
    PowerDeviceD2=3,
    PowerDeviceD3=4,
    PowerDeviceMaximum=5
};

struct PolicySettings// Size=0x18 (Id=778)
{
    void PolicySettings();
    void ~PolicySettings();
    enum _DEVICE_POWER_STATE DxState;// Offset=0x0 Size=0x4
    class FxWmiInstanceInternal * WmiInstance;// Offset=0x8 Size=0x8
    unsigned char Enabled;// Offset=0x10 Size=0x1
    unsigned char Overridable;// Offset=0x11 Size=0x1
    unsigned char Set;// Offset=0x12 Size=0x1
    unsigned char Dirty;// Offset=0x13 Size=0x1
    void * __vecDelDtor(unsigned int );
};
