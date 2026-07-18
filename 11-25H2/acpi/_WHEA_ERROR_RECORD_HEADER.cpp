union _WHEA_REVISION// Size=0x2 (Id=409)
{
    unsigned char MinorRevision;// Offset=0x0 Size=0x1
    unsigned char MajorRevision;// Offset=0x1 Size=0x1
    unsigned short AsUSHORT;// Offset=0x0 Size=0x2
};

enum _WHEA_ERROR_SEVERITY
{
    WheaErrSevRecoverable=0,
    WheaErrSevFatal=1,
    WheaErrSevCorrected=2,
    WheaErrSevInformational=3
};

union _WHEA_ERROR_RECORD_HEADER_VALIDBITS// Size=0x4 (Id=295)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long PlatformId:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Timestamp:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PartitionId:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _unnamed_44// Size=0x8 (Id=44)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=108)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_44 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

union _WHEA_TIMESTAMP// Size=0x8 (Id=269)
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

struct _GUID// Size=0x10 (Id=55)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _WHEA_ERROR_RECORD_HEADER_FLAGS// Size=0x4 (Id=333)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Recovered:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long PreviousError:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Simulated:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long DeviceDriver:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long CriticalEvent:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long PersistPfn:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long SectionsTruncated:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long RecoveryInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Throttle:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _WHEA_PERSISTENCE_INFO// Size=0x8 (Id=422)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Signature:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Length:24;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x18
        unsigned long long Identifier:16;// Offset=0x0 Size=0x8 BitOffset=0x28 BitSize=0x10
        unsigned long long Attributes:2;// Offset=0x0 Size=0x8 BitOffset=0x38 BitSize=0x2
        unsigned long long DoNotLog:1;// Offset=0x0 Size=0x8 BitOffset=0x3a BitSize=0x1
        unsigned long long Reserved:5;// Offset=0x0 Size=0x8 BitOffset=0x3b BitSize=0x5
    };
    unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
};

struct _WHEA_ERROR_RECORD_HEADER// Size=0x80 (Id=248)
{
    unsigned long Signature;// Offset=0x0 Size=0x4
    union _WHEA_REVISION Revision;// Offset=0x4 Size=0x2
    unsigned long SignatureEnd;// Offset=0x6 Size=0x4
    unsigned short SectionCount;// Offset=0xa Size=0x2
    enum _WHEA_ERROR_SEVERITY Severity;// Offset=0xc Size=0x4
    union _WHEA_ERROR_RECORD_HEADER_VALIDBITS ValidBits;// Offset=0x10 Size=0x4
    unsigned long Length;// Offset=0x14 Size=0x4
    union _WHEA_TIMESTAMP Timestamp;// Offset=0x18 Size=0x8
    struct _GUID PlatformId;// Offset=0x20 Size=0x10
    struct _GUID PartitionId;// Offset=0x30 Size=0x10
    struct _GUID CreatorId;// Offset=0x40 Size=0x10
    struct _GUID NotifyType;// Offset=0x50 Size=0x10
    unsigned long long RecordId;// Offset=0x60 Size=0x8
    union _WHEA_ERROR_RECORD_HEADER_FLAGS Flags;// Offset=0x68 Size=0x4
    union _WHEA_PERSISTENCE_INFO PersistenceInfo;// Offset=0x6c Size=0x8
    union // Size=0x80 (Id=0)
    {
        unsigned long OsBuildNumber;// Offset=0x74 Size=0x4
        unsigned char Reserved2[8];// Offset=0x78 Size=0x8
        unsigned char Reserved[12];// Offset=0x74 Size=0xc
    };
};
