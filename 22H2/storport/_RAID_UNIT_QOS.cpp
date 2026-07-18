struct _RAID_UNIT_QOS// Size=0x30 (Id=650)
{
    unsigned char Enabled;// Offset=0x0 Size=0x1
    unsigned long RetryCount;// Offset=0x4 Size=0x4
    unsigned long ResetUnresponsiveTimeoutIn500MS;// Offset=0x8 Size=0x4
    unsigned long ResetInterval;// Offset=0xc Size=0x4
    unsigned long HwTimeoutInSec;// Offset=0x10 Size=0x4
    unsigned long ResetTimeoutInSec;// Offset=0x14 Size=0x4
    unsigned long MaxWaitTimeIn500MS;// Offset=0x18 Size=0x4
    unsigned char TimerSettingChangeNeeded;// Offset=0x1c Size=0x1
    long AdapterWaitTimeoutCheckEnabled;// Offset=0x20 Size=0x4
    unsigned long long QosThresholdIn100NS;// Offset=0x28 Size=0x8
};
