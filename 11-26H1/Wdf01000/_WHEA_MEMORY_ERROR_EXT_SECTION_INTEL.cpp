union _WHEA_MEMORY_ERROR_EXT_SECTION_FLAGS// Size=0x8 (Id=2088)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long AddressTranslationByPrmSuccess:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long AddressTranslationByPrmFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long AddressTranslationByPrmNotSupported:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long AddressTranslationByPluginSuccess:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long AddressTranslationByPluginFailed:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long AddressTranslationByPluginNotSupported:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long Reserved:58;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x3a
    };
    unsigned long long AsUINT64;// Offset=0x0 Size=0x8
};

union _WHEA_MEMORY_ERROR_EXT_SECTION_INTEL_VALIDBITS// Size=0x8 (Id=2485)
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

enum _WHEA_MEMORY_DEFINITION
{
    WheaMemoryUndefined=0,
    WheaMemoryFm=1,
    WheaMemoryNm=2,
    WheaMemoryHbm=3,
    WheaMemoryMax=4
};

struct _WHEA_MEMORY_HARDWARE_ADDRESS_INTEL// Size=0x6e (Id=4026)
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

struct _WHEA_MEMORY_ERROR_EXT_SECTION_INTEL// Size=0xa6 (Id=3455)
{
    union _WHEA_MEMORY_ERROR_EXT_SECTION_FLAGS Flags;// Offset=0x0 Size=0x8
    union _WHEA_MEMORY_ERROR_EXT_SECTION_INTEL_VALIDBITS ValidBits;// Offset=0x8 Size=0x8
    struct _WHEA_MEMORY_HARDWARE_ADDRESS_INTEL HardwareAddress;// Offset=0x10 Size=0x6e
    unsigned char Reserved[40];// Offset=0x7e Size=0x28
};
