struct _unnamed_13// Size=0x10 (Id=13)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_12// Size=0x10 (Id=12)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_14// Size=0x10 (Id=14)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_13 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_12 Translated;// Offset=0x0 Size=0x10
    };
};
