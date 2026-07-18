struct _unnamed_149// Size=0x10 (Id=149)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:9;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x9
        unsigned long long NextEntry:39;// Offset=0x0 Size=0x8 BitOffset=0x19 BitSize=0x27
        unsigned long long HeaderType:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Init:1;// Offset=0x8 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:59;// Offset=0x8 Size=0x8 BitOffset=0x2 BitSize=0x3b
        unsigned long long Region:3;// Offset=0x8 Size=0x8 BitOffset=0x3d BitSize=0x3
    };
};

struct _unnamed_150// Size=0x10 (Id=150)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long HeaderType:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Init:1;// Offset=0x8 Size=0x8 BitOffset=0x1 BitSize=0x1
        unsigned long long Reserved:2;// Offset=0x8 Size=0x8 BitOffset=0x2 BitSize=0x2
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

struct _unnamed_151// Size=0x10 (Id=151)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long HeaderType:1;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:3;// Offset=0x8 Size=0x8 BitOffset=0x1 BitSize=0x3
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _STOR_SLIST_HEADER// Size=0x10 (Id=152)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_149 Header8;// Offset=0x0 Size=0x10
    struct _unnamed_150 Header16;// Offset=0x0 Size=0x10
    struct _unnamed_151 HeaderX64;// Offset=0x0 Size=0x10
};
