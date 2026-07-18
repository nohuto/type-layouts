struct _WHEA_PRM_DRAM_TO_SPA_PARAM_BUFFER_AMD// Size=0x1c (Id=2629)
{
    unsigned char SocketNumber;// Offset=0x0 Size=0x1
    unsigned long long UmcBankInstanceId;// Offset=0x1 Size=0x8
    unsigned char ChipSelect;// Offset=0x9 Size=0x1
    unsigned char BankGroup;// Offset=0xa Size=0x1
    unsigned char BankAddress;// Offset=0xb Size=0x1
    unsigned int RowAddress;// Offset=0xc Size=0x4
    unsigned short ColumnAddress;// Offset=0x10 Size=0x2
    unsigned char RankMultiplier;// Offset=0x12 Size=0x1
    unsigned char SubChannel;// Offset=0x13 Size=0x1
    struct _WHEA_PRM_DRAM_TO_SPA_OUT_BUFFER_AMD * OutputBuffer;// Offset=0x14 Size=0x8
};
