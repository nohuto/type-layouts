union NVME_ICE_PAGE_SIZE_BITMASK// Size=0x1 (Id=1386)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageSize4K:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char PageSize2M:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};
