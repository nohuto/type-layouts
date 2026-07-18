struct _unnamed_639// Size=0x10 (Id=639)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_638// Size=0x10 (Id=638)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_640// Size=0x10 (Id=640)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_639 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_638 Translated;// Offset=0x0 Size=0x10
    };
};
