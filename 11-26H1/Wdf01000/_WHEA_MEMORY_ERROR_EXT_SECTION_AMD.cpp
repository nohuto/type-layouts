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

union _WHEA_MEMORY_ERROR_EXT_SECTION_AMD_VALIDBITS// Size=0x8 (Id=3311)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long SystemPhysicalAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long NormalizedAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long UmcBankInstanceId:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
        unsigned long long SocketNumber:1;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x1
        unsigned long long ChipSelect:1;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x1
        unsigned long long BankGroup:1;// Offset=0x0 Size=0x8 BitOffset=0x5 BitSize=0x1
        unsigned long long BankAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x6 BitSize=0x1
        unsigned long long RowAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x7 BitSize=0x1
        unsigned long long ColumnAddress:1;// Offset=0x0 Size=0x8 BitOffset=0x8 BitSize=0x1
        unsigned long long RankMultiplier:1;// Offset=0x0 Size=0x8 BitOffset=0x9 BitSize=0x1
        unsigned long long SubChannel:1;// Offset=0x0 Size=0x8 BitOffset=0xa BitSize=0x1
        unsigned long long ChannelId:1;// Offset=0x0 Size=0x8 BitOffset=0xb BitSize=0x1
        unsigned long long Reserved:52;// Offset=0x0 Size=0x8 BitOffset=0xc BitSize=0x34
    };
    unsigned long long ValidBits;// Offset=0x0 Size=0x8
};

struct _WHEA_MEMORY_HARDWARE_ADDRESS_AMD// Size=0x4d (Id=4133)
{
    unsigned long long SystemPhysicalAddress;// Offset=0x0 Size=0x8
    unsigned long long NormalizedAddress;// Offset=0x8 Size=0x8
    unsigned long long UmcBankInstanceId;// Offset=0x10 Size=0x8
    unsigned char SocketNumber;// Offset=0x18 Size=0x1
    unsigned char ChipSelect;// Offset=0x19 Size=0x1
    unsigned char BankGroup;// Offset=0x1a Size=0x1
    unsigned char BankAddress;// Offset=0x1b Size=0x1
    unsigned int RowAddress;// Offset=0x1c Size=0x4
    unsigned short ColumnAddress;// Offset=0x20 Size=0x2
    unsigned char RankMultiplier;// Offset=0x22 Size=0x1
    unsigned char SubChannel;// Offset=0x23 Size=0x1
    unsigned char ChannelId;// Offset=0x24 Size=0x1
    unsigned char Reserved[40];// Offset=0x25 Size=0x28
};

struct _WHEA_MEMORY_ERROR_EXT_SECTION_AMD// Size=0x85 (Id=3251)
{
    union _WHEA_MEMORY_ERROR_EXT_SECTION_FLAGS Flags;// Offset=0x0 Size=0x8
    union _WHEA_MEMORY_ERROR_EXT_SECTION_AMD_VALIDBITS ValidBits;// Offset=0x8 Size=0x8
    struct _WHEA_MEMORY_HARDWARE_ADDRESS_AMD HardwareAddress;// Offset=0x10 Size=0x4d
    unsigned char Reserved[40];// Offset=0x5d Size=0x28
};
