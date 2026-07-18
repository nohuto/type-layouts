enum _PCQEV_STATUS
{
    PcqEv_Reset=10,
    PcqEv_Wait=20,
    PcqEv_Signal=30
};

struct _G_STATE_LOG_ENTRY// Size=0x20 (Id=182)
{
    unsigned long Event;// Offset=0x0 Size=0x4
    unsigned long CurrentState;// Offset=0x4 Size=0x4
    unsigned long NextState;// Offset=0x8 Size=0x4
    unsigned long Tag;// Offset=0xc Size=0x4
    enum _PCQEV_STATUS PcqEv_Suspend;// Offset=0x10 Size=0x4
    enum _PCQEV_STATUS PcqEv_Resume;// Offset=0x14 Size=0x4
    enum _PCQEV_STATUS PcqEv_ChDone;// Offset=0x18 Size=0x4
    enum _PCQEV_STATUS PcqEv_DriverReset;// Offset=0x1c Size=0x4
};
