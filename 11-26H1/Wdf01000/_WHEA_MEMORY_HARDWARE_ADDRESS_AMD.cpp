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
