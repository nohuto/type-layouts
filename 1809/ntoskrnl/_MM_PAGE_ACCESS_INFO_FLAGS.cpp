struct _unnamed_903// Size=0x4 (Id=903)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Image:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Spare0:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
    };
};

struct _unnamed_904// Size=0x4 (Id=904)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Spare1:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
    };
};

union _MM_PAGE_ACCESS_INFO_FLAGS// Size=0x4 (Id=905)
{
    struct _unnamed_903 File;// Offset=0x0 Size=0x4
    struct _unnamed_904 Private;// Offset=0x0 Size=0x4
};
