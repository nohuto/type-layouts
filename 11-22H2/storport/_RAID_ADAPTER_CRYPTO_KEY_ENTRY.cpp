enum _CRYPTO_KEY_STATE
{
    Invalid=0,
    Pending=1,
    Valid=2
};

struct _unnamed_221// Size=0x10 (Id=221)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=222)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_221 HeaderX64;// Offset=0x0 Size=0x10
};

struct _RAID_ADAPTER_CRYPTO_KEY_ENTRY// Size=0x40 (Id=637)
{
    unsigned long KeyTableIndex;// Offset=0x0 Size=0x4
    unsigned char KeyHash[32];// Offset=0x4 Size=0x20
    unsigned long CryptoCapabilityIndex;// Offset=0x24 Size=0x4
    long NumOutstandingIOs;// Offset=0x28 Size=0x4
    enum _CRYPTO_KEY_STATE KeyState;// Offset=0x2c Size=0x4
    union _SLIST_HEADER PendingXrbList;// Offset=0x30 Size=0x10
};
