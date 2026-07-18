struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _DOT11_PHY_TYPE
{
    dot11_phy_type_unknown=0,
    dot11_phy_type_any=0,
    dot11_phy_type_fhss=1,
    dot11_phy_type_dsss=2,
    dot11_phy_type_irbaseband=3,
    dot11_phy_type_ofdm=4,
    dot11_phy_type_hrdsss=5,
    dot11_phy_type_erp=6,
    dot11_phy_type_ht=7,
    dot11_phy_type_vht=8,
    dot11_phy_type_dmg=9,
    dot11_phy_type_he=10,
    dot11_phy_type_IHV_start=-2147483648,
    dot11_phy_type_IHV_end=-1
};

enum _DOT11_TEMP_TYPE
{
    dot11_temp_type_unknown=0,
    dot11_temp_type_1=1,
    dot11_temp_type_2=2
};

enum _DOT11_DIVERSITY_SUPPORT
{
    dot11_diversity_support_unknown=0,
    dot11_diversity_support_fixedlist=1,
    dot11_diversity_support_notsupported=2,
    dot11_diversity_support_dynamic=3
};

struct _DOT11_SUPPORTED_DATA_RATES_VALUE_V2// Size=0x1fe (Id=2001)
{
    unsigned char ucSupportedTxDataRatesValue[255];// Offset=0x0 Size=0xff
    unsigned char ucSupportedRxDataRatesValue[255];// Offset=0xff Size=0xff
};

struct DOT11_PHY_ATTRIBUTES// Size=0x444 (Id=1952)
{
    union // Size=0x18 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        enum _DOT11_PHY_TYPE PhyType;// Offset=0x4 Size=0x4
        unsigned char bHardwarePhyState;// Offset=0x8 Size=0x1
        unsigned char bSoftwarePhyState;// Offset=0x9 Size=0x1
        unsigned char bCFPollable;// Offset=0xa Size=0x1
        unsigned long uMPDUMaxLength;// Offset=0xc Size=0x4
        enum _DOT11_TEMP_TYPE TempType;// Offset=0x10 Size=0x4
        enum _DOT11_DIVERSITY_SUPPORT DiversitySupport;// Offset=0x14 Size=0x4
        union <unnamed-type-PhySpecificAttributes>// Size=0xc (Id=15381)
        {
            struct DOT11_HRDSSS_PHY_ATTRIBUTES HRDSSSAttributes;// Offset=0x0 Size=0x8
            struct DOT11_OFDM_PHY_ATTRIBUTES OFDMAttributes;// Offset=0x0 Size=0x4
            struct DOT11_ERP_PHY_ATTRIBUTES ERPAttributes;// Offset=0x0 Size=0xc
        };
        union DOT11_PHY_ATTRIBUTES::<unnamed-type-PhySpecificAttributes> PhySpecificAttributes;// Offset=0x18 Size=0xc
    };
    unsigned long uNumberSupportedPowerLevels;// Offset=0x24 Size=0x4
    unsigned long TxPowerLevels[8];// Offset=0x28 Size=0x20
    unsigned long uNumDataRateMappingEntries;// Offset=0x48 Size=0x4
    struct DOT11_DATA_RATE_MAPPING_ENTRY DataRateMappingEntries[126];// Offset=0x4c Size=0x1f8
    struct _DOT11_SUPPORTED_DATA_RATES_VALUE_V2 SupportedDataRatesValue;// Offset=0x244 Size=0x1fe
};
