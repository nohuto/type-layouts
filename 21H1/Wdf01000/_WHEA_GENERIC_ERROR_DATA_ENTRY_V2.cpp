struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

enum _WHEA_ERROR_SEVERITY
{
    WheaErrSevRecoverable=0,
    WheaErrSevFatal=1,
    WheaErrSevCorrected=2,
    WheaErrSevInformational=3
};

union _WHEA_REVISION// Size=0x2 (Id=924)
{
    unsigned char MinorRevision;// Offset=0x0 Size=0x1
    unsigned char MajorRevision;// Offset=0x1 Size=0x1
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

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

union _WHEA_TIMESTAMP// Size=0x8 (Id=841)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Seconds:8;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x8
        unsigned long long Minutes:8;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x8
        unsigned long long Hours:8;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x8
        unsigned long long Precise:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long Reserved:7;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x7
        unsigned long long Day:8;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x8
        unsigned long long Month:8;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x8
        unsigned long long Year:8;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x8
        unsigned long long Century:8;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x8
    };
    union _LARGE_INTEGER AsLARGE_INTEGER;// Offset=0x0 Size=0x8
};

struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V2// Size=0x49 (Id=2386)
{
    struct _GUID SectionType;// Offset=0x0 Size=0x10
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;// Offset=0x10 Size=0x4
    union _WHEA_REVISION Revision;// Offset=0x14 Size=0x2
    unsigned char ValidBits;// Offset=0x16 Size=0x1
    unsigned char Flags;// Offset=0x17 Size=0x1
    unsigned long ErrorDataLength;// Offset=0x18 Size=0x4
    struct _GUID FRUId;// Offset=0x1c Size=0x10
    unsigned char FRUText[20];// Offset=0x2c Size=0x14
    union _WHEA_TIMESTAMP Timestamp;// Offset=0x40 Size=0x8
    unsigned char Data[1];// Offset=0x48 Size=0x1
};
