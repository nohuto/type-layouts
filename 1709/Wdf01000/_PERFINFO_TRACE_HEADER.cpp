struct _WMI_TRACE_PACKET// Size=0x4 (Id=3858)
{
    unsigned short Size;// Offset=0x0 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short HookId;// Offset=0x2 Size=0x2
        unsigned char Type;// Offset=0x2 Size=0x1
    };
    unsigned char Group;// Offset=0x3 Size=0x1
};

struct _unnamed_120// Size=0x8 (Id=120)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=121)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_120 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _PERFINFO_TRACE_HEADER// Size=0x18 (Id=2294)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Marker;// Offset=0x0 Size=0x4
        unsigned short Version;// Offset=0x0 Size=0x2
        unsigned char HeaderType;// Offset=0x2 Size=0x1
        unsigned char Flags;// Offset=0x3 Size=0x1
    };
    union // Size=0x4 (Id=0)
    {
        unsigned long Header;// Offset=0x4 Size=0x4
        struct _WMI_TRACE_PACKET Packet;// Offset=0x4 Size=0x4
    };
    union // Size=0x8 (Id=0)
    {
        unsigned long long TS;// Offset=0x8 Size=0x8
        union _LARGE_INTEGER SystemTime;// Offset=0x8 Size=0x8
    };
    unsigned char Data[1];// Offset=0x10 Size=0x1
};
