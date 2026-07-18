enum _STORAGE_CRYPTO_ALGORITHM_ID
{
    StorageCryptoAlgorithmUnknown=0,
    StorageCryptoAlgorithmXTSAES=1,
    StorageCryptoAlgorithmBitlockerAESCBC=2,
    StorageCryptoAlgorithmAESECB=3,
    StorageCryptoAlgorithmESSIVAESCBC=4,
    StorageCryptoAlgorithmMax=5,
    StorCryptoAlgorithmUnknown=0,
    StorCryptoAlgorithmXTSAES=1,
    StorCryptoAlgorithmBitlockerAESCBC=2,
    StorCryptoAlgorithmAESECB=3,
    StorCryptoAlgorithmESSIVAESCBC=4
};

enum _STORAGE_CRYPTO_KEY_SIZE
{
    StorageCryptoKeySizeUnknown=0,
    StorageCryptoKeySize128Bits=1,
    StorageCryptoKeySize192Bits=2,
    StorageCryptoKeySize256Bits=3,
    StorageCryptoKeySize512Bits=4,
    StorageCryptoKeySizeMax=5,
    StorCryptoKeySizeUnknown=0,
    StorCryptoKeySize128Bits=1,
    StorCryptoKeySize192Bits=2,
    StorCryptoKeySize256Bits=3,
    StorCryptoKeySize512Bits=4
};

union _STORAGE_SECURITY_COMPLIANCE_BITMASK// Size=0x1 (Id=1715)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char FIPS:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Reserved:7;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x7
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};

struct _STORAGE_HW_CRYPTO_CAPABILITY// Size=0x20 (Id=843)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long CryptoCapabilityIndex;// Offset=0x8 Size=0x4
    enum _STORAGE_CRYPTO_ALGORITHM_ID AlgorithmId;// Offset=0xc Size=0x4
    enum _STORAGE_CRYPTO_KEY_SIZE KeySize;// Offset=0x10 Size=0x4
    unsigned long DataUnitSizeBitmask;// Offset=0x14 Size=0x4
    unsigned short MaxIVBitSize;// Offset=0x18 Size=0x2
    unsigned short Reserved;// Offset=0x1a Size=0x2
    union _STORAGE_SECURITY_COMPLIANCE_BITMASK SecurityComplianceBitmask;// Offset=0x1c Size=0x1
};
