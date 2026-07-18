struct _HEAP_LFH_BLOCK_SLIST// Size=0x2 (Id=307)
{
    unsigned short Next;// Offset=0x0 Size=0x2
};

union _HEAP_LFH_BLOCK_LIST// Size=0x4 (Id=306)
{
    unsigned short Next;// Offset=0x0 Size=0x2
    unsigned short Count;// Offset=0x2 Size=0x2
    struct _HEAP_LFH_BLOCK_SLIST SList;// Offset=0x0 Size=0x2
    unsigned long ListFields;// Offset=0x0 Size=0x4
};
