struct _D3DDDI_RATIONAL// Size=0x8 (Id=516)
{
    unsigned int Numerator;// Offset=0x0 Size=0x4
    unsigned int Denominator;// Offset=0x4 Size=0x4
};

struct _D3DKMDT_FREQUENCY_RANGE// Size=0x20 (Id=533)
{
    struct _D3DDDI_RATIONAL MinVSyncFreq;// Offset=0x0 Size=0x8
    struct _D3DDDI_RATIONAL MaxVSyncFreq;// Offset=0x8 Size=0x8
    struct _D3DDDI_RATIONAL MinHSyncFreq;// Offset=0x10 Size=0x8
    struct _D3DDDI_RATIONAL MaxHSyncFreq;// Offset=0x18 Size=0x8
};
