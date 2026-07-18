enum _MFND_NAMESPACE_PAGE_MAP_DATA_QUALIFIER
{
    MFNDNSPageMapDataQualifierReserved=0,
    MFNDNSPageMapDataQualifierInDataBuffer=1,
    MFNDNSPageMapDataQualifierAllZero=2,
    MFNDNSPageMapDataQualifierAllOne=3,
    MFNDNSPageMapDataQualifierMax=4
};

struct _MFND_NAMESPACE_PAGE_MAP_DATA// Size=0x18 (Id=461)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Reserved0[2];// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    enum _MFND_NAMESPACE_PAGE_MAP_DATA_QUALIFIER PageMapDataQualifier;// Offset=0x8 Size=0x4
    unsigned long Reserved1;// Offset=0xc Size=0x4
    unsigned long PageMapDataSizeInBytes;// Offset=0x10 Size=0x4
    unsigned char PageMapData[1];// Offset=0x14 Size=0x1
};
