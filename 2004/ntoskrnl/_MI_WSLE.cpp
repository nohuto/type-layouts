struct _anonymous_1695// Size=0x1 (Id=1695)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Age:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Protection:3;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x3
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _anonymous_1696// Size=0x1 (Id=1696)
{
    unsigned char EntireWsle;// Offset=0x0 Size=0x1
};

union _anonymous_1697// Size=0x1 (Id=1697)
{
    struct _anonymous_1695 e1;// Offset=0x0 Size=0x1
    struct _anonymous_1696 e2;// Offset=0x0 Size=0x1
};

struct _MI_WSLE// Size=0x1 (Id=1698)
{
    union _anonymous_1697 u1;// Offset=0x0 Size=0x1
};
