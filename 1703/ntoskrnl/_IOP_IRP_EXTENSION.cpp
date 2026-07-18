struct _GUID// Size=0x10 (Id=105)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _unnamed_30// Size=0x8 (Id=30)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=31)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_30 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _IO_ADAPTER_CRYPTO_PARAMETERS// Size=0x10 (Id=897)
{
    unsigned long long Tweak;// Offset=0x0 Size=0x8
    struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR * KeyDescriptor;// Offset=0x8 Size=0x8
};

struct _IOP_IRP_EXTENSION// Size=0x38 (Id=451)
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
};
