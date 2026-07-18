struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct DOT11_EXTSTA_CAPABILITY// Size=0x2c (Id=1609)
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
};
