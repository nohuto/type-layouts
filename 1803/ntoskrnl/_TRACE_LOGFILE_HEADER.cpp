struct _unnamed_505// Size=0x4 (Id=505)
{
    unsigned char MajorVersion;// Offset=0x0 Size=0x1
    unsigned char MinorVersion;// Offset=0x1 Size=0x1
    unsigned char SubVersion;// Offset=0x2 Size=0x1
    unsigned char SubMinorVersion;// Offset=0x3 Size=0x1
};

struct _unnamed_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=638)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=41)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TIME_FIELDS// Size=0x10 (Id=504)
{
    short Year;// Offset=0x0 Size=0x2
    short Month;// Offset=0x2 Size=0x2
    short Day;// Offset=0x4 Size=0x2
    short Hour;// Offset=0x6 Size=0x2
    short Minute;// Offset=0x8 Size=0x2
    short Second;// Offset=0xa Size=0x2
    short Milliseconds;// Offset=0xc Size=0x2
    short Weekday;// Offset=0xe Size=0x2
};

struct _RTL_TIME_ZONE_INFORMATION// Size=0xac (Id=1252)
{
    long Bias;// Offset=0x0 Size=0x4
    wchar_t StandardName[32];// Offset=0x4 Size=0x40
    struct _TIME_FIELDS StandardStart;// Offset=0x44 Size=0x10
    long StandardBias;// Offset=0x54 Size=0x4
    wchar_t DaylightName[32];// Offset=0x58 Size=0x40
    struct _TIME_FIELDS DaylightStart;// Offset=0x98 Size=0x10
    long DaylightBias;// Offset=0xa8 Size=0x4
};

struct _TRACE_LOGFILE_HEADER// Size=0x118 (Id=506)
{
    unsigned long BufferSize;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Version;// Offset=0x4 Size=0x4
        struct _unnamed_505 VersionDetail;// Offset=0x4 Size=0x4
    };
    unsigned long ProviderVersion;// Offset=0x8 Size=0x4
    unsigned long NumberOfProcessors;// Offset=0xc Size=0x4
    union _LARGE_INTEGER EndTime;// Offset=0x10 Size=0x8
    unsigned long TimerResolution;// Offset=0x18 Size=0x4
    unsigned long MaximumFileSize;// Offset=0x1c Size=0x4
    unsigned long LogFileMode;// Offset=0x20 Size=0x4
    unsigned long BuffersWritten;// Offset=0x24 Size=0x4
    union // Size=0x10 (Id=0)
    {
        struct _GUID LogInstanceGuid;// Offset=0x28 Size=0x10
        unsigned long StartBuffers;// Offset=0x28 Size=0x4
    };
    unsigned long PointerSize;// Offset=0x2c Size=0x4
    unsigned long EventsLost;// Offset=0x30 Size=0x4
    unsigned long CpuSpeedInMHz;// Offset=0x34 Size=0x4
    wchar_t * LoggerName;// Offset=0x38 Size=0x8
    wchar_t * LogFileName;// Offset=0x40 Size=0x8
    struct _RTL_TIME_ZONE_INFORMATION TimeZone;// Offset=0x48 Size=0xac
    union _LARGE_INTEGER BootTime;// Offset=0xf8 Size=0x8
    union _LARGE_INTEGER PerfFreq;// Offset=0x100 Size=0x8
    union _LARGE_INTEGER StartTime;// Offset=0x108 Size=0x8
    unsigned long ReservedFlags;// Offset=0x110 Size=0x4
    unsigned long BuffersLost;// Offset=0x114 Size=0x4
};
