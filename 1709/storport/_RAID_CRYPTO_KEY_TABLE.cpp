struct _RAID_CRYPTO_KEY_TABLE// Size=0x18 (Id=381)
{
    unsigned long NumKeyEntries;// Offset=0x0 Size=0x4
    unsigned char KeyTableFull;// Offset=0x4 Size=0x1
    struct _RAID_ADAPTER_CRYPTO_KEY_ENTRY * Table;// Offset=0x8 Size=0x8
    long KeyTableLock;// Offset=0x10 Size=0x4
};
