struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_714// Size=0x8 (Id=714)
{
    unsigned short McaCod;// Offset=0x0 Size=0x2
    unsigned short MsCod;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long OtherInfo:25;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x19
        unsigned long Damage:1;// Offset=0x4 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long AddressValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long MiscValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long Enabled:1;// Offset=0x4 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long UnCorrected:1;// Offset=0x4 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long OverFlow:1;// Offset=0x4 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Valid:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _MCI_STATS// Size=0x8 (Id=715)
{
    struct _anonymous_714 MciStats;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

union _MCI_ADDR// Size=0x8 (Id=702)
{
    unsigned long Address;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _anonymous_615// Size=0x20 (Id=615)
{
    unsigned char BankNumber;// Offset=0x0 Size=0x1
    unsigned char Reserved2[7];// Offset=0x1 Size=0x7
    union _MCI_STATS Status;// Offset=0x8 Size=0x8
    union _MCI_ADDR Address;// Offset=0x10 Size=0x8
    unsigned long long Misc;// Offset=0x18 Size=0x8
};

struct _anonymous_616// Size=0x10 (Id=616)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned long long Type;// Offset=0x8 Size=0x8
};

union _anonymous_617// Size=0x20 (Id=617)
{
    union // Size=0x20 (Id=0)
    {
        struct _anonymous_615 Mca;// Offset=0x0 Size=0x20
        struct _anonymous_616 Mce;// Offset=0x0 Size=0x10
    };
};

struct _MCA_EXCEPTION// Size=0x100 (Id=618)
{
    unsigned long VersionNumber;// Offset=0x0 Size=0x4
    enum MCA_EXCEPTION_TYPE ExceptionType;// Offset=0x4 Size=0x4
    union _LARGE_INTEGER TimeStamp;// Offset=0x8 Size=0x8
    unsigned long ProcessorNumber;// Offset=0x10 Size=0x4
    unsigned long Reserved1;// Offset=0x14 Size=0x4
    union _anonymous_617 u;// Offset=0x18 Size=0x20
    unsigned long ExtCnt;// Offset=0x38 Size=0x4
    unsigned long Reserved3;// Offset=0x3c Size=0x4
    unsigned long long ExtReg[24];// Offset=0x40 Size=0xc0
};
