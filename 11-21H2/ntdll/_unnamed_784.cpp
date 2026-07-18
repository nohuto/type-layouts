struct _unnamed_783// Size=0x10 (Id=783)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_782// Size=0x10 (Id=782)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_784// Size=0x10 (Id=784)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_783 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_782 Translated;// Offset=0x0 Size=0x10
    };
};
