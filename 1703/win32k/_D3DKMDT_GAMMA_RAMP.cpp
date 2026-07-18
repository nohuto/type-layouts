enum _D3DDDI_GAMMARAMP_TYPE
{
    D3DDDI_GAMMARAMP_UNINITIALIZED=0,
    D3DDDI_GAMMARAMP_DEFAULT=1,
    D3DDDI_GAMMARAMP_RGB256x3x16=2,
    D3DDDI_GAMMARAMP_DXGI_1=3
};

struct _D3DKMDT_GAMMA_RAMP// Size=0x18 (Id=527)
{
    union // Size=0x10 (Id=0)
    {
        enum _D3DDDI_GAMMARAMP_TYPE Type;// Offset=0x0 Size=0x4
        unsigned long long DataSize;// Offset=0x8 Size=0x8
        union <unnamed-type-Data>// Size=0x8 (Id=1139)
        {
            struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 * pRgb256x3x16;// Offset=0x0 Size=0x8
            struct _D3DDDI_GAMMA_RAMP_DXGI_1 * pDxgi1;// Offset=0x0 Size=0x8
            void * pRaw;// Offset=0x0 Size=0x8
        };
        union _D3DKMDT_GAMMA_RAMP::<unnamed-type-Data> Data;// Offset=0x10 Size=0x8
    };
};
