struct _anonymous_1699// Size=0x1 (Id=1699)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Age:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Protection:3;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x3
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _anonymous_1700// Size=0x1 (Id=1700)
{
    unsigned char EntireWsle;// Offset=0x0 Size=0x1
};

union _anonymous_1701// Size=0x1 (Id=1701)
{
    struct _anonymous_1699 e1;// Offset=0x0 Size=0x1
    struct _anonymous_1700 e2;// Offset=0x0 Size=0x1
};

struct _MI_WSLE// Size=0x1 (Id=1702)
{
    union _anonymous_1701 u1;// Offset=0x0 Size=0x1
};
