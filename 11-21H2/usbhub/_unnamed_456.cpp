struct _unnamed_455// Size=0x10 (Id=455)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_454// Size=0x10 (Id=454)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_456// Size=0x10 (Id=456)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_455 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_454 Translated;// Offset=0x0 Size=0x10
    };
};
