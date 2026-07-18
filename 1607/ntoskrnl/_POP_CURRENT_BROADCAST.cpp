struct _SYSTEM_POWER_STATE_CONTEXT// Size=0x4 (Id=874)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long Reserved1:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long TargetSystemState:4;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x4
            unsigned long EffectiveSystemState:4;// Offset=0x0 Size=0x4 BitOffset=0xc BitSize=0x4
            unsigned long CurrentSystemState:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
            unsigned long IgnoreHibernationPath:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long PseudoTransition:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long Reserved2:10;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0xa
        };
        unsigned long ContextAsUlong;// Offset=0x0 Size=0x4
    };
};

struct _POP_CURRENT_BROADCAST// Size=0x18 (Id=602)
{
    unsigned char InProgress;// Offset=0x0 Size=0x1
    struct _SYSTEM_POWER_STATE_CONTEXT SystemContext;// Offset=0x4 Size=0x4
    enum POWER_ACTION PowerAction;// Offset=0x8 Size=0x4
    struct _POP_DEVICE_SYS_STATE * DeviceState;// Offset=0x10 Size=0x8
};
