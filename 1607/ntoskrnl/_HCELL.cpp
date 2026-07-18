union _unnamed_710// Size=0x4 (Id=710)
{
    unsigned long UserData;// Offset=0x0 Size=0x4
    unsigned long Next;// Offset=0x0 Size=0x4
};

struct _unnamed_711// Size=0x4 (Id=711)
{
    union _unnamed_710 u;// Offset=0x0 Size=0x4
};

union _unnamed_712// Size=0x4 (Id=712)
{
    struct _unnamed_711 NewCell;// Offset=0x0 Size=0x4
};

struct _HCELL// Size=0x8 (Id=713)
{
    long Size;// Offset=0x0 Size=0x4
    union _unnamed_712 u;// Offset=0x4 Size=0x4
};
