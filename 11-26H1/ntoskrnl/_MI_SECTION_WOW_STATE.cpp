struct _RTL_BITMAP_EX// Size=0x10 (Id=1254)
{
    unsigned long long SizeOfBitMap;// Offset=0x0 Size=0x8
    unsigned long long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_DLL_OVERFLOW_AREA// Size=0x20 (Id=1851)
{
    void * RangeStart;// Offset=0x0 Size=0x8
    void * NextVa;// Offset=0x8 Size=0x8
    void * RangeStartAbove2gb;// Offset=0x10 Size=0x8
    void * NextVaAbove2gb;// Offset=0x18 Size=0x8
};

struct _MI_SECTION_WOW_STATE// Size=0x40 (Id=1923)
{
    struct _RTL_BITMAP_EX ImageBitMap;// Offset=0x0 Size=0x10
    struct _MI_DLL_OVERFLOW_AREA OverflowArea;// Offset=0x10 Size=0x20
    struct _SECTION * CfgBitMapSection;// Offset=0x30 Size=0x8
    struct _CONTROL_AREA * CfgBitMapControlArea;// Offset=0x38 Size=0x8
};
