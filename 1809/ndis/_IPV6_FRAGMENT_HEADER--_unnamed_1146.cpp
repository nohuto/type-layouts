union _IPV6_FRAGMENT_HEADER::_unnamed_1146// Size=0x2 (Id=1146)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short DontUse1:8;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x8
        unsigned short MoreFragments:1;// Offset=0x0 Size=0x2 BitOffset=0x8 BitSize=0x1
        unsigned short ReservedBits:2;// Offset=0x0 Size=0x2 BitOffset=0x9 BitSize=0x2
        unsigned short DontUse2:5;// Offset=0x0 Size=0x2 BitOffset=0xb BitSize=0x5
    };
    unsigned short OffsetAndFlags;// Offset=0x0 Size=0x2
};
