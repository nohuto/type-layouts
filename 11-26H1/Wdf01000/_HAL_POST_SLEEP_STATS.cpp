struct _HAL_POST_SLEEP_STATS// Size=0x18 (Id=3190)
{
    unsigned long PostSleepTimeMs;// Offset=0x0 Size=0x4
    unsigned long PostSleepMPTimeMs;// Offset=0x4 Size=0x4
    unsigned long InterruptReinitTimeMs;// Offset=0x8 Size=0x4
    unsigned long IommuReinitTimeMs;// Offset=0xc Size=0x4
    unsigned long WakeProcessorsTimeMs;// Offset=0x10 Size=0x4
    unsigned long UpdateMicrocodeTimeMs;// Offset=0x14 Size=0x4
};
