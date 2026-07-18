struct _ETW_SYSTEM_LOGGER// Size=0x2 (Id=1818)
{
    unsigned char LoggerId;// Offset=0x0 Size=0x1
    unsigned char ClockType;// Offset=0x1 Size=0x1
};

struct _PERFINFO_GROUPMASK// Size=0x20 (Id=581)
{
    unsigned long Masks[8];// Offset=0x0 Size=0x20
};

struct _ETW_SYSTEM_LOGGER_SETTINGS// Size=0x174 (Id=1610)
{
    struct _ETW_SYSTEM_LOGGER EtwpSystemLogger[8];// Offset=0x0 Size=0x10
    unsigned long EtwpActiveSystemLoggers;// Offset=0x10 Size=0x4
    struct _PERFINFO_GROUPMASK SiloGlobalGroupMask;// Offset=0x14 Size=0x20
    struct _PERFINFO_GROUPMASK EtwpGroupMasks[10];// Offset=0x34 Size=0x140
};
