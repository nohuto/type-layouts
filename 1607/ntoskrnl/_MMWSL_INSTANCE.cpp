struct _MI_ACTIVE_WSLE_LISTHEAD// Size=0x10 (Id=1391)
{
    unsigned long long Flink;// Offset=0x0 Size=0x8
    unsigned long long Blink;// Offset=0x8 Size=0x8
};

struct _MMWSL_INSTANCE// Size=0x1a0 (Id=1178)
{
    unsigned long long NextSlot;// Offset=0x0 Size=0x8
    unsigned long long NextAgingSlot;// Offset=0x8 Size=0x8
    unsigned long long NextAccessClearingSlot;// Offset=0x10 Size=0x8
    unsigned long LastAccessClearingRemainder;// Offset=0x18 Size=0x4
    unsigned long LastAgingRemainder;// Offset=0x1c Size=0x4
    unsigned long long ActiveWsleCounts[16];// Offset=0x20 Size=0x80
    struct _MI_ACTIVE_WSLE_LISTHEAD ActiveWsles[16];// Offset=0xa0 Size=0x100
};
