struct _unnamed_500// Size=0x10 (Id=500)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_499// Size=0x10 (Id=499)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_501// Size=0x10 (Id=501)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_500 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_499 Translated;// Offset=0x0 Size=0x10
    };
};
