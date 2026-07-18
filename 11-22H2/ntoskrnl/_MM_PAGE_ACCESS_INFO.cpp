struct _unnamed_1337// Size=0x4 (Id=1337)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Image:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
        unsigned long Spare0:1;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0x1
    };
};

struct _unnamed_1338// Size=0x4 (Id=1338)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long FilePointerIndex:9;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x9
        unsigned long HardFault:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long Spare1:2;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x2
    };
};

union _MM_PAGE_ACCESS_INFO_FLAGS// Size=0x4 (Id=1339)
{
    struct _unnamed_1337 File;// Offset=0x0 Size=0x4
    struct _unnamed_1338 Private;// Offset=0x0 Size=0x4
};

struct _MM_PAGE_ACCESS_INFO// Size=0x8 (Id=1332)
{
    union // Size=0x8 (Id=0)
    {
        union _MM_PAGE_ACCESS_INFO_FLAGS Flags;// Offset=0x0 Size=0x4
        unsigned long long FileOffset;// Offset=0x0 Size=0x8
        void * VirtualAddress;// Offset=0x0 Size=0x8
        void * PointerProtoPte;// Offset=0x0 Size=0x8
    };
};
