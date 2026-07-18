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

struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT// Size=0x4 (Id=634)
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

struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT// Size=0x4 (Id=651)
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

struct _D3DKMDT_VIDPN_PRESENT_PATH_TRANSFORMATION// Size=0x10 (Id=470)
{
    enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling;// Offset=0x0 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT ScalingSupport;// Offset=0x4 Size=0x4
    enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation;// Offset=0x8 Size=0x4
    struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT RotationSupport;// Offset=0xc Size=0x4
};
