struct _EXHANDLE// Size=0x8 (Id=1590)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long TagBits:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long Index:30;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1e
        };
        void * GenericHandleOverlay;// Offset=0x0 Size=0x8
        unsigned long long Value;// Offset=0x0 Size=0x8
    };
};

union _HANDLE_TABLE_ENTRY// Size=0x10 (Id=1307)
{
    long long VolatileLowValue;// Offset=0x0 Size=0x8
    long long LowValue;// Offset=0x0 Size=0x8
    struct _HANDLE_TABLE_ENTRY_INFO * InfoTable;// Offset=0x0 Size=0x8
    long long HighValue;// Offset=0x8 Size=0x8
    union _HANDLE_TABLE_ENTRY * NextFreeHandleEntry;// Offset=0x8 Size=0x8
    struct _EXHANDLE LeafHandleValue;// Offset=0x8 Size=0x8
    long long RefCountField;// Offset=0x0 Size=0x8
    struct // Size=0xc (Id=0)
    {
        unsigned long long Unlocked:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long RefCnt:16;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x10
        unsigned long long Attributes:3;// Offset=0x0 Size=0x8 BitOffset=0x11 BitSize=0x3
        unsigned long long ObjectPointerBits:44;// Offset=0x0 Size=0x8 BitOffset=0x14 BitSize=0x2c
        unsigned long GrantedAccessBits:25;// Offset=0x8 Size=0x4 BitOffset=0x0 BitSize=0x19
        unsigned long NoRightsUpgrade:1;// Offset=0x8 Size=0x4 BitOffset=0x19 BitSize=0x1
        unsigned long Spare1:6;// Offset=0x8 Size=0x4 BitOffset=0x1a BitSize=0x6
    };
    unsigned long Spare2;// Offset=0xc Size=0x4
};
