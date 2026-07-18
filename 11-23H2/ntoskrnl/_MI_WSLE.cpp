struct _unnamed_1898// Size=0x1 (Id=1898)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Age:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Protection:3;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x3
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_1899// Size=0x1 (Id=1899)
{
    unsigned char EntireWsle;// Offset=0x0 Size=0x1
};

union _unnamed_1900// Size=0x1 (Id=1900)
{
    struct _unnamed_1898 e1;// Offset=0x0 Size=0x1
    struct _unnamed_1899 e2;// Offset=0x0 Size=0x1
};

struct _MI_WSLE// Size=0x1 (Id=1901)
{
    union _unnamed_1900 u1;// Offset=0x0 Size=0x1
};
