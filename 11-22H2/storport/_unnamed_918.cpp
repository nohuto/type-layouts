struct _unnamed_917// Size=0x10 (Id=917)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_916// Size=0x10 (Id=916)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_918// Size=0x10 (Id=918)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_917 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_916 Translated;// Offset=0x0 Size=0x10
    };
};
