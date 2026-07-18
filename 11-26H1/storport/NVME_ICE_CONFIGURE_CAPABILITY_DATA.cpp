struct NVME_ICE_CONFIGURE_CAPABILITY_DATA// Size=0x14 (Id=1381)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned short ReportedCryptoCapabilityIndex;// Offset=0x4 Size=0x2
    unsigned short MaxTransferSizeKBytes;// Offset=0x6 Size=0x2
    unsigned long LBASize;// Offset=0x8 Size=0x4
    unsigned long PRPPageSize;// Offset=0xc Size=0x4
    unsigned short ConfiguredCryptoCapabilityIndex;// Offset=0x10 Size=0x2
};
