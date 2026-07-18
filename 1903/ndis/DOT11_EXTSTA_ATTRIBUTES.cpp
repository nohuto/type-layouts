struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct DOT11_EXTSTA_ATTRIBUTES// Size=0xa0 (Id=1896)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uScanSSIDListSize;// Offset=0x4 Size=0x4
    unsigned long uDesiredBSSIDListSize;// Offset=0x8 Size=0x4
    unsigned long uDesiredSSIDListSize;// Offset=0xc Size=0x4
    unsigned long uExcludedMacAddressListSize;// Offset=0x10 Size=0x4
    unsigned long uPrivacyExemptionListSize;// Offset=0x14 Size=0x4
    unsigned long uKeyMappingTableSize;// Offset=0x18 Size=0x4
    unsigned long uDefaultKeyTableSize;// Offset=0x1c Size=0x4
    unsigned long uWEPKeyValueMaxLength;// Offset=0x20 Size=0x4
    unsigned long uPMKIDCacheSize;// Offset=0x24 Size=0x4
    unsigned long uMaxNumPerSTADefaultKeyTables;// Offset=0x28 Size=0x4
    unsigned char bStrictlyOrderedServiceClassImplemented;// Offset=0x2c Size=0x1
    unsigned char ucSupportedQoSProtocolFlags;// Offset=0x2d Size=0x1
    unsigned char bSafeModeImplemented;// Offset=0x2e Size=0x1
    unsigned long uNumSupportedCountryOrRegionStrings;// Offset=0x30 Size=0x4
    unsigned char * pSupportedCountryOrRegionStrings[3];// Offset=0x38 Size=0x8
    unsigned long uInfraNumSupportedUcastAlgoPairs;// Offset=0x40 Size=0x4
    struct DOT11_AUTH_CIPHER_PAIR * pInfraSupportedUcastAlgoPairs;// Offset=0x48 Size=0x8
    unsigned long uInfraNumSupportedMcastAlgoPairs;// Offset=0x50 Size=0x4
    struct DOT11_AUTH_CIPHER_PAIR * pInfraSupportedMcastAlgoPairs;// Offset=0x58 Size=0x8
    unsigned long uAdhocNumSupportedUcastAlgoPairs;// Offset=0x60 Size=0x4
    struct DOT11_AUTH_CIPHER_PAIR * pAdhocSupportedUcastAlgoPairs;// Offset=0x68 Size=0x8
    unsigned long uAdhocNumSupportedMcastAlgoPairs;// Offset=0x70 Size=0x4
    struct DOT11_AUTH_CIPHER_PAIR * pAdhocSupportedMcastAlgoPairs;// Offset=0x78 Size=0x8
    unsigned char bAutoPowerSaveMode;// Offset=0x80 Size=0x1
    unsigned long uMaxNetworkOffloadListSize;// Offset=0x84 Size=0x4
    unsigned char bMFPCapable;// Offset=0x88 Size=0x1
    unsigned long uInfraNumSupportedMcastMgmtAlgoPairs;// Offset=0x8c Size=0x4
    struct DOT11_AUTH_CIPHER_PAIR * pInfraSupportedMcastMgmtAlgoPairs;// Offset=0x90 Size=0x8
    unsigned char bNeighborReportSupported;// Offset=0x98 Size=0x1
    unsigned char bAPChannelReportSupported;// Offset=0x99 Size=0x1
    unsigned char bActionFramesSupported;// Offset=0x9a Size=0x1
    unsigned char bANQPQueryOffloadSupported;// Offset=0x9b Size=0x1
    unsigned char bHESSIDConnectionSupported;// Offset=0x9c Size=0x1
};
