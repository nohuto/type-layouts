struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
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

struct DOT11_AUTH_ALGORITHM_LIST// Size=0x10 (Id=679)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uNumOfEntries;// Offset=0x4 Size=0x4
    unsigned long uTotalNumOfEntries;// Offset=0x8 Size=0x4
    enum _DOT11_AUTH_ALGORITHM AlgorithmIds[1];// Offset=0xc Size=0x4
};
