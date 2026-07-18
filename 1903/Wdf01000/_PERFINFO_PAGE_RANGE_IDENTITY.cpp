struct _PERFINFO_PAGE_RANGE_IDENTITY// Size=0x18 (Id=5152)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long UseDescription:4;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long UniqueKey:48;// Offset=0x0 Size=0x8 BitOffset=0x4 BitSize=0x30
        unsigned long long Reserved:12;// Offset=0x0 Size=0x8 BitOffset=0x34 BitSize=0xc
    };
    union // Size=0x10 (Id=0)
    {
        void * ProtoPteAddress;// Offset=0x8 Size=0x8
        unsigned long long PageFrameIndex;// Offset=0x8 Size=0x8
        void * VirtualAddress;// Offset=0x8 Size=0x8
    };
    unsigned long long PageCount;// Offset=0x10 Size=0x8
};
