struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _DOT11_WFD_ATTRIBUTES// Size=0x48 (Id=1442)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uNumConcurrentGORole;// Offset=0x4 Size=0x4
    unsigned long uNumConcurrentClientRole;// Offset=0x8 Size=0x4
    unsigned long WPSVersionsSupported;// Offset=0xc Size=0x4
    unsigned char bServiceDiscoverySupported;// Offset=0x10 Size=0x1
    unsigned char bClientDiscoverabilitySupported;// Offset=0x11 Size=0x1
    unsigned char bInfrastructureManagementSupported;// Offset=0x12 Size=0x1
    unsigned long uMaxSecondaryDeviceTypeListSize;// Offset=0x14 Size=0x4
    unsigned char DeviceAddress[6];// Offset=0x18 Size=0x6
    unsigned long uInterfaceAddressListCount;// Offset=0x20 Size=0x4
    unsigned char * pInterfaceAddressList[6];// Offset=0x28 Size=0x8
    unsigned long uNumSupportedCountryOrRegionStrings;// Offset=0x30 Size=0x4
    unsigned char * pSupportedCountryOrRegionStrings[3];// Offset=0x38 Size=0x8
    unsigned long uDiscoveryFilterListSize;// Offset=0x40 Size=0x4
    unsigned long uGORoleClientTableSize;// Offset=0x44 Size=0x4
};
