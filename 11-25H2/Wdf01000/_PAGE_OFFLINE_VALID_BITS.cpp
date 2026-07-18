union _PAGE_OFFLINE_VALID_BITS// Size=0x1 (Id=2622)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PhysicalAddress:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char MemDefect:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved:6;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x6
    };
    unsigned char AsUINT8;// Offset=0x0 Size=0x1
};
