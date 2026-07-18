struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _DOT11_AUTH_ALGORITHM
{
    DOT11_AUTH_ALGO_80211_OPEN=1,
    DOT11_AUTH_ALGO_80211_SHARED_KEY=2,
    DOT11_AUTH_ALGO_WPA=3,
    DOT11_AUTH_ALGO_WPA_PSK=4,
    DOT11_AUTH_ALGO_WPA_NONE=5,
    DOT11_AUTH_ALGO_RSNA=6,
    DOT11_AUTH_ALGO_RSNA_PSK=7,
    DOT11_AUTH_ALGO_WPA3=8,
    DOT11_AUTH_ALGO_WPA3_SAE=9,
    DOT11_AUTH_ALGO_OWE=10,
    DOT11_AUTH_ALGO_IHV_START=-2147483648,
    DOT11_AUTH_ALGO_IHV_END=-1
};

enum _DOT11_CIPHER_ALGORITHM
{
    DOT11_CIPHER_ALGO_NONE=0,
    DOT11_CIPHER_ALGO_WEP40=1,
    DOT11_CIPHER_ALGO_TKIP=2,
    DOT11_CIPHER_ALGO_CCMP=4,
    DOT11_CIPHER_ALGO_WEP104=5,
    DOT11_CIPHER_ALGO_BIP=6,
    DOT11_CIPHER_ALGO_GCMP=8,
    DOT11_CIPHER_ALGO_GCMP_256=9,
    DOT11_CIPHER_ALGO_CCMP_256=10,
    DOT11_CIPHER_ALGO_BIP_GMAC_128=11,
    DOT11_CIPHER_ALGO_BIP_GMAC_256=12,
    DOT11_CIPHER_ALGO_BIP_CMAC_256=13,
    DOT11_CIPHER_ALGO_WPA_USE_GROUP=256,
    DOT11_CIPHER_ALGO_RSN_USE_GROUP=256,
    DOT11_CIPHER_ALGO_WEP=257,
    DOT11_CIPHER_ALGO_IHV_START=-2147483648,
    DOT11_CIPHER_ALGO_IHV_END=-1
};

enum _DOT11_ASSOCIATION_STATE
{
    dot11_assoc_state_zero=0,
    dot11_assoc_state_unauth_unassoc=1,
    dot11_assoc_state_auth_unassoc=2,
    dot11_assoc_state_auth_assoc=3
};

enum _DOT11_POWER_MODE
{
    dot11_power_mode_unknown=0,
    dot11_power_mode_active=1,
    dot11_power_mode_powersave=2
};

union _LARGE_INTEGER// Size=0x8 (Id=41)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct <unnamed-type-u>// Size=0x8 (Id=5144)
    {
        unsigned long LowPart;// Offset=0x0 Size=0x4
        long HighPart;// Offset=0x4 Size=0x4
    };
    struct _LARGE_INTEGER::<unnamed-type-u> u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _DOT11_PEER_STATISTICS// Size=0x30 (Id=2012)
{
    unsigned long long ullDecryptSuccessCount;// Offset=0x0 Size=0x8
    unsigned long long ullDecryptFailureCount;// Offset=0x8 Size=0x8
    unsigned long long ullTxPacketSuccessCount;// Offset=0x10 Size=0x8
    unsigned long long ullTxPacketFailureCount;// Offset=0x18 Size=0x8
    unsigned long long ullRxPacketSuccessCount;// Offset=0x20 Size=0x8
    unsigned long long ullRxPacketFailureCount;// Offset=0x28 Size=0x8
};

struct _DOT11_PEER_INFO// Size=0x160 (Id=1988)
{
    unsigned char MacAddress[6];// Offset=0x0 Size=0x6
    unsigned short usCapabilityInformation;// Offset=0x6 Size=0x2
    enum _DOT11_AUTH_ALGORITHM AuthAlgo;// Offset=0x8 Size=0x4
    enum _DOT11_CIPHER_ALGORITHM UnicastCipherAlgo;// Offset=0xc Size=0x4
    enum _DOT11_CIPHER_ALGORITHM MulticastCipherAlgo;// Offset=0x10 Size=0x4
    unsigned char bWpsEnabled;// Offset=0x14 Size=0x1
    unsigned short usListenInterval;// Offset=0x16 Size=0x2
    unsigned char ucSupportedRates[255];// Offset=0x18 Size=0xff
    unsigned short usAssociationID;// Offset=0x118 Size=0x2
    enum _DOT11_ASSOCIATION_STATE AssociationState;// Offset=0x11c Size=0x4
    enum _DOT11_POWER_MODE PowerMode;// Offset=0x120 Size=0x4
    union _LARGE_INTEGER liAssociationUpTime;// Offset=0x128 Size=0x8
    struct _DOT11_PEER_STATISTICS Statistics;// Offset=0x130 Size=0x30
};

struct _DOT11_PEER_INFO_LIST// Size=0x170 (Id=1587)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uNumOfEntries;// Offset=0x4 Size=0x4
    unsigned long uTotalNumOfEntries;// Offset=0x8 Size=0x4
    struct _DOT11_PEER_INFO PeerInfo[1];// Offset=0x10 Size=0x160
};
