struct _PERFINFO_PAGECOMBINE_ITERATION_STAT// Size=0xc (Id=2521)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long StatType:6;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x6
        unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long PagesScanned;// Offset=0x4 Size=0x4
    unsigned long PagesCombined;// Offset=0x8 Size=0x4
};
