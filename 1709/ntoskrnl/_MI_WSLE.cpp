struct _unnamed_1274// Size=0x1 (Id=1274)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Age:4;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x4
        unsigned char Protection:3;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x3
        unsigned char Reserved:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_1275// Size=0x1 (Id=1275)
{
    unsigned char EntireWsle;// Offset=0x0 Size=0x1
};

union _unnamed_1276// Size=0x1 (Id=1276)
{
    struct _unnamed_1274 e1;// Offset=0x0 Size=0x1
    struct _unnamed_1275 e2;// Offset=0x0 Size=0x1
};

struct _MI_WSLE// Size=0x1 (Id=1277)
{
    union _unnamed_1276 u1;// Offset=0x0 Size=0x1
};
