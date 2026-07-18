struct _unnamed_1004// Size=0x1 (Id=1004)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReferenceCache:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Lookaside:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Initializing:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Deleted:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
};

union _unnamed_1005// Size=0x1 (Id=1005)
{
    struct _unnamed_1004 s1;// Offset=0x0 Size=0x1
    unsigned char Flags;// Offset=0x0 Size=0x1
};
