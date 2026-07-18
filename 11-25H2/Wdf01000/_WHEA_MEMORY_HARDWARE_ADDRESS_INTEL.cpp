enum _WHEA_MEMORY_DEFINITION
{
    WheaMemoryUndefined=0,
    WheaMemoryFm=1,
    WheaMemoryNm=2,
    WheaMemoryHbm=3,
    WheaMemoryMax=4
};

struct _WHEA_MEMORY_HARDWARE_ADDRESS_INTEL// Size=0x6e (Id=3906)
{
    enum _WHEA_MEMORY_DEFINITION MemDef;// Offset=0x0 Size=0x4
    unsigned long long SystemAddress;// Offset=0x4 Size=0x8
    unsigned long long SpareSystemAddress;// Offset=0xc Size=0x8
    unsigned long long DevicePhysicalAddress;// Offset=0x14 Size=0x8
    unsigned long long ChannelAddress;// Offset=0x1c Size=0x8
    unsigned long long RankAddress;// Offset=0x24 Size=0x8
    unsigned char ProcessorSocketId;// Offset=0x2c Size=0x1
    unsigned char MemoryControllerId;// Offset=0x2d Size=0x1
    unsigned char TargetId;// Offset=0x2e Size=0x1
    unsigned char LogicalChannelId;// Offset=0x2f Size=0x1
    unsigned char ChannelId;// Offset=0x30 Size=0x1
    unsigned char SubChannelId;// Offset=0x31 Size=0x1
    unsigned char PhysicalRankId;// Offset=0x32 Size=0x1
    unsigned char DimmSlotId;// Offset=0x33 Size=0x1
    unsigned char DimmRankId;// Offset=0x34 Size=0x1
    unsigned char Bank;// Offset=0x35 Size=0x1
    unsigned char BankGroup;// Offset=0x36 Size=0x1
    unsigned int Row;// Offset=0x37 Size=0x4
    unsigned int Column;// Offset=0x3b Size=0x4
    unsigned char LockStepRank;// Offset=0x3f Size=0x1
    unsigned char LockStepPhysicalRank;// Offset=0x40 Size=0x1
    unsigned char LockStepBank;// Offset=0x41 Size=0x1
    unsigned char LockStepBankGroup;// Offset=0x42 Size=0x1
    unsigned char ChipSelect;// Offset=0x43 Size=0x1
    unsigned char Node;// Offset=0x44 Size=0x1
    unsigned char ChipId;// Offset=0x45 Size=0x1
    unsigned char Reserved[40];// Offset=0x46 Size=0x28
};
