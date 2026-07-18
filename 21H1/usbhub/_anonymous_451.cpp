struct _anonymous_450// Size=0x10 (Id=450)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_449// Size=0x10 (Id=449)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _anonymous_451// Size=0x10 (Id=451)
{
    union // Size=0x10 (Id=0)
    {
        struct _anonymous_450 Raw;// Offset=0x0 Size=0x10
        struct _anonymous_449 Translated;// Offset=0x0 Size=0x10
    };
};
