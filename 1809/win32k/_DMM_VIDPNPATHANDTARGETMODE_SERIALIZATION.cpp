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

struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT// Size=0x4 (Id=575)
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

struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT// Size=0x4 (Id=591)
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

struct _D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION// Size=0x10 (Id=418)
{
    enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling;// Offset=0x0 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT ScalingSupport;// Offset=0x4 Size=0x4
    enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation;// Offset=0x8 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT RotationSupport;// Offset=0xc Size=0x4
};

struct _D3DKMDT_2DREGION// Size=0x8 (Id=419)
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

struct _D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES// Size=0x10 (Id=436)
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

struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT// Size=0x4 (Id=573)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int NoProtection:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int MacroVisionApsTrigger:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int MacroVisionFull:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION// Size=0x10c (Id=569)
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
    D3DDDI_GAMMARAMP_MATRIX_3x4=4
};

struct _D3DKMDT_GAMMA_RAMP// Size=0x18 (Id=558)
{
    union // Size=0x10 (Id=0)
    {
        enum _D3DDDI_GAMMARAMP_TYPE Type;// Offset=0x0 Size=0x4
        unsigned long long DataSize;// Offset=0x8 Size=0x8
        union <unnamed-type-Data>// Size=0x8 (Id=1183)
        {
            struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 * pRgb256x3x16;// Offset=0x0 Size=0x8
            struct _D3DDDI_GAMMA_RAMP_DXGI_1 * pDxgi1;// Offset=0x0 Size=0x8
            struct _D3DKMDT_3X4_COLORSPACE_TRANSFORM * p3x4;// Offset=0x0 Size=0x8
            void * pRaw;// Offset=0x0 Size=0x8
        };
        union _D3DKMDT_GAMMA_RAMP::<unnamed-type-Data> Data;// Offset=0x10 Size=0x8
    };
};

struct _D3DKMDT_VIDPN_PRESENT_PATH// Size=0x168 (Id=403)
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
    struct _D3DKMDT_GAMMA_RAMP GammaRamp;// Offset=0x150 Size=0x18
};

enum _D3DKMDT_VIDEO_SIGNAL_STANDARD
{
    D3DKMDT_VSS_UNINITIALIZED=0,
    D3DKMDT_VSS_VESA_DMT=1,
    D3DKMDT_VSS_VESA_GTF=2,
    D3DKMDT_VSS_VESA_CVT=3,
    D3DKMDT_VSS_IBM=4,
    D3DKMDT_VSS_APPLE=5,
    D3DKMDT_VSS_NTSC_M=6,
    D3DKMDT_VSS_NTSC_J=7,
    D3DKMDT_VSS_NTSC_443=8,
    D3DKMDT_VSS_PAL_B=9,
    D3DKMDT_VSS_PAL_B1=10,
    D3DKMDT_VSS_PAL_G=11,
    D3DKMDT_VSS_PAL_H=12,
    D3DKMDT_VSS_PAL_I=13,
    D3DKMDT_VSS_PAL_D=14,
    D3DKMDT_VSS_PAL_N=15,
    D3DKMDT_VSS_PAL_NC=16,
    D3DKMDT_VSS_SECAM_B=17,
    D3DKMDT_VSS_SECAM_D=18,
    D3DKMDT_VSS_SECAM_G=19,
    D3DKMDT_VSS_SECAM_H=20,
    D3DKMDT_VSS_SECAM_K=21,
    D3DKMDT_VSS_SECAM_K1=22,
    D3DKMDT_VSS_SECAM_L=23,
    D3DKMDT_VSS_SECAM_L1=24,
    D3DKMDT_VSS_EIA_861=25,
    D3DKMDT_VSS_EIA_861A=26,
    D3DKMDT_VSS_EIA_861B=27,
    D3DKMDT_VSS_PAL_K=28,
    D3DKMDT_VSS_PAL_K1=29,
    D3DKMDT_VSS_PAL_L=30,
    D3DKMDT_VSS_PAL_M=31,
    D3DKMDT_VSS_OTHER=255
};

struct _D3DDDI_RATIONAL// Size=0x8 (Id=562)
{
    unsigned int Numerator;// Offset=0x0 Size=0x4
    unsigned int Denominator;// Offset=0x4 Size=0x4
};

enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING
{
    D3DDDI_VSSLO_UNINITIALIZED=0,
    D3DDDI_VSSLO_PROGRESSIVE=1,
    D3DDDI_VSSLO_INTERLACED_UPPERFIELDFIRST=2,
    D3DDDI_VSSLO_INTERLACED_LOWERFIELDFIRST=3,
    D3DDDI_VSSLO_OTHER=255
};

struct _D3DKMDT_VIDEO_SIGNAL_INFO// Size=0x38 (Id=427)
{
    enum _D3DKMDT_VIDEO_SIGNAL_STANDARD VideoStandard;// Offset=0x0 Size=0x4
    struct _D3DKMDT_2DREGION TotalSize;// Offset=0x4 Size=0x8
    struct _D3DKMDT_2DREGION ActiveSize;// Offset=0xc Size=0x8
    struct _D3DDDI_RATIONAL VSyncFreq;// Offset=0x14 Size=0x8
    struct _D3DDDI_RATIONAL HSyncFreq;// Offset=0x1c Size=0x8
    unsigned long long PixelRate;// Offset=0x28 Size=0x8
    union // Size=0x4 (Id=0)
    {
        struct _D3DKMDT_VIDEO_SIGNAL_INFO::_unnamed_429::<unnamed-type-AdditionalSignalInfo> AdditionalSignalInfo;// Offset=0x30 Size=0x4
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering;// Offset=0x30 Size=0x4
    };
};

enum _D3DKMDT_MODE_PREFERENCE
{
    D3DKMDT_MP_UNINITIALIZED=0,
    D3DKMDT_MP_PREFERRED=1,
    D3DKMDT_MP_NOTPREFERRED=2
};

union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE// Size=0x4 (Id=563)
{
    struct // Size=0x4 (Id=0)
    {
        enum _D3DKMDT_MODE_PREFERENCE Preference:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned int Rgb:6;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x6
        unsigned int YCbCr444:6;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x6
        unsigned int YCbCr422:6;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x6
        unsigned int YCbCr420:6;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x6
        unsigned int Intensity:6;// Offset=0x0 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned int Value;// Offset=0x0 Size=0x4
};

struct _D3DKMDT_VIDPN_TARGET_MODE// Size=0x48 (Id=352)
{
    unsigned int Id;// Offset=0x0 Size=0x4
    struct _D3DKMDT_VIDEO_SIGNAL_INFO VideoSignalInfo;// Offset=0x8 Size=0x38
    union // Size=0x4 (Id=0)
    {
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE WireFormatAndPreference;// Offset=0x40 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            enum _D3DKMDT_MODE_PREFERENCE Preference:2;// Offset=0x40 Size=0x4 BitOffset=0x0 BitSize=0x2
        };
    };
};

struct _DMM_VIDPNPATHANDTARGETMODE_SERIALIZATION// Size=0x1b0 (Id=309)
{
    struct _D3DKMDT_VIDPN_PRESENT_PATH PathInfo;// Offset=0x0 Size=0x168
    struct _D3DKMDT_VIDPN_TARGET_MODE TargetMode;// Offset=0x168 Size=0x48
};
