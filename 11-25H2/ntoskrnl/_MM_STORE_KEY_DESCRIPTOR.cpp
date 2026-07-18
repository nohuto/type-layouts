struct _unnamed_1707// Size=0x4 (Id=1707)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long KeyType:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Spare:10;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0xa
    };
};

union _MM_STORE_SUB_KEY_DESCRIPTOR// Size=0x8 (Id=1708)
{
    struct _unnamed_1707 Flags;// Offset=0x0 Size=0x4
    void * VirtualAddress;// Offset=0x0 Size=0x8
};

struct _MM_STORE_KEY_DESCRIPTOR// Size=0x10 (Id=1615)
{
    unsigned long long ContainerKey;// Offset=0x0 Size=0x8
    union _MM_STORE_SUB_KEY_DESCRIPTOR SubKey;// Offset=0x8 Size=0x8
};
