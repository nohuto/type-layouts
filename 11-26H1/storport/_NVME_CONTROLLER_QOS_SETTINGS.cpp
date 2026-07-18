struct _NVME_CONTROLLER_QOS_SETTINGS// Size=0x10 (Id=910)
{
    unsigned long ResetUnresponsiveTimeoutIn500MS;// Offset=0x0 Size=0x4
    unsigned long ResetIntervalInMS;// Offset=0x4 Size=0x4
    unsigned long ResetTimeoutInSec;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
};
