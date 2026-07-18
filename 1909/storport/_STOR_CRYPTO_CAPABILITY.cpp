enum _STOR_CRYPTO_ALGORITHM_ID
{
    StorCryptoAlgorithmUnknown=0,
    StorCryptoAlgorithmXTSAES=1,
    StorCryptoAlgorithmBitlockerAESCBC=2,
    StorCryptoAlgorithmAESECB=3,
    StorCryptoAlgorithmESSIVAESCBC=4,
    StorCryptoAlgorithmMax=5
};

enum _STOR_CRYPTO_KEY_SIZE
{
    StorCryptoKeySizeUnknown=0,
    StorCryptoKeySize128Bits=1,
    StorCryptoKeySize192Bits=2,
    StorCryptoKeySize256Bits=3,
    StorCryptoKeySize512Bits=4,
    StorCryptoKeySizeMax=5
};

struct _STOR_CRYPTO_CAPABILITY// Size=0x14 (Id=379)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned short CryptoCapabilityIndex;// Offset=0x8 Size=0x2
    unsigned short DataUnitSizeBitmask;// Offset=0xa Size=0x2
    enum _STOR_CRYPTO_ALGORITHM_ID AlgorithmId;// Offset=0xc Size=0x4
    enum _STOR_CRYPTO_KEY_SIZE KeySize;// Offset=0x10 Size=0x4
};
