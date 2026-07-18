struct _unnamed_828// Size=0x4 (Id=828)
{
    unsigned long PercentLevel;// Offset=0x0 Size=0x4
};

struct _unnamed_829// Size=0x4 (Id=829)
{
    unsigned long Type;// Offset=0x0 Size=0x4
};

struct _POP_ACTION_TRIGGER// Size=0x18 (Id=830)
{
    enum POWER_POLICY_DEVICE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _POP_TRIGGER_WAIT * Wait;// Offset=0x8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _unnamed_828 Battery;// Offset=0x10 Size=0x4
        struct _unnamed_829 Button;// Offset=0x10 Size=0x4
    };
};
