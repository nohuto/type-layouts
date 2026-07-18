enum _WPP_RECORDER_TRI_STATE
{
    WppRecorderFalse=0,
    WppRecorderTrue=1,
    WppRecorderUseDefault=2
};

struct _RECORDER_LOG_CREATE_PARAMS// Size=0x38 (Id=368)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned long LogTag;// Offset=0x4 Size=0x4
    unsigned long TotalBufferSize;// Offset=0x8 Size=0x4
    unsigned long ErrorPartitionSize;// Offset=0xc Size=0x4
    unsigned long long LogIdentifierAppendValue;// Offset=0x10 Size=0x8
    unsigned char LogIdentifierAppendValueSet;// Offset=0x18 Size=0x1
    unsigned long LogIdentifierSize;// Offset=0x1c Size=0x4
    char LogIdentifier[16];// Offset=0x20 Size=0x10
    enum _WPP_RECORDER_TRI_STATE UseTimeStamp;// Offset=0x30 Size=0x4
    enum _WPP_RECORDER_TRI_STATE PreciseTimeStamp;// Offset=0x34 Size=0x4
};
