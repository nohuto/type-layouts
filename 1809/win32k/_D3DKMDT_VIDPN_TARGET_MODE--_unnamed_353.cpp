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

union _D3DKMDT_VIDPN_TARGET_MODE::_unnamed_353// Size=0x4 (Id=353)
{
    union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE WireFormatAndPreference;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        enum _D3DKMDT_MODE_PREFERENCE Preference:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
};
