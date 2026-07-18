struct _WHEA_PRM_NORMALIZED_TO_DRAM_PARAM_BUFFER_AMD// Size=0x19 (Id=3697)
{
    unsigned long long NormalizedAddress;// Offset=0x0 Size=0x8
    unsigned char SocketNumber;// Offset=0x8 Size=0x1
    unsigned long long UmcBankInstanceId;// Offset=0x9 Size=0x8
    struct _WHEA_PRM_NORMALIZED_TO_DRAM_OUT_BUFFER_AMD * OutputBuffer;// Offset=0x11 Size=0x8
};
