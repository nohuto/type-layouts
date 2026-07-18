struct _GUID// Size=0x10 (Id=79)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _LUID// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

struct _FX_EXT_RDP_DATA// Size=0x1c (Id=3823)
{
    struct _GUID ActivityId;// Offset=0x0 Size=0x10
    struct _LUID TerminalLuid;// Offset=0x10 Size=0x8
    unsigned long SessionId;// Offset=0x18 Size=0x4
};
