struct _unnamed_419// Size=0x10 (Id=419)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_418// Size=0x10 (Id=418)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_420// Size=0x10 (Id=420)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_419 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_418 Translated;// Offset=0x0 Size=0x10
    };
};
