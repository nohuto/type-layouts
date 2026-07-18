union _WD_LIVEREPORT_FLAGS// Size=0x1 (Id=156)
{
    struct <unnamed-type-AsBits>// Size=0x1 (Id=5812)
    {
        unsigned char Kernel:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char IncludeUserPages:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char MiniFallback:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char AbortIfMemoryPressure:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Reserved:4;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x4
    };
    struct _WD_LIVEREPORT_FLAGS::<unnamed-type-AsBits> AsBits;// Offset=0x0 Size=0x1
    unsigned char AsByte;// Offset=0x0 Size=0x1
};
