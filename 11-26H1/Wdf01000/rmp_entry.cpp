struct rmp_entry// Size=0x10 (Id=4147)
{
    unsigned long long guest_pa;// Offset=0x0 Size=0x8
    unsigned char assigned;// Offset=0x8 Size=0x1
    struct // Size=0x1 (Id=0)
    {
        unsigned char page_size:1;// Offset=0x9 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char rmp_2mb_region_status:1;// Offset=0x9 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char reserved1:6;// Offset=0x9 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char immutable;// Offset=0xa Size=0x1
    unsigned char reserved2;// Offset=0xb Size=0x1
    unsigned int asid;// Offset=0xc Size=0x4
};
