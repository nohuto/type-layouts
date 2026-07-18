union _MI_FILE_ONLY_FIXUP_EXTENT// Size=0x8 (Id=1782)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long Purged:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Spare:2;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x2
    };
    struct _MMPFN * Pfn;// Offset=0x0 Size=0x8
    struct _MMPTE * ProtoPte;// Offset=0x0 Size=0x8
    void * EntirePointer;// Offset=0x0 Size=0x8
};
