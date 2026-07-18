enum _TCG_SP_STATE
{
    SP_STATE_MANUFACTURED_INACTIVE=8,
    SP_STATE_MANUFACTURED=9
};

struct _unnamed_525// Size=0x38 (Id=525)
{
    unsigned char LockingSpPresent;// Offset=0x0 Size=0x1
    enum _TCG_SP_STATE LockingSpState;// Offset=0x4 Size=0x4
    unsigned long BandCount;// Offset=0x8 Size=0x4
    unsigned long long KeyProtectionMechanism;// Offset=0x10 Size=0x8
    unsigned long long LockingTableUID;// Offset=0x18 Size=0x8
    unsigned char AdminsOwnAccess;// Offset=0x20 Size=0x1
    unsigned char AlignmentRequired;// Offset=0x21 Size=0x1
    unsigned long LogicalBlockSize;// Offset=0x24 Size=0x4
    unsigned long long AlignmentGranularity;// Offset=0x28 Size=0x8
    unsigned long long LowestAlignedLBA;// Offset=0x30 Size=0x8
};
