struct _unnamed_885// Size=0x10 (Id=885)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_884// Size=0x10 (Id=884)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_886// Size=0x10 (Id=886)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_885 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_884 Translated;// Offset=0x0 Size=0x10
    };
};
