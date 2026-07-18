union in_addr::<unnamed-type-S_un>// Size=0x4 (Id=161)
{
    struct <unnamed-type-S_un_b>// Size=0x4 (Id=15133)
    {
        unsigned char s_b1;// Offset=0x0 Size=0x1
        unsigned char s_b2;// Offset=0x1 Size=0x1
        unsigned char s_b3;// Offset=0x2 Size=0x1
        unsigned char s_b4;// Offset=0x3 Size=0x1
    };
    struct in_addr::<unnamed-type-S_un>::<unnamed-type-S_un_b> S_un_b;// Offset=0x0 Size=0x4
    struct <unnamed-type-S_un_w>// Size=0x4 (Id=15139)
    {
        unsigned short s_w1;// Offset=0x0 Size=0x2
        unsigned short s_w2;// Offset=0x2 Size=0x2
    };
    struct in_addr::<unnamed-type-S_un>::<unnamed-type-S_un_w> S_un_w;// Offset=0x0 Size=0x4
    unsigned long S_addr;// Offset=0x0 Size=0x4
};
