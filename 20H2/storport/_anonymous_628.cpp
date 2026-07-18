struct _anonymous_627// Size=0x10 (Id=627)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_626// Size=0x10 (Id=626)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_628// Size=0x10 (Id=628)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_627 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_626 Translated;// Offset=0x0 Size=0x10
    };
};
