struct _anonymous_1003// Size=0x4 (Id=1003)
{
    unsigned long PercentLevel;// Offset=0x0 Size=0x4
};

struct _anonymous_1004// Size=0x4 (Id=1004)
{
    unsigned long Type;// Offset=0x0 Size=0x4
};

struct _POP_ACTION_TRIGGER// Size=0x18 (Id=1005)
{
    enum POWER_POLICY_DEVICE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _POP_TRIGGER_WAIT * Wait;// Offset=0x8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _anonymous_1003 Battery;// Offset=0x10 Size=0x4
        struct _anonymous_1004 Button;// Offset=0x10 Size=0x4
    };
};
