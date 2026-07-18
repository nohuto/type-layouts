struct _unnamed_679// Size=0x8 (Id=679)
{
    unsigned short McaErrorCode;// Offset=0x0 Size=0x2
    unsigned short ModelErrorCode;// Offset=0x2 Size=0x2
    struct // Size=0x4 (Id=0)
    {
        unsigned long OtherInformation:25;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x19
        unsigned long ContextCorrupt:1;// Offset=0x4 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long AddressValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1a BitSize=0x1
        unsigned long MiscValid:1;// Offset=0x4 Size=0x4 BitOffset=0x1b BitSize=0x1
        unsigned long ErrorEnabled:1;// Offset=0x4 Size=0x4 BitOffset=0x1c BitSize=0x1
        unsigned long UncorrectedError:1;// Offset=0x4 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned long StatusOverFlow:1;// Offset=0x4 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long Valid:1;// Offset=0x4 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _MCI_STATS// Size=0x8 (Id=680)
{
    struct _unnamed_679 MciStatus;// Offset=0x0 Size=0x8
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

union _MCI_ADDR// Size=0x8 (Id=669)
{
    unsigned long Address;// Offset=0x0 Size=0x4
    unsigned long Reserved;// Offset=0x4 Size=0x4
    unsigned long long QuadPart;// Offset=0x0 Size=0x8
};

struct _unnamed_591// Size=0x20 (Id=591)
{
    unsigned char BankNumber;// Offset=0x0 Size=0x1
    unsigned char Reserved2[7];// Offset=0x1 Size=0x7
    union _MCI_STATS Status;// Offset=0x8 Size=0x8
    union _MCI_ADDR Address;// Offset=0x10 Size=0x8
    unsigned long long Misc;// Offset=0x18 Size=0x8
};

struct _unnamed_592// Size=0x10 (Id=592)
{
    unsigned long long Address;// Offset=0x0 Size=0x8
    unsigned long long Type;// Offset=0x8 Size=0x8
};

union _unnamed_593// Size=0x20 (Id=593)
{
    union // Size=0x20 (Id=0)
    {
        struct _unnamed_591 Mca;// Offset=0x0 Size=0x20
        struct _unnamed_592 Mce;// Offset=0x0 Size=0x10
    };
};
