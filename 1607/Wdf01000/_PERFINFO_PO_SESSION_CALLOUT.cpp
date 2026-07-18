enum _SYSTEM_POWER_STATE
{
    PowerSystemUnspecified=0,
    PowerSystemWorking=1,
    PowerSystemSleeping1=2,
    PowerSystemSleeping2=3,
    PowerSystemSleeping3=4,
    PowerSystemHibernate=5,
    PowerSystemShutdown=6,
    PowerSystemMaximum=7
};

struct _PERFINFO_PO_SESSION_CALLOUT// Size=0x10 (Id=2516)
{
    enum POWER_ACTION SystemAction;// Offset=0x0 Size=0x4
    enum _SYSTEM_POWER_STATE MinSystemState;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long PowerStateTask;// Offset=0xc Size=0x4
};
