struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _WWAN_AUTH_METHOD
{
    WwanAuthSim=0,
    WwanAuthAka=1,
    WwanAuthAkaPrime=2,
    WwanAuthMethodMax=3
};

struct _WWAN_AUTH_SIM_CHALLENGE// Size=0x34 (Id=1875)
{
    unsigned char Rand1[16];// Offset=0x0 Size=0x10
    unsigned char Rand2[16];// Offset=0x10 Size=0x10
    unsigned char Rand3[16];// Offset=0x20 Size=0x10
    unsigned long n;// Offset=0x30 Size=0x4
};

struct _WWAN_AUTH_AKA_CHALLENGE// Size=0x20 (Id=1874)
{
    unsigned char Rand[16];// Offset=0x0 Size=0x10
    unsigned char Autn[16];// Offset=0x10 Size=0x10
};

struct _WWAN_AUTH_AKAP_CHALLENGE// Size=0x124 (Id=1745)
{
    unsigned char Rand[16];// Offset=0x0 Size=0x10
    unsigned char Autn[16];// Offset=0x10 Size=0x10
    unsigned char NetworkName[256];// Offset=0x20 Size=0x100
    unsigned long NetworkNameLength;// Offset=0x120 Size=0x4
};

struct _WWAN_AUTH_CHALLENGE// Size=0x128 (Id=1702)
{
    union // Size=0x4 (Id=0)
    {
        enum _WWAN_AUTH_METHOD AuthMethod;// Offset=0x0 Size=0x4
        union <unnamed-type-u>// Size=0x124 (Id=14496)
        {
            struct _WWAN_AUTH_SIM_CHALLENGE AuthSim;// Offset=0x0 Size=0x34
            struct _WWAN_AUTH_AKA_CHALLENGE AuthAka;// Offset=0x0 Size=0x20
            struct _WWAN_AUTH_AKAP_CHALLENGE AuthAkap;// Offset=0x0 Size=0x124
        };
    };
    union _WWAN_AUTH_CHALLENGE::<unnamed-type-u> u;// Offset=0x4 Size=0x124
};

struct _NDIS_WWAN_AUTH_CHALLENGE// Size=0x12c (Id=1661)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _WWAN_AUTH_CHALLENGE AuthChallenge;// Offset=0x4 Size=0x128
};
