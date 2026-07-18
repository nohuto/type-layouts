struct _IO_FOEXT_SILO_PARAMETERS// Size=0x10 (Id=2871)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long HasHardReference:1;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long SpareFlags:31;// Offset=0x4 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
        unsigned long Flags;// Offset=0x4 Size=0x4
    };
    struct _EJOB * SiloContext;// Offset=0x8 Size=0x8
};
