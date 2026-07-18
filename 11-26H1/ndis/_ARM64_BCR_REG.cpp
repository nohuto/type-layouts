union _ARM64_BCR_REG// Size=0x4 (Id=8)
{
    unsigned int Value;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned int E:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned int PMC:2;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x2
        unsigned int BT2:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int res0_1:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned int BAS:4;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x4
        unsigned int res0_2:4;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x4
        unsigned int HMC:1;// Offset=0x0 Size=0x4 BitOffset=0xd BitSize=0x1
        unsigned int SSC:2;// Offset=0x0 Size=0x4 BitOffset=0xe BitSize=0x2
        unsigned int LBN:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned int BT:4;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x4
        unsigned int Mask:5;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x5
        unsigned int SSCE:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
        unsigned int LBNX:2;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x2
    };
};
