struct _unnamed_882// Size=0x1 (Id=882)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReferenceCache:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Lookaside:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Initializing:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Deleted:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
};

union _unnamed_883// Size=0x1 (Id=883)
{
    struct _unnamed_882 s1;// Offset=0x0 Size=0x1
    unsigned char Flags;// Offset=0x0 Size=0x1
};
