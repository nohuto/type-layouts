struct _GUID// Size=0x10 (Id=117)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _PO_FX_COMPONENT_V2// Size=0x38 (Id=3449)
{
    struct _GUID Id;// Offset=0x0 Size=0x10
    unsigned long long Flags;// Offset=0x10 Size=0x8
    unsigned long DeepestWakeableIdleState;// Offset=0x18 Size=0x4
    unsigned long IdleStateCount;// Offset=0x1c Size=0x4
    struct _PO_FX_COMPONENT_IDLE_STATE * IdleStates;// Offset=0x20 Size=0x8
    unsigned long ProviderCount;// Offset=0x28 Size=0x4
    unsigned long * Providers;// Offset=0x30 Size=0x8
};

struct _PO_FX_DEVICE_V2// Size=0x88 (Id=3949)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long long Flags;// Offset=0x8 Size=0x8
    void  ( * ComponentActiveConditionCallback)(void * ,unsigned long );// Offset=0x10 Size=0x8
    void  ( * ComponentIdleConditionCallback)(void * ,unsigned long );// Offset=0x18 Size=0x8
    void  ( * ComponentIdleStateCallback)(void * ,unsigned long ,unsigned long );// Offset=0x20 Size=0x8
    void  ( * DevicePowerRequiredCallback)(void * );// Offset=0x28 Size=0x8
    void  ( * DevicePowerNotRequiredCallback)(void * );// Offset=0x30 Size=0x8
    long  ( * PowerControlCallback)(void * ,struct _GUID * ,void * ,unsigned long long ,void * ,unsigned long long ,unsigned long long * );// Offset=0x38 Size=0x8
    void * DeviceContext;// Offset=0x40 Size=0x8
    unsigned long ComponentCount;// Offset=0x48 Size=0x4
    struct _PO_FX_COMPONENT_V2 Components[1];// Offset=0x50 Size=0x38
};
