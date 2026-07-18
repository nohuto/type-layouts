union _anonymous_1123// Size=0x4 (Id=1123)
{
    unsigned long UserData;// Offset=0x0 Size=0x4
    unsigned long Next;// Offset=0x0 Size=0x4
};

struct _anonymous_1124// Size=0x4 (Id=1124)
{
    union _anonymous_1123 u;// Offset=0x0 Size=0x4
};

union _anonymous_1125// Size=0x4 (Id=1125)
{
    struct _anonymous_1124 NewCell;// Offset=0x0 Size=0x4
};

struct _HCELL// Size=0x8 (Id=1126)
{
    long Size;// Offset=0x0 Size=0x4
    union _anonymous_1125 u;// Offset=0x4 Size=0x4
};
