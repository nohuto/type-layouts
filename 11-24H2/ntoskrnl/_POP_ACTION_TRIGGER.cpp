struct _unnamed_1485// Size=0x4 (Id=1485)
{
    unsigned long PercentLevel;// Offset=0x0 Size=0x4
};

struct _unnamed_1486// Size=0x4 (Id=1486)
{
    unsigned long Type;// Offset=0x0 Size=0x4
};

struct _POP_ACTION_TRIGGER// Size=0x20 (Id=1487)
{
    enum POWER_POLICY_DEVICE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    struct _POP_TRIGGER_WAIT * Wait;// Offset=0x8 Size=0x8
    struct _DIAGNOSTIC_CONTEXT * DiagnosticContext;// Offset=0x10 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _unnamed_1485 Battery;// Offset=0x18 Size=0x4
        struct _unnamed_1486 Button;// Offset=0x18 Size=0x4
    };
};
