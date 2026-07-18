union NVME_ICE_DATA_ALIGNMENT_BITMASK// Size=0x1 (Id=1383)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Alignment4B:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Alignment8B:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Alignment16B:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Alignment32B:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    unsigned char AsUchar;// Offset=0x0 Size=0x1
};
