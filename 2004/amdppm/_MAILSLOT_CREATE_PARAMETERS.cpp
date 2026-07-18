struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=63)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _MAILSLOT_CREATE_PARAMETERS// Size=0x18 (Id=565)
{
    unsigned long MailslotQuota;// Offset=0x0 Size=0x4
    unsigned long MaximumMessageSize;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER ReadTimeout;// Offset=0x8 Size=0x8
    unsigned char TimeoutSpecified;// Offset=0x10 Size=0x1
};
