struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _DOT11_EXTAP_ATTRIBUTES// Size=0x50 (Id=1280)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uScanSSIDListSize;// Offset=0x4 Size=0x4
    unsigned long uDesiredSSIDListSize;// Offset=0x8 Size=0x4
    unsigned long uPrivacyExemptionListSize;// Offset=0xc Size=0x4
    unsigned long uAssociationTableSize;// Offset=0x10 Size=0x4
    unsigned long uDefaultKeyTableSize;// Offset=0x14 Size=0x4
    unsigned long uWEPKeyValueMaxLength;// Offset=0x18 Size=0x4
    unsigned char bStrictlyOrderedServiceClassImplemented;// Offset=0x1c Size=0x1
    unsigned long uNumSupportedCountryOrRegionStrings;// Offset=0x20 Size=0x4
    unsigned char * pSupportedCountryOrRegionStrings[3];// Offset=0x28 Size=0x8
    unsigned long uInfraNumSupportedUcastAlgoPairs;// Offset=0x30 Size=0x4
    struct DOT11_AUTH_CIPHER_PAIR * pInfraSupportedUcastAlgoPairs;// Offset=0x38 Size=0x8
    unsigned long uInfraNumSupportedMcastAlgoPairs;// Offset=0x40 Size=0x4
    struct DOT11_AUTH_CIPHER_PAIR * pInfraSupportedMcastAlgoPairs;// Offset=0x48 Size=0x8
};
