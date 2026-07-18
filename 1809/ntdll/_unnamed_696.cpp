struct _unnamed_695// Size=0x10 (Id=695)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_694// Size=0x10 (Id=694)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_696// Size=0x10 (Id=696)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_695 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_694 Translated;// Offset=0x0 Size=0x10
    };
};
