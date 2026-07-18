struct _KERNEL_CET_CONTEXT// Size=0x18 (Id=3098)
{
    unsigned long long Ssp;// Offset=0x0 Size=0x8
    unsigned long long Rip;// Offset=0x8 Size=0x8
    unsigned short SegCs;// Offset=0x10 Size=0x2
    union // Size=0x2 (Id=0)
    {
        unsigned short AllFlags;// Offset=0x12 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short UseWrss:1;// Offset=0x12 Size=0x2 BitOffset=0x0 BitSize=0x1
            unsigned short PopShadowStackOne:1;// Offset=0x12 Size=0x2 BitOffset=0x1 BitSize=0x1
            unsigned short Unused:14;// Offset=0x12 Size=0x2 BitOffset=0x2 BitSize=0xe
        };
    };
    unsigned short Fill[2];// Offset=0x14 Size=0x4
};
