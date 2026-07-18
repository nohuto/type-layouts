union _MM_STORE_KEY// Size=0x4 (Id=1581)
{
    unsigned long EntireKey;// Offset=0x0 Size=0x4
};

struct _unnamed_1793// Size=0x4 (Id=1793)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long KeyType:2;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x2
        unsigned long Spare:10;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0xa
    };
};

union _MM_STORE_SUB_KEY_DESCRIPTOR// Size=0x8 (Id=1794)
{
    struct _unnamed_1793 Flags;// Offset=0x0 Size=0x4
    void * VirtualAddress;// Offset=0x0 Size=0x8
};

struct _MM_STORE_KEY_DESCRIPTOR// Size=0x10 (Id=1694)
{
    unsigned long long ContainerKey;// Offset=0x0 Size=0x8
    union _MM_STORE_SUB_KEY_DESCRIPTOR SubKey;// Offset=0x8 Size=0x8
};

struct _MM_STORE_WRITE_PAGE_INFORMATION// Size=0x40 (Id=1542)
{
    long IssueStatus;// Offset=0x0 Size=0x4
    union _MM_STORE_KEY StoreKey;// Offset=0x4 Size=0x4
    struct _MM_STORE_KEY_DESCRIPTOR StoreKeyDescriptor;// Offset=0x8 Size=0x10
    unsigned long WritePageIndex;// Offset=0x18 Size=0x4
    void * OpaqueStoreContext;// Offset=0x20 Size=0x8
    struct _MDL * Mdl;// Offset=0x28 Size=0x8
    void * TransferContext;// Offset=0x30 Size=0x8
    struct _IO_STATUS_BLOCK * IoStatus;// Offset=0x38 Size=0x8
};
