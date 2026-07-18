struct _unnamed_1122// Size=0x4 (Id=1122)
{
    unsigned long PercentLevel;// Offset=0x0 Size=0x4
};

struct _unnamed_1123// Size=0x4 (Id=1123)
{
    unsigned long Type;// Offset=0x0 Size=0x4
};

struct _POP_ACTION_TRIGGER// Size=0x18 (Id=1124)
{
    enum POWER_POLICY_DEVICE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _POP_TRIGGER_WAIT * Wait;// Offset=0x8 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _unnamed_1122 Battery;// Offset=0x10 Size=0x4
        struct _unnamed_1123 Button;// Offset=0x10 Size=0x4
    };
};
