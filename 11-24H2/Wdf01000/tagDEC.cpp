struct tagDEC// Size=0x10 (Id=927)
{
    unsigned short wReserved;// Offset=0x0 Size=0x2
    union // Size=0x4 (Id=0)
    {
        unsigned char scale;// Offset=0x2 Size=0x1
        unsigned char sign;// Offset=0x3 Size=0x1
        unsigned short signscale;// Offset=0x2 Size=0x2
    };
    unsigned long Hi32;// Offset=0x4 Size=0x4
    union // Size=0x10 (Id=0)
    {
        unsigned long Lo32;// Offset=0x8 Size=0x4
        unsigned long Mid32;// Offset=0xc Size=0x4
        unsigned long long Lo64;// Offset=0x8 Size=0x8
    };
};
