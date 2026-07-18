struct _anonymous_284// Size=0x10 (Id=284)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_283// Size=0x10 (Id=283)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_285// Size=0x10 (Id=285)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_284 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_283 Translated;// Offset=0x0 Size=0x10
    };
};
