enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING
{
    D3DDDI_VSSLO_UNINITIALIZED=0,
    D3DDDI_VSSLO_PROGRESSIVE=1,
    D3DDDI_VSSLO_INTERLACED_UPPERFIELDFIRST=2,
    D3DDDI_VSSLO_INTERLACED_LOWERFIELDFIRST=3,
    D3DDDI_VSSLO_OTHER=255
};

struct _D3DKMDT_VIDEO_SIGNAL_INFO::_unnamed_386::<unnamed-type-AdditionalSignalInfo>// Size=0x4 (Id=386)
{
    struct // Size=0x4 (Id=0)
    {
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned int VSyncFreqDivider:6;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x6
        unsigned int Reserved:23;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x17
    };
};
