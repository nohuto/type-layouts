struct _PERFINFO_PPM_IDLE_STATE_ENTER// Size=0x10 (Id=2048)
{
    unsigned long State;// Offset=0x0 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned short Properties;// Offset=0x4 Size=0x2
        unsigned char ExpectedWakeReason;// Offset=0x6 Size=0x1
        unsigned char Reserved;// Offset=0x7 Size=0x1
        unsigned long Flags;// Offset=0x4 Size=0x4
    };
    unsigned long long ExpectedDuration;// Offset=0x8 Size=0x8
};
