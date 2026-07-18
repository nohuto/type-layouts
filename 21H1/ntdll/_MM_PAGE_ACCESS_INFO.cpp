struct _anonymous_405// Size=0x4 (Id=405)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Image:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Spare0:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
    };
};

struct _anonymous_406// Size=0x4 (Id=406)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Spare1:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
    };
};

union _MM_PAGE_ACCESS_INFO_FLAGS// Size=0x4 (Id=407)
{
    struct _anonymous_405 File;// Offset=0x0 Size=0x4
    struct _anonymous_406 Private;// Offset=0x0 Size=0x4
};

struct _MM_PAGE_ACCESS_INFO// Size=0x8 (Id=401)
{
    union // Size=0x8 (Id=0)
    {
        union _MM_PAGE_ACCESS_INFO_FLAGS Flags;// Offset=0x0 Size=0x4
        unsigned long long FileOffset;// Offset=0x0 Size=0x8
        void * VirtualAddress;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long DontUse0:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
            unsigned long Spare0:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        void * PointerProtoPte;// Offset=0x4 Size=0x4
    };
};
