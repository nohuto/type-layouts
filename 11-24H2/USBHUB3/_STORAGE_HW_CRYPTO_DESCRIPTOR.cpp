struct _STORAGE_DESCRIPTOR_HEADER// Size=0x8 (Id=567)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
};

enum _STORAGE_ICE_TYPE
{
    StorageIceTypeUnknown=0,
    StorageIceTypeUfs=1,
    StorageIceTypeNvme=2
};

union _STORAGE_SECURITY_COMPLIANCE_BITMASK// Size=0x1 (Id=686)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char FIPS:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};

union _STORAGE_CRYPTO_KEY_TYPE// Size=0x1 (Id=546)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char DirectKey:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PlatformWrappedKey:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char PlutonWrappedKey:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:5;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x5
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};

struct _STORAGE_HW_CRYPTO_DESCRIPTOR// Size=0x20 (Id=317)
{
    struct _STORAGE_DESCRIPTOR_HEADER Header;// Offset=0x0 Size=0x8
    unsigned long NumKeysSupported;// Offset=0x8 Size=0x4
    unsigned long NumCryptoCapabilities;// Offset=0xc Size=0x4
    unsigned long OffsetToCryptoCapabilities;// Offset=0x10 Size=0x4
    unsigned long SizeOfCryptoCapability;// Offset=0x14 Size=0x4
    enum _STORAGE_ICE_TYPE IceType;// Offset=0x18 Size=0x4
    union _STORAGE_SECURITY_COMPLIANCE_BITMASK SecurityComplianceBitmask;// Offset=0x1c Size=0x1
    union _STORAGE_CRYPTO_KEY_TYPE KeyTypeBitmask;// Offset=0x1d Size=0x1
};
