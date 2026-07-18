struct _EISA_MEMORY_TYPE// Size=0x1 (Id=3047)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReadWrite:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Cached:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Reserved0:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Type:2;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x2
        unsigned char Shared:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char Reserved1:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char MoreEntries:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};
