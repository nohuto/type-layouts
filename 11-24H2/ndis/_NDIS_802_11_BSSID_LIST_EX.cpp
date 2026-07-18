struct _NDIS_802_11_SSID// Size=0x24 (Id=1012)
{
    unsigned long SsidLength;// Offset=0x0 Size=0x4
    unsigned char Ssid[32];// Offset=0x4 Size=0x20
};

enum _NDIS_802_11_NETWORK_TYPE
{
    Ndis802_11FH=0,
    Ndis802_11DS=1,
    Ndis802_11OFDM5=2,
    Ndis802_11OFDM24=3,
    Ndis802_11Automode=4,
    Ndis802_11NetworkTypeMax=5
};

struct _NDIS_802_11_CONFIGURATION_FH// Size=0x10 (Id=1605)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long HopPattern;// Offset=0x4 Size=0x4
    unsigned long HopSet;// Offset=0x8 Size=0x4
    unsigned long DwellTime;// Offset=0xc Size=0x4
};

struct _NDIS_802_11_CONFIGURATION// Size=0x20 (Id=879)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long BeaconPeriod;// Offset=0x4 Size=0x4
    unsigned long ATIMWindow;// Offset=0x8 Size=0x4
    unsigned long DSConfig;// Offset=0xc Size=0x4
    struct _NDIS_802_11_CONFIGURATION_FH FHConfig;// Offset=0x10 Size=0x10
};

enum _NDIS_802_11_NETWORK_INFRASTRUCTURE
{
    Ndis802_11IBSS=0,
    Ndis802_11Infrastructure=1,
    Ndis802_11AutoUnknown=2,
    Ndis802_11InfrastructureMax=3
};

struct _NDIS_WLAN_BSSID_EX// Size=0x78 (Id=1817)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned char MacAddress[6];// Offset=0x4 Size=0x6
    unsigned char Reserved[2];// Offset=0xa Size=0x2
    struct _NDIS_802_11_SSID Ssid;// Offset=0xc Size=0x24
    unsigned long Privacy;// Offset=0x30 Size=0x4
    long Rssi;// Offset=0x34 Size=0x4
    enum _NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;// Offset=0x38 Size=0x4
    struct _NDIS_802_11_CONFIGURATION Configuration;// Offset=0x3c Size=0x20
    enum _NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;// Offset=0x5c Size=0x4
    unsigned char SupportedRates[16];// Offset=0x60 Size=0x10
    unsigned long IELength;// Offset=0x70 Size=0x4
    unsigned char IEs[1];// Offset=0x74 Size=0x1
};

struct _NDIS_802_11_BSSID_LIST_EX// Size=0x7c (Id=1100)
{
    unsigned long NumberOfItems;// Offset=0x0 Size=0x4
    struct _NDIS_WLAN_BSSID_EX Bssid[1];// Offset=0x4 Size=0x78
};
