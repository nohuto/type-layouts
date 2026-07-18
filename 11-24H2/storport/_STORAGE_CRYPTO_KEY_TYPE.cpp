union _STORAGE_CRYPTO_KEY_TYPE// Size=0x1 (Id=825)
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
