struct MSIX_TABLE_POINTER// Size=0x4 (Id=961)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long BaseIndexRegister:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
            unsigned long Reserved:29;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1d
        };
        unsigned long TableOffset;// Offset=0x0 Size=0x4
    };
};
