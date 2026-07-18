struct _unnamed_563// Size=0x10 (Id=563)
{
    unsigned short Group;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_562// Size=0x10 (Id=562)
{
    unsigned short Level;// Offset=0x0 Size=0x2
    unsigned short Group;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_564// Size=0x10 (Id=564)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_563 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_562 Translated;// Offset=0x0 Size=0x10
    };
};
