struct _WWAN_AUTH_SIM_CHALLENGE// Size=0x34 (Id=2101)
{
    unsigned char Rand1[16];// Offset=0x0 Size=0x10
    unsigned char Rand2[16];// Offset=0x10 Size=0x10
    unsigned char Rand3[16];// Offset=0x20 Size=0x10
    unsigned long n;// Offset=0x30 Size=0x4
};

struct _WWAN_AUTH_AKA_CHALLENGE// Size=0x20 (Id=2100)
{
    unsigned char Rand[16];// Offset=0x0 Size=0x10
    unsigned char Autn[16];// Offset=0x10 Size=0x10
};

struct _WWAN_AUTH_AKAP_CHALLENGE// Size=0x124 (Id=1968)
{
    unsigned char Rand[16];// Offset=0x0 Size=0x10
    unsigned char Autn[16];// Offset=0x10 Size=0x10
    unsigned char NetworkName[256];// Offset=0x20 Size=0x100
    unsigned long NetworkNameLength;// Offset=0x120 Size=0x4
};

union _WWAN_AUTH_CHALLENGE::<unnamed-type-u>// Size=0x124 (Id=1927)
{
    struct _WWAN_AUTH_SIM_CHALLENGE AuthSim;// Offset=0x0 Size=0x34
    struct _WWAN_AUTH_AKA_CHALLENGE AuthAka;// Offset=0x0 Size=0x20
    struct _WWAN_AUTH_AKAP_CHALLENGE AuthAkap;// Offset=0x0 Size=0x124
};
