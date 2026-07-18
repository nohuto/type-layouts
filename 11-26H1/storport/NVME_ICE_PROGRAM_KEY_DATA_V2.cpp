enum _STORAGE_ICE_KEY_TYPE
{
    StorageIceKeyTypeDirectKey=0,
    StorageIceKeyTypePlatformWrapped=1,
    StorageIceKeyTypePlutonWrapped=2,
    StorageIceKeyTypeMax=3
};

struct _GUID// Size=0x10 (Id=756)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct NVME_ICE_PROGRAM_KEY_DATA_V2// Size=0x38 (Id=1064)
{
    unsigned short ReportedCryptoCapabilityIndex;// Offset=0x0 Size=0x2
    unsigned short MaxTransferSizeKBytes;// Offset=0x2 Size=0x2
    unsigned long LBASize;// Offset=0x4 Size=0x4
    unsigned long PRPPageSize;// Offset=0x8 Size=0x4
    enum _STORAGE_ICE_KEY_TYPE KeyType;// Offset=0xc Size=0x4
    unsigned short KeyContentSize;// Offset=0x10 Size=0x2
    unsigned short KeyIndex;// Offset=0x12 Size=0x2
    struct _GUID KeyNamespaceId;// Offset=0x14 Size=0x10
    void * KeyHandle;// Offset=0x28 Size=0x8
    unsigned char KeyContent[1];// Offset=0x30 Size=0x1
};
