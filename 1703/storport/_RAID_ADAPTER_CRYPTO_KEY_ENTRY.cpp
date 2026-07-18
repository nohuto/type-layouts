struct _RAID_ADAPTER_CRYPTO_KEY_ENTRY// Size=0x30 (Id=383)
{
    unsigned long KeyTableIndex;// Offset=0x0 Size=0x4
    unsigned char KeyHash[32];// Offset=0x4 Size=0x20
    unsigned long CryptoCapabilityIndex;// Offset=0x24 Size=0x4
    long NumOutstandingIOs;// Offset=0x28 Size=0x4
    unsigned char Valid;// Offset=0x2c Size=0x1
};
