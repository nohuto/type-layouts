struct _TIME_FIELDS// Size=0x10 (Id=761)
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

struct _RTL_TIME_ZONE_INFORMATION// Size=0xac (Id=790)
{
    long Bias;// Offset=0x0 Size=0x4
    wchar_t StandardName[32];// Offset=0x4 Size=0x40
    struct _TIME_FIELDS StandardStart;// Offset=0x44 Size=0x10
    long StandardBias;// Offset=0x54 Size=0x4
    wchar_t DaylightName[32];// Offset=0x58 Size=0x40
    struct _TIME_FIELDS DaylightStart;// Offset=0x98 Size=0x10
    long DaylightBias;// Offset=0xa8 Size=0x4
};

struct _RTL_DYNAMIC_TIME_ZONE_INFORMATION// Size=0x1b0 (Id=752)
{
    struct _RTL_TIME_ZONE_INFORMATION tzi;// Offset=0x0 Size=0xac
    wchar_t TimeZoneKeyName[128];// Offset=0xac Size=0x100
    unsigned char DynamicDaylightTimeDisabled;// Offset=0x1ac Size=0x1
};
