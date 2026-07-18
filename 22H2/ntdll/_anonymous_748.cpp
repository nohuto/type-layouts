struct _anonymous_747// Size=0x10 (Id=747)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_746// Size=0x10 (Id=746)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_748// Size=0x10 (Id=748)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_747 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_746 Translated;// Offset=0x0 Size=0x10
    };
};
