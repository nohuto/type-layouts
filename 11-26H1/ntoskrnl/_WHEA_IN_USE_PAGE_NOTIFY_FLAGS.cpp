struct _unnamed_482// Size=0x1 (Id=482)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PlatformDirected:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PageSwapped:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char PageDemoted:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Reserved:3;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x3
        unsigned char NotifyAllOfflines:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char PageOfflined:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS// Size=0x1 (Id=483)
{
    struct _unnamed_482 Bits;// Offset=0x0 Size=0x1
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};
