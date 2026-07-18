struct _unnamed_249// Size=0x10 (Id=249)
{
    unsigned short Reserved;// Offset=0x0 Size=0x2
    unsigned short MessageCount;// Offset=0x2 Size=0x2
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_248// Size=0x10 (Id=248)
{
    unsigned long Level;// Offset=0x0 Size=0x4
    unsigned long Vector;// Offset=0x4 Size=0x4
    unsigned long long Affinity;// Offset=0x8 Size=0x8
};

struct _unnamed_250// Size=0x10 (Id=250)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_249 Raw;// Offset=0x0 Size=0x10
        struct _unnamed_248 Translated;// Offset=0x0 Size=0x10
    };
};
