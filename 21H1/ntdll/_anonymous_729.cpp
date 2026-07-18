struct _anonymous_728// Size=0xc (Id=728)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long Affinity;// Offset=0x8 Size=0x4
};

struct _anonymous_727// Size=0xc (Id=727)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long Affinity;// Offset=0x8 Size=0x4
};

struct _anonymous_729// Size=0xc (Id=729)
{
    union // Size=0xc (Id=0)
    {
        struct _anonymous_728 Raw;// Offset=0x0 Size=0xc
        struct _anonymous_727 Translated;// Offset=0x0 Size=0xc
    };
};
