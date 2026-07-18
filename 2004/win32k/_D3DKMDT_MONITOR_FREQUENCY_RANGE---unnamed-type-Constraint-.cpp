struct _D3DKMDT_2DREGION// Size=0x8 (Id=438)
{
    unsigned int cx;// Offset=0x0 Size=0x4
    unsigned int cy;// Offset=0x4 Size=0x4
};

union _D3DKMDT_MONITOR_FREQUENCY_RANGE::<unnamed-type-Constraint>// Size=0x8 (Id=475)
{
    union // Size=0x8 (Id=0)
    {
        struct _D3DKMDT_2DREGION ActiveSize;// Offset=0x0 Size=0x8
        unsigned long MaxPixelRate;// Offset=0x0 Size=0x4
    };
};
