union _WHEA_MEMORY_ERROR_EXT_SECTION_INTEL_VALIDBITS// Size=0x8 (Id=2618)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long MemDef:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long SystemAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long SpareSystemAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long DevicePhysicalAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long ChannelAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long RankAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long ProcessorSocketId:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long MemoryControllerId:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long TargetId:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long LogicalChannelId:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long ChannelId:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long SubChannelId:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long PhysicalRankId:1;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x1
        unsigned long long DimmSlotId:1;// Offset=0x0 Size=0x8 BitOffset=0xd BitSize=0x1
        unsigned long long DimmRankId:1;// Offset=0x0 Size=0x8 BitOffset=0xe BitSize=0x1
        unsigned long long Bank:1;// Offset=0x0 Size=0x8 BitOffset=0xf BitSize=0x1
        unsigned long long BankGroup:1;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x1
        unsigned long long Row:1;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x1
        unsigned long long Column:1;// Offset=0x0 Size=0x8 BitOffset=0x12 BitSize=0x1
        unsigned long long LockStepRank:1;// Offset=0x0 Size=0x8 BitOffset=0x13 BitSize=0x1
        unsigned long long LockStepPhysicalRank:1;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x1
        unsigned long long LockStepBank:1;// Offset=0x0 Size=0x8 BitOffset=0x15 BitSize=0x1
        unsigned long long LockStepBankGroup:1;// Offset=0x0 Size=0x8 BitOffset=0x16 BitSize=0x1
        unsigned long long ChipSelect:1;// Offset=0x0 Size=0x8 BitOffset=0x17 BitSize=0x1
        unsigned long long Node:1;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x1
        unsigned long long ChipId:1;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x1
        unsigned long long Reserved:38;// Offset=0x0 Size=0x8 BitOffset=0x1a BitSize=0x26
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};
