struct _anonymous_1700// Size=0x1 (Id=1700)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Age:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Protection:3;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x3
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _anonymous_1701// Size=0x1 (Id=1701)
{
    unsigned char EntireWsle;// Offset=0x0 Size=0x1
};

union _anonymous_1702// Size=0x1 (Id=1702)
{
    struct _anonymous_1700 e1;// Offset=0x0 Size=0x1
    struct _anonymous_1701 e2;// Offset=0x0 Size=0x1
};
