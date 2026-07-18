struct _anonymous_1196// Size=0x4 (Id=1196)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Image:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Spare0:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
    };
};

struct _anonymous_1197// Size=0x4 (Id=1197)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Spare1:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
    };
};

union _MM_PAGE_ACCESS_INFO_FLAGS// Size=0x4 (Id=1198)
{
    struct _anonymous_1196 File;// Offset=0x0 Size=0x4
    struct _anonymous_1197 Private;// Offset=0x0 Size=0x4
};

struct _MM_PAGE_ACCESS_INFO// Size=0x8 (Id=1191)
{
    union // Size=0x8 (Id=0)
    {
        union _MM_PAGE_ACCESS_INFO_FLAGS Flags;// Offset=0x0 Size=0x4
        unsigned long long FileOffset;// Offset=0x0 Size=0x8
        void * VirtualAddress;// Offset=0x0 Size=0x8
        void * PointerProtoPte;// Offset=0x0 Size=0x8
    };
};
