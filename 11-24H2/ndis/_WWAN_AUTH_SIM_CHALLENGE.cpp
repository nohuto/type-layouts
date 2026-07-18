struct _WWAN_AUTH_SIM_CHALLENGE// Size=0x34 (Id=2101)
{
    unsigned char Rand1[16];// Offset=0x0 Size=0x10
    unsigned char Rand2[16];// Offset=0x10 Size=0x10
    unsigned char Rand3[16];// Offset=0x20 Size=0x10
    unsigned long n;// Offset=0x30 Size=0x4
};
