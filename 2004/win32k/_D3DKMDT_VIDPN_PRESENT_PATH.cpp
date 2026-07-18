enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE
{
    D3DKMDT_VPPI_UNINITIALIZED=0,
    D3DKMDT_VPPI_PRIMARY=1,
    D3DKMDT_VPPI_SECONDARY=2,
    D3DKMDT_VPPI_TERTIARY=3,
    D3DKMDT_VPPI_QUATERNARY=4,
    D3DKMDT_VPPI_QUINARY=5,
    D3DKMDT_VPPI_SENARY=6,
    D3DKMDT_VPPI_SEPTENARY=7,
    D3DKMDT_VPPI_OCTONARY=8,
    D3DKMDT_VPPI_NONARY=9,
    D3DKMDT_VPPI_DENARY=10
};

enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING
{
    D3DKMDT_VPPS_UNINITIALIZED=0,
    D3DKMDT_VPPS_IDENTITY=1,
    D3DKMDT_VPPS_CENTERED=2,
    D3DKMDT_VPPS_STRETCHED=3,
    D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX=4,
    D3DKMDT_VPPS_CUSTOM=5,
    D3DKMDT_VPPS_RESERVED1=253,
    D3DKMDT_VPPS_UNPINNED=254,
    D3DKMDT_VPPS_NOTSPECIFIED=255
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT// Size=0x4 (Id=592)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int Identity:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Centered:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int Stretched:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int AspectRatioCenteredMax:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int Custom:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
    };
};

enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION
{
    D3DKMDT_VPPR_UNINITIALIZED=0,
    D3DKMDT_VPPR_IDENTITY=1,
    D3DKMDT_VPPR_ROTATE90=2,
    D3DKMDT_VPPR_ROTATE180=3,
    D3DKMDT_VPPR_ROTATE270=4,
    D3DKMDT_VPPR_IDENTITY_OFFSET90=5,
    D3DKMDT_VPPR_ROTATE90_OFFSET90=6,
    D3DKMDT_VPPR_ROTATE180_OFFSET90=7,
    D3DKMDT_VPPR_ROTATE270_OFFSET90=8,
    D3DKMDT_VPPR_IDENTITY_OFFSET180=9,
    D3DKMDT_VPPR_ROTATE90_OFFSET180=10,
    D3DKMDT_VPPR_ROTATE180_OFFSET180=11,
    D3DKMDT_VPPR_ROTATE270_OFFSET180=12,
    D3DKMDT_VPPR_IDENTITY_OFFSET270=13,
    D3DKMDT_VPPR_ROTATE90_OFFSET270=14,
    D3DKMDT_VPPR_ROTATE180_OFFSET270=15,
    D3DKMDT_VPPR_ROTATE270_OFFSET270=16,
    D3DKMDT_VPPR_UNPINNED=254,
    D3DKMDT_VPPR_NOTSPECIFIED=255
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT// Size=0x4 (Id=609)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int Identity:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Rotate90:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int Rotate180:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int Rotate270:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int Offset0:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int Offset90:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned int Offset180:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned int Offset270:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
    };
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION// Size=0x10 (Id=437)
{
    enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling;// Offset=0x0 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT ScalingSupport;// Offset=0x4 Size=0x4
    enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation;// Offset=0x8 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT RotationSupport;// Offset=0xc Size=0x4
};

struct _D3DKMDT_2DREGION// Size=0x8 (Id=438)
{
    unsigned int cx;// Offset=0x0 Size=0x4
    unsigned int cy;// Offset=0x4 Size=0x4
};

enum _D3DKMDT_COLOR_BASIS
{
    D3DKMDT_CB_UNINITIALIZED=0,
    D3DKMDT_CB_INTENSITY=1,
    D3DKMDT_CB_SRGB=2,
    D3DKMDT_CB_SCRGB=3,
    D3DKMDT_CB_YCBCR=4,
    D3DKMDT_CB_YPBPR=5
};

struct _D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES// Size=0x10 (Id=458)
{
    unsigned int FirstChannel;// Offset=0x0 Size=0x4
    unsigned int SecondChannel;// Offset=0x4 Size=0x4
    unsigned int ThirdChannel;// Offset=0x8 Size=0x4
    unsigned int FourthChannel;// Offset=0xc Size=0x4
};

enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT
{
    D3DKMDT_VPPC_UNINITIALIZED=0,
    D3DKMDT_VPPC_GRAPHICS=1,
    D3DKMDT_VPPC_VIDEO=2,
    D3DKMDT_VPPC_NOTSPECIFIED=255
};

enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE
{
    D3DKMDT_VPPMT_UNINITIALIZED=0,
    D3DKMDT_VPPMT_NOPROTECTION=1,
    D3DKMDT_VPPMT_MACROVISION_APSTRIGGER=2,
    D3DKMDT_VPPMT_MACROVISION_FULLSUPPORT=3
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT// Size=0x4 (Id=590)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int NoProtection:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int MacroVisionApsTrigger:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int MacroVisionFull:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION// Size=0x10c (Id=586)
{
    enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE CopyProtectionType;// Offset=0x0 Size=0x4
    unsigned int APSTriggerBits;// Offset=0x4 Size=0x4
    unsigned char OEMCopyProtection[256];// Offset=0x8 Size=0x100
    struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT CopyProtectionSupport;// Offset=0x108 Size=0x4
};

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

struct _D3DKMDT_VIDPN_PRESENT_PATH// Size=0x15c (Id=418)
{
    unsigned int VidPnSourceId;// Offset=0x0 Size=0x4
    unsigned int VidPnTargetId;// Offset=0x4 Size=0x4
    enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE ImportanceOrdinal;// Offset=0x8 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION ContentTransformation;// Offset=0xc Size=0x10
    struct _D3DKMDT_2DREGION VisibleFromActiveTLOffset;// Offset=0x1c Size=0x8
    struct _D3DKMDT_2DREGION VisibleFromActiveBROffset;// Offset=0x24 Size=0x8
    enum _D3DKMDT_COLOR_BASIS VidPnTargetColorBasis;// Offset=0x2c Size=0x4
    struct _D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES VidPnTargetColorCoeffDynamicRanges;// Offset=0x30 Size=0x10
    enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT Content;// Offset=0x40 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION CopyProtection;// Offset=0x44 Size=0x10c
    struct _D3DKMDT_GAMMA_RAMP GammaRamp;// Offset=0x150 Size=0xc
};
