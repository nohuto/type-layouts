union _unnamed_1107// Size=0x4 (Id=1107)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Enabled:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long TimerSettingChangeNeeded:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Reserved:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};

struct _NVME_NAMESPACE_QOS// Size=0x20 (Id=1108)
{
    union _unnamed_1107 Flags;// Offset=0x0 Size=0x4
    unsigned short HwTimeoutInSec;// Offset=0x4 Size=0x2
    unsigned short ResetTimeoutInSec;// Offset=0x6 Size=0x2
    unsigned long ResetUnresponsiveTimeoutIn500MS;// Offset=0x8 Size=0x4
    unsigned long ResetIntervalInMS;// Offset=0xc Size=0x4
    unsigned long MaxWaitTimeIn500MS;// Offset=0x10 Size=0x4
    unsigned char RetryCount;// Offset=0x14 Size=0x1
    unsigned char Reserved[3];// Offset=0x15 Size=0x3
    unsigned long long QosThresholdIn100NS;// Offset=0x18 Size=0x8
};
