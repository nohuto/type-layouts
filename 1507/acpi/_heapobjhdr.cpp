struct _List// Size=0x10 (Id=319)
{
    struct _List * plistPrev;// Offset=0x0 Size=0x8
    struct _List * plistNext;// Offset=0x8 Size=0x8
};

struct _heapobjhdr// Size=0x20 (Id=393)
{
    unsigned long dwSig;// Offset=0x0 Size=0x4
    unsigned long dwLen;// Offset=0x4 Size=0x4
    struct _heap * pheap;// Offset=0x8 Size=0x8
    struct _List list;// Offset=0x10 Size=0x10
};
