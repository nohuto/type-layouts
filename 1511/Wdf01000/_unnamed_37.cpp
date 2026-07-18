struct _unnamed_36// Size=0x10 (Id=36)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_35// Size=0x10 (Id=35)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_37// Size=0x10 (Id=37)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_36 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_35 Translated;// Offset=0x0 Size=0x10
    };
};
