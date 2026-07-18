struct _unnamed_9// Size=0x8 (Id=9)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=587)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _unnamed_9 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _GUID// Size=0x10 (Id=647)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _IO_ADAPTER_CRYPTO_KEY_DESCRIPTOR// Size=0x70 (Id=1820)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long CryptoIndex;// Offset=0x8 Size=0x4
    unsigned long AlgorithmId;// Offset=0xc Size=0x4
    unsigned long DataUnitSize;// Offset=0x10 Size=0x4
    unsigned long KeySize;// Offset=0x14 Size=0x4
    unsigned char KeyHash[32];// Offset=0x18 Size=0x20
    void * KeyVirtualAddress;// Offset=0x38 Size=0x8
    union _LARGE_INTEGER KeyPhysicalAddress;// Offset=0x40 Size=0x8
    struct _GUID KeyNamespaceId;// Offset=0x48 Size=0x10
    enum _STORAGE_ICE_KEY_TYPE KeyType;
    long  ( * AdjustCryptoParametersCallback)(void * ,struct _IO_ADAPTER_CRYPTO_PARAMETERS * ,long long );// Offset=0x60 Size=0x8
    void * AdjustCryptoParametersCallbackContext;// Offset=0x68 Size=0x8
};
