struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES// Size=0x40 (Id=1511)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long OpModeCapability;// Offset=0x4 Size=0x4
    unsigned long NumOfTXBuffers;// Offset=0x8 Size=0x4
    unsigned long NumOfRXBuffers;// Offset=0xc Size=0x4
    unsigned char MultiDomainCapabilityImplemented;// Offset=0x10 Size=0x1
    unsigned long NumSupportedPhys;// Offset=0x14 Size=0x4
    struct DOT11_PHY_ATTRIBUTES * SupportedPhyAttributes;// Offset=0x18 Size=0x8
    struct DOT11_EXTSTA_ATTRIBUTES * ExtSTAAttributes;// Offset=0x20 Size=0x8
    struct DOT11_VWIFI_ATTRIBUTES * VWiFiAttributes;// Offset=0x28 Size=0x8
    struct _DOT11_EXTAP_ATTRIBUTES * ExtAPAttributes;// Offset=0x30 Size=0x8
    struct _DOT11_WFD_ATTRIBUTES * WFDAttributes;// Offset=0x38 Size=0x8
};
