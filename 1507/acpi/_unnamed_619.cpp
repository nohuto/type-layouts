struct _unnamed_8// Size=0x8 (Id=8)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
};

union _ULARGE_INTEGER// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    unsigned long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_8 u;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_618// Size=0x8 (Id=618)
{
    unsigned long MessageAddressLow;// Offset=0x0 Size=0x4
    unsigned short MessageData;// Offset=0x4 Size=0x2
    unsigned short Reserved;// Offset=0x6 Size=0x2
};

union _unnamed_619// Size=0x8 (Id=619)
{
    union _ULARGE_INTEGER RemappedFormat;// Offset=0x0 Size=0x8
    struct _unnamed_618 Msi;// Offset=0x0 Size=0x8
};
