union _unnamed_778// Size=0x4 (Id=778)
{
    unsigned long UserData;// Offset=0x0 Size=0x4
    unsigned long Next;// Offset=0x0 Size=0x4
};

struct _unnamed_779// Size=0x4 (Id=779)
{
    union _unnamed_778 u;// Offset=0x0 Size=0x4
};

union _unnamed_780// Size=0x4 (Id=780)
{
    struct _unnamed_779 NewCell;// Offset=0x0 Size=0x4
};

struct _HCELL// Size=0x8 (Id=781)
{
    long Size;// Offset=0x0 Size=0x4
    union _unnamed_780 u;// Offset=0x4 Size=0x4
};
