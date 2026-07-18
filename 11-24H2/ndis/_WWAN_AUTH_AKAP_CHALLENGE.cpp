struct _WWAN_AUTH_AKAP_CHALLENGE// Size=0x124 (Id=1968)
{
    unsigned char Rand[16];// Offset=0x0 Size=0x10
    unsigned char Autn[16];// Offset=0x10 Size=0x10
    unsigned char NetworkName[256];// Offset=0x20 Size=0x100
    unsigned long NetworkNameLength;// Offset=0x120 Size=0x4
};
