struct _unnamed_592// Size=0x1 (Id=592)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MaxStreams:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _unnamed_593// Size=0x1 (Id=593)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Mult:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved2:5;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x5
        unsigned char SspCompanion:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_594// Size=0x1 (Id=594)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct _unnamed_592 Bulk;// Offset=0x0 Size=0x1
    struct _unnamed_593 Isochronous;// Offset=0x0 Size=0x1
};
