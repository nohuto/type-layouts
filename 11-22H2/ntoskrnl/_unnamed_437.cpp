struct _unnamed_436// Size=0x10 (Id=436)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_435// Size=0x10 (Id=435)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_437// Size=0x10 (Id=437)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_436 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_435 Translated;// Offset=0x0 Size=0x10
    };
};
