struct _anonymous_31// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=83)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_31 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _LEAP_SECOND_DATA// Size=0x10 (Id=1327)
{
    unsigned char Enabled;// Offset=0x0 Size=0x1
    unsigned long Count;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER Data[1];// Offset=0x8 Size=0x8
};
