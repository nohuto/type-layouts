struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

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

struct _NDIS_MINIPORT_SYSPOWER_NOTIFY// Size=0xc (Id=538)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    enum _SYSTEM_POWER_STATE TargetSystemState;// Offset=0x4 Size=0x4
    enum _SYSTEM_POWER_STATE EffectiveSystemState;// Offset=0x8 Size=0x4
};
