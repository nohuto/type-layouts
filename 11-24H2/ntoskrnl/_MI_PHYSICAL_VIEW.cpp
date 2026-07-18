struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

union _unnamed_2097// Size=0x8 (Id=2097)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ViewPageSize:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
    };
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
};

struct _RTL_BITMAP_EX// Size=0x10 (Id=1202)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_PHYSICAL_VIEW// Size=0x48 (Id=2098)
{
    struct _RTL_BALANCED_NODE PhysicalNode;// Offset=0x0 Size=0x18
    struct _MMVAD_SHORT * Vad;// Offset=0x18 Size=0x8
    struct _AWEINFO * AweInfo;// Offset=0x20 Size=0x8
    union _unnamed_2097 u1;// Offset=0x28 Size=0x8
    struct _RTL_BITMAP_EX BitMap;// Offset=0x30 Size=0x10
    unsigned char AgeStamp;// Offset=0x40 Size=0x1
};
