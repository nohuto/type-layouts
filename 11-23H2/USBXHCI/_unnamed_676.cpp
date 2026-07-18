struct _unnamed_674// Size=0x1 (Id=674)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char MaxStreams:5;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x5
        unsigned char Reserved1:3;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x3
    };
};

struct _unnamed_675// Size=0x1 (Id=675)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Mult:2;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x2
        unsigned char Reserved2:5;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x5
        unsigned char SspCompanion:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

union _unnamed_676// Size=0x1 (Id=676)
{
    unsigned char AsUchar;// Offset=0x0 Size=0x1
    struct _unnamed_674 Bulk;// Offset=0x0 Size=0x1
    struct _unnamed_675 Isochronous;// Offset=0x0 Size=0x1
};
