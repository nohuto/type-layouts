struct _WHEA_PRM_SPA_TO_DRAM_OUT_BUFFER_AMD// Size=0x14 (Id=621)
{
    unsigned char ChipSelect;// Offset=0x0 Size=0x1
    unsigned char BankGroup;// Offset=0x1 Size=0x1
    unsigned char BankAddress;// Offset=0x2 Size=0x1
    unsigned int RowAddress;// Offset=0x3 Size=0x4
    unsigned short ColumnAddress;// Offset=0x7 Size=0x2
    unsigned char RankMultiplier;// Offset=0x9 Size=0x1
    unsigned char SubChannel;// Offset=0xa Size=0x1
    unsigned char SocketNumber;// Offset=0xb Size=0x1
    unsigned long long UmcBankInstanceId;// Offset=0xc Size=0x8
};
