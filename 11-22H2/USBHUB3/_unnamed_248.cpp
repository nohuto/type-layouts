struct _unnamed_247// Size=0x10 (Id=247)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_246// Size=0x10 (Id=246)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_248// Size=0x10 (Id=248)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_247 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_246 Translated;// Offset=0x0 Size=0x10
    };
};
