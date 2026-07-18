struct _RTL_RB_TREE// Size=0x10 (Id=118)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

struct _HVP_VIEW_MAP// Size=0x38 (Id=1176)
{
    void * SectionReference;// Offset=0x0 Size=0x8
    long long StorageEndFileOffset;// Offset=0x8 Size=0x8
    long long SectionEndFileOffset;// Offset=0x10 Size=0x8
    struct _CMSI_PROCESS_TUPLE * ProcessTuple;// Offset=0x18 Size=0x8
    unsigned long Flags;// Offset=0x20 Size=0x4
    struct _RTL_RB_TREE ViewTree;// Offset=0x28 Size=0x10
};
