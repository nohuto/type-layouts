struct _LIST_ENTRY// Size=0x10 (Id=5)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _UNICODE_STRING// Size=0x10 (Id=614)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _unnamed_10// Size=0x8 (Id=10)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=11)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_10 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _NVME_ICE_KEY_TABLE// Size=0x28 (Id=971)
{
    unsigned long NumKeyEntries;// Offset=0x0 Size=0x4
    unsigned long MaxKeySize;// Offset=0x4 Size=0x4
    struct // Size=0x1 (Id=0)
    {
        unsigned char KeyTableFull:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x8 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    struct _NVME_ICE_KEY_ENTRY * Table;// Offset=0x10 Size=0x8
    long KeyTableLock;// Offset=0x18 Size=0x4
    unsigned long NumKeySlotFull;// Offset=0x1c Size=0x4
    union _LARGE_INTEGER TimestampLastKeySlotFullReported;// Offset=0x20 Size=0x8
};

struct _NVME_ICE_ENTRY// Size=0x70 (Id=436)
{
    struct _LIST_ENTRY ListEntry;// Offset=0x0 Size=0x10
    long RefCount;// Offset=0x10 Size=0x4
    struct _UNICODE_STRING DeviceSymbolicLinkName;// Offset=0x18 Size=0x10
    struct NVME_ICE_INTERFACE * NvmeIceInterface;// Offset=0x28 Size=0x8
    struct NVME_ICE_INTERFACE_V2 * NvmeIceInterfaceV2;// Offset=0x30 Size=0x8
    struct _NVME_ICE_KEY_TABLE NvmeIceKeyTable;// Offset=0x38 Size=0x28
    unsigned char SecurityComplianceBitmask;// Offset=0x60 Size=0x1
    struct _STOR_CRYPTO_CAPABILITIES_DATA_INTERNAL * PlatformCryptoCapabilities;// Offset=0x68 Size=0x8
};
