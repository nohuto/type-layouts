struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _ETW_WMITRACE_WORK// Size=0xf0 (Id=1599)
{
    unsigned long LoggerId;// Offset=0x0 Size=0x4
    unsigned long SiloSessionId;// Offset=0x4 Size=0x4
    union // Size=0xe4 (Id=0)
    {
        char LoggerName[65];// Offset=0x8 Size=0x41
        char FileName[129];// Offset=0x49 Size=0x81
        unsigned long MaximumFileSize;// Offset=0xcc Size=0x4
        unsigned long MinBuffers;// Offset=0xd0 Size=0x4
        unsigned long MaxBuffers;// Offset=0xd4 Size=0x4
        unsigned long BufferSize;// Offset=0xd8 Size=0x4
        unsigned long Mode;// Offset=0xdc Size=0x4
        unsigned long FlushTimer;// Offset=0xe0 Size=0x4
        unsigned long long MatchAny;// Offset=0x8 Size=0x8
        unsigned long long MatchAll;// Offset=0x10 Size=0x8
        unsigned long EnableProperty;// Offset=0x18 Size=0x4
        struct _GUID Guid;// Offset=0x1c Size=0x10
        unsigned char Level;// Offset=0x2c Size=0x1
        long Status;// Offset=0xe8 Size=0x4
    };
};
