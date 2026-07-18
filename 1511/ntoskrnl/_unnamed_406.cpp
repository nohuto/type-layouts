struct _unnamed_405// Size=0x1 (Id=405)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char ReferenceCache:1;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x1
        unsigned char Lookaside:1;// Offset=0x0 Size=0x1 BitOffset=0x1 BitSize=0x1
        unsigned char Initializing:1;// Offset=0x0 Size=0x1 BitOffset=0x2 BitSize=0x1
        unsigned char Deleted:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
    };
};

union _unnamed_406// Size=0x1 (Id=406)
{
    struct _unnamed_405 s1;// Offset=0x0 Size=0x1
    unsigned char Flags;// Offset=0x0 Size=0x1
};
