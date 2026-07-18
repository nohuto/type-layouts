struct _WHEA_PRM_ADDRESS_TRANSLATION_BUFFER_INTEL// Size=0x134 (Id=2414)
{
    unsigned int SwSmi;// Offset=0x0 Size=0x4
    unsigned int Command;// Offset=0x4 Size=0x4
    unsigned int Status;// Offset=0x8 Size=0x4
    unsigned long long SystemAddress;// Offset=0xc Size=0x8
    unsigned long long NmSystemAddress;// Offset=0x14 Size=0x8
    unsigned long long SpareSystemAddress;// Offset=0x1c Size=0x8
    unsigned long long DevicePhysicalAddress;// Offset=0x24 Size=0x8
    unsigned long long ProcessorSocketId;// Offset=0x2c Size=0x8
    unsigned long long MemoryControllerId;// Offset=0x34 Size=0x8
    unsigned long long NmMemoryControllerId;// Offset=0x3c Size=0x8
    unsigned long long TargetId;// Offset=0x44 Size=0x8
    unsigned long long LogicalChannelId;// Offset=0x4c Size=0x8
    unsigned long long ChannelAddress;// Offset=0x54 Size=0x8
    unsigned long long NmChannelAddress;// Offset=0x5c Size=0x8
    unsigned long long ChannelId;// Offset=0x64 Size=0x8
    unsigned long long NmChannelId;// Offset=0x6c Size=0x8
    unsigned long long RankAddress;// Offset=0x74 Size=0x8
    unsigned long long NmRankAddress;// Offset=0x7c Size=0x8
    unsigned long long PhysicalRankId;// Offset=0x84 Size=0x8
    unsigned long long NmPhysicalRankId;// Offset=0x8c Size=0x8
    unsigned long long DimmSlotId;// Offset=0x94 Size=0x8
    unsigned long long NmDimmSlotId;// Offset=0x9c Size=0x8
    unsigned long long DimmRankId;// Offset=0xa4 Size=0x8
    unsigned long long Row;// Offset=0xac Size=0x8
    unsigned long long NmRow;// Offset=0xb4 Size=0x8
    unsigned long long Column;// Offset=0xbc Size=0x8
    unsigned long long NmColumn;// Offset=0xc4 Size=0x8
    unsigned long long Bank;// Offset=0xcc Size=0x8
    unsigned long long NmBank;// Offset=0xd4 Size=0x8
    unsigned long long BankGroup;// Offset=0xdc Size=0x8
    unsigned long long NmBankGroup;// Offset=0xe4 Size=0x8
    unsigned long long LockStepRank;// Offset=0xec Size=0x8
    unsigned long long LockStepPhysicalRank;// Offset=0xf4 Size=0x8
    unsigned long long LockStepBank;// Offset=0xfc Size=0x8
    unsigned long long LockStepBankGroup;// Offset=0x104 Size=0x8
    unsigned long long ChipSelect;// Offset=0x10c Size=0x8
    unsigned long long NmChipSelect;// Offset=0x114 Size=0x8
    unsigned long long Node;// Offset=0x11c Size=0x8
    unsigned long long ChipId;// Offset=0x124 Size=0x8
    unsigned long long NmChipId;// Offset=0x12c Size=0x8
};
