struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=242)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
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

struct DOT11_CIPHER_DEFAULT_KEY_VALUE// Size=0x18 (Id=1116)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uKeyIndex;// Offset=0x4 Size=0x4
    enum _DOT11_CIPHER_ALGORITHM AlgorithmId;// Offset=0x8 Size=0x4
    unsigned char MacAddr[6];// Offset=0xc Size=0x6
    unsigned char bDelete;// Offset=0x12 Size=0x1
    unsigned char bStatic;// Offset=0x13 Size=0x1
    unsigned short usKeyLength;// Offset=0x14 Size=0x2
    unsigned char ucKey[1];// Offset=0x16 Size=0x1
};
