enum _SECURE_DMA_RESOURCE_TYPE
{
    DmaNoBuffer=0,
    DmaExposedSection=1,
    DmaSecureSectionGuid=2
};

struct _GUID// Size=0x10 (Id=57)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _SECURE_DMA_RESOURCE// Size=0x20 (Id=724)
{
    enum _SECURE_DMA_RESOURCE_TYPE Type;// Offset=0x0 Size=0x4
    unsigned long Offset;// Offset=0x4 Size=0x4
    unsigned long Length;// Offset=0x8 Size=0x4
    unsigned long StageId;// Offset=0xc Size=0x4
    union // Size=0x8 (Id=0)
    {
        void * ExposedSectionHandle;// Offset=0x10 Size=0x8
        struct _GUID SecureSectionGuid;// Offset=0x10 Size=0x10
    };
};
