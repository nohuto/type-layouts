struct _unnamed_522// Size=0x10 (Id=522)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_521// Size=0x10 (Id=521)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_523// Size=0x10 (Id=523)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_522 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_521 Translated;// Offset=0x0 Size=0x10
    };
};
