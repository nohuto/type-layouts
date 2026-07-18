struct _anonymous_547// Size=0x4 (Id=547)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Internal:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Secure:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
    };
};

union _anonymous_548// Size=0x4 (Id=548)
{
    struct _anonymous_547 s1;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=23)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _KALPC_SECTION// Size=0x48 (Id=549)
{
    void * SectionObject;// Offset=0x0 Size=0x8
    unsigned long long Size;// Offset=0x8 Size=0x8
    struct _ALPC_HANDLE_TABLE * HandleTable;// Offset=0x10 Size=0x8
    void * SectionHandle;// Offset=0x18 Size=0x8
    struct _EPROCESS * OwnerProcess;// Offset=0x20 Size=0x8
    struct _ALPC_PORT * OwnerPort;// Offset=0x28 Size=0x8
    union _anonymous_548 u1;// Offset=0x30 Size=0x4
    unsigned long NumberOfRegions;// Offset=0x34 Size=0x4
    struct _LIST_ENTRY RegionListHead;// Offset=0x38 Size=0x10
};
