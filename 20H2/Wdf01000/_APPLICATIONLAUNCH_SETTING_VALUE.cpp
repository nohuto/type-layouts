struct _anonymous_108// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=109)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_108 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _APPLICATIONLAUNCH_SETTING_VALUE// Size=0x10 (Id=2638)
{
    union _LARGE_INTEGER ActivationTime;// Offset=0x0 Size=0x8
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long ButtonInstanceID;// Offset=0xc Size=0x4
};
