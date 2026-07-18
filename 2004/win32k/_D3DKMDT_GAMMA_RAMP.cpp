enum _D3DDDI_GAMMARAMP_TYPE
{
    D3DDDI_GAMMARAMP_UNINITIALIZED=0,
    D3DDDI_GAMMARAMP_DEFAULT=1,
    D3DDDI_GAMMARAMP_RGB256x3x16=2,
    D3DDDI_GAMMARAMP_DXGI_1=3,
    D3DDDI_GAMMARAMP_MATRIX_3x4=4,
    D3DDDI_GAMMARAMP_MATRIX_V2=5
};

struct _D3DKMDT_GAMMA_RAMP// Size=0xc (Id=576)
{
    union // Size=0x8 (Id=0)
    {
        enum _D3DDDI_GAMMARAMP_TYPE Type;// Offset=0x0 Size=0x4
        unsigned long DataSize;// Offset=0x4 Size=0x4
        union <unnamed-type-Data>// Size=0x4 (Id=1177)
        {
            struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 * pRgb256x3x16;// Offset=0x0 Size=0x4
            struct _D3DDDI_GAMMA_RAMP_DXGI_1 * pDxgi1;// Offset=0x0 Size=0x4
            struct _D3DKMDT_3X4_COLORSPACE_TRANSFORM * p3x4;// Offset=0x0 Size=0x4
            struct _D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2 * pMatrixV2;// Offset=0x0 Size=0x4
            void * pRaw;// Offset=0x0 Size=0x4
        };
        union _D3DKMDT_GAMMA_RAMP::<unnamed-type-Data> Data;// Offset=0x8 Size=0x4
    };
};
