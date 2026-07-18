struct _SUPPORTED_RANGE// Size=0x28 (Id=1760)
{
    struct _SUPPORTED_RANGE * Next;// Offset=0x0 Size=0x8
    unsigned long SystemAddressSpace;// Offset=0x8 Size=0x4
    long long SystemBase;// Offset=0x10 Size=0x8
    long long Base;// Offset=0x18 Size=0x8
    long long Limit;// Offset=0x20 Size=0x8
};

struct _SUPPORTED_RANGES// Size=0xc0 (Id=1598)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Sorted;// Offset=0x2 Size=0x1
    unsigned char Reserved;// Offset=0x3 Size=0x1
    unsigned long NoIO;// Offset=0x4 Size=0x4
    struct _SUPPORTED_RANGE IO;// Offset=0x8 Size=0x28
    unsigned long NoMemory;// Offset=0x30 Size=0x4
    struct _SUPPORTED_RANGE Memory;// Offset=0x38 Size=0x28
    unsigned long NoPrefetchMemory;// Offset=0x60 Size=0x4
    struct _SUPPORTED_RANGE PrefetchMemory;// Offset=0x68 Size=0x28
    unsigned long NoDma;// Offset=0x90 Size=0x4
    struct _SUPPORTED_RANGE Dma;// Offset=0x98 Size=0x28
};
