union _KSWAPPABLE_PAGE_REF_COUNT// Size=0x8 (Id=2012)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Resident:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long RefCount:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

struct _MDL// Size=0x30 (Id=576)
{
    struct _MDL * Next;// Offset=0x0 Size=0x8
    short Size;// Offset=0x8 Size=0x2
    short MdlFlags;// Offset=0xa Size=0x2
    unsigned short AllocationProcessorNumber;// Offset=0xc Size=0x2
    unsigned short Reserved;// Offset=0xe Size=0x2
    struct _EPROCESS * Process;// Offset=0x10 Size=0x8
    void * MappedSystemVa;// Offset=0x18 Size=0x8
    void * StartVa;// Offset=0x20 Size=0x8
    unsigned long ByteCount;// Offset=0x28 Size=0x4
    unsigned long ByteOffset;// Offset=0x2c Size=0x4
};

struct _KSWAPPABLE_PAGE// Size=0x50 (Id=2013)
{
    void * RegionStart;// Offset=0x0 Size=0x8
    unsigned long long TransitionLock;// Offset=0x8 Size=0x8
    union _KSWAPPABLE_PAGE_REF_COUNT LockCount;// Offset=0x10 Size=0x8
    struct _MDL Mdl;// Offset=0x18 Size=0x30
    unsigned long long PageNumber;// Offset=0x48 Size=0x8
};
