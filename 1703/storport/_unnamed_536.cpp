struct _unnamed_535// Size=0x10 (Id=535)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_534// Size=0x10 (Id=534)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_536// Size=0x10 (Id=536)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_535 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_534 Translated;// Offset=0x0 Size=0x10
    };
};
