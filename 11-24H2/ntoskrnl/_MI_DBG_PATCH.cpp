union _unnamed_2131// Size=0x8 (Id=2131)
{
    struct _CONTROL_AREA * ControlArea;// Offset=0x0 Size=0x8
};

struct _unnamed_2132// Size=0x4 (Id=2132)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Pending:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long Offset:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
    };
};

union _unnamed_2133// Size=0x4 (Id=2133)
{
    unsigned long EntireField;// Offset=0x0 Size=0x4
    struct _unnamed_2132 e2;// Offset=0x0 Size=0x4
};

struct _MI_DBG_PATCH// Size=0x18 (Id=2134)
{
    union _unnamed_2131 u1;// Offset=0x0 Size=0x8
    union _unnamed_2133 u2;// Offset=0x8 Size=0x4
    unsigned long OriginalBytes;// Offset=0xc Size=0x4
    unsigned long NewBytes;// Offset=0x10 Size=0x4
    unsigned long Padding;// Offset=0x14 Size=0x4
};
