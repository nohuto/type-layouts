struct _unnamed_313// Size=0x4 (Id=313)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NoActiveNamespaceFound:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

struct _unnamed_314// Size=0xc (Id=314)
{
    struct _unnamed_313 Flags;// Offset=0x0 Size=0x4
    unsigned long ZoneNamespaceCount;// Offset=0x4 Size=0x4
    unsigned long RegularNamespaceCount;// Offset=0x8 Size=0x4
};
