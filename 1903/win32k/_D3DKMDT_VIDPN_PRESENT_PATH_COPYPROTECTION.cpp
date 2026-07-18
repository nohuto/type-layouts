enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE
{
    D3DKMDT_VPPMT_UNINITIALIZED=0,
    D3DKMDT_VPPMT_NOPROTECTION=1,
    D3DKMDT_VPPMT_MACROVISION_APSTRIGGER=2,
    D3DKMDT_VPPMT_MACROVISION_FULLSUPPORT=3
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT// Size=0x4 (Id=584)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int NoProtection:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int MacroVisionApsTrigger:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned int MacroVisionFull:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned int Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
    };
};

struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION// Size=0x10c (Id=580)
{
    enum _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE CopyProtectionType;// Offset=0x0 Size=0x4
    unsigned int APSTriggerBits;// Offset=0x4 Size=0x4
    unsigned char OEMCopyProtection[256];// Offset=0x8 Size=0x100
    struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT CopyProtectionSupport;// Offset=0x108 Size=0x4
};
