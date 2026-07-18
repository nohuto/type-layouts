struct _GUID// Size=0x10 (Id=58)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=252)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _IO_ADAPTER_CRYPTO_PARAMETERS// Size=0x10 (Id=1625)
{
    unsigned long long Tweak;// Offset=0x0 Size=0x8
    struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR * KeyDescriptor;// Offset=0x8 Size=0x8
};

union _unnamed_1016// Size=0x8 (Id=1016)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long UserFlags:32;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x20
        unsigned long long SystemFlags:16;// Offset=0x0 Size=0x8 BitOffset=0x20 BitSize=0x10
        unsigned long long UserFlagsId:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
};

struct _COPY_INFORMATION// Size=0x10 (Id=1241)
{
    struct _FILE_OBJECT * SourceFileObject;// Offset=0x0 Size=0x8
    long long SourceFileOffset;// Offset=0x8 Size=0x8
};

struct _IOP_IRP_EXTENSION// Size=0x50 (Id=1017)
{
    union // Size=0x2 (Id=0)
    {
        unsigned short ExtensionFlags;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short Allocated:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short PropagateId:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short SpareBits:14;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0xe
        };
    };
    unsigned short TypesAllocated;// Offset=0x2 Size=0x2
    unsigned char GenericExtension[4];// Offset=0x4 Size=0x4
    void * VerifierContext;// Offset=0x8 Size=0x8
    unsigned long long DiskIoAttributionHandle;// Offset=0x10 Size=0x8
    struct _GUID ActivityId;// Offset=0x18 Size=0x10
    union // Size=0x38 (Id=0)
    {
        union _LARGE_INTEGER Timestamp;// Offset=0x28 Size=0x8
        unsigned long ZeroingOffset;// Offset=0x28 Size=0x4
        struct _IO_IRP_EXT_TRACK_OFFSET_HEADER * FsTrackOffsetBlob;// Offset=0x28 Size=0x8
        long long FsTrackedOffset;// Offset=0x30 Size=0x8
        struct _IO_ADAPTER_CRYPTO_PARAMETERS AdapterCryptoParameters;// Offset=0x28 Size=0x10
    };
    union _unnamed_1016 DriverFlags;// Offset=0x38 Size=0x8
    struct _COPY_INFORMATION CopyInformation;// Offset=0x40 Size=0x10
};
