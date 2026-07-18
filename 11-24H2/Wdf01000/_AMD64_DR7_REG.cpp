union _AMD64_DR7_REG// Size=0x8 (Id=1202)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    unsigned char LGFlags;// Offset=0x0 Size=0x1
    struct // Size=0x2 (Id=0)
    {
        unsigned char L0:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char G0:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char L1:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char G1:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char L2:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char G2:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char L3:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char G3:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
        unsigned char LE:1;// Offset=0x1 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char GE:1;// Offset=0x1 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char res1:1;// Offset=0x1 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char res0_1:2;// Offset=0x1 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char GD:1;// Offset=0x1 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char res0_2:2;// Offset=0x1 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
    union // Size=0x2 (Id=0)
    {
        unsigned short Len_RW;// Offset=0x2 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned short RW0:2;// Offset=0x2 Size=0x2 BitOffset=0x0 BitSize=0x2
            unsigned short Len0:2;// Offset=0x2 Size=0x2 BitOffset=0x2 BitSize=0x2
            unsigned short RW1:2;// Offset=0x2 Size=0x2 BitOffset=0x4 BitSize=0x2
            unsigned short Len1:2;// Offset=0x2 Size=0x2 BitOffset=0x6 BitSize=0x2
            unsigned short RW2:2;// Offset=0x2 Size=0x2 BitOffset=0x8 BitSize=0x2
            unsigned short Len2:2;// Offset=0x2 Size=0x2 BitOffset=0xa BitSize=0x2
            unsigned short RW3:2;// Offset=0x2 Size=0x2 BitOffset=0xc BitSize=0x2
            unsigned short Len3:2;// Offset=0x2 Size=0x2 BitOffset=0xe BitSize=0x2
        };
    };
    unsigned int res0_3;// Offset=0x4 Size=0x4
};
