enum _PERFINFO_DOMAIN_CHANGE_EVENT_REASON
{
    PerfInfoDomainChangeEventIdleHalt=0,
    PerfInfoDomainChangeEventIdleResume=1,
    PerfInfoDomainChangeEventUserRestore=2,
    PerfInfoDomainChangeEventUserCallout=3,
    PerfInfoDomainChangeEventEnterSyscall=4,
    PerfInfoDomainChangeEventEnterTrap=5,
    PerfInfoDomainChangeEventMaximum=6
};

struct _PERFINFO_DOMAIN_CHANGE_EVENT// Size=0x10 (Id=1833)
{
    unsigned long long NewDomain;// Offset=0x0 Size=0x8
    enum _PERFINFO_DOMAIN_CHANGE_EVENT_REASON Reason;// Offset=0x8 Size=0x4
    unsigned long ThreadId;// Offset=0xc Size=0x4
};
