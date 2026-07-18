struct _HEAP_DESCRIPTOR_KEY// Size=0x4 (Id=271)
{
    union // Size=0x4 (Id=0)
    {
        unsigned long Key;// Offset=0x0 Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long Ignore:8;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x8
            unsigned long EncodedCommittedPageCount:16;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x10
            unsigned long UnitCount:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
        };
    };
};
