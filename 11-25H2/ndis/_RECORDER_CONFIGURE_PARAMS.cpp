enum _WPP_RECORDER_TRI_STATE
{
    WppRecorderFalse=0,
    WppRecorderTrue=1,
    WppRecorderUseDefault=2
};

struct _RECORDER_CONFIGURE_PARAMS// Size=0x10 (Id=308)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned char CreateDefaultLog;// Offset=0x4 Size=0x1
    enum _WPP_RECORDER_TRI_STATE UseTimeStamp;// Offset=0x8 Size=0x4
    enum _WPP_RECORDER_TRI_STATE PreciseTimeStamp;// Offset=0xc Size=0x4
};
