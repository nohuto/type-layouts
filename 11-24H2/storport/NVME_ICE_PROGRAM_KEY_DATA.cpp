struct NVME_ICE_PROGRAM_KEY_DATA// Size=0x18 (Id=1155)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned short KeyContentSize;// Offset=0x4 Size=0x2
    unsigned short ConfiguredCryptoCapabilityIndex;// Offset=0x6 Size=0x2
    void * KeyHandle;// Offset=0x8 Size=0x8
    unsigned char KeyContent[1];// Offset=0x10 Size=0x1
};
