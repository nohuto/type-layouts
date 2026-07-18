struct _anonymous_727// Size=0x10 (Id=727)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_726// Size=0x10 (Id=726)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_728// Size=0x10 (Id=728)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_727 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_726 Translated;// Offset=0x0 Size=0x10
    };
};
