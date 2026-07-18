struct _PSHED_PLATFORM_DETAILS_VALID_BITS// Size=0x4 (Id=2286)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int GicRegisterOffset:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _PSHED_PLATFORM_DETAILS// Size=0xc (Id=3265)
{
    unsigned int Version;// Offset=0x0 Size=0x4
    struct _PSHED_PLATFORM_DETAILS_VALID_BITS Vb;// Offset=0x4 Size=0x4
    unsigned int GicRegisterOffset;// Offset=0x8 Size=0x4
};
