struct _unnamed_776// Size=0x4 (Id=776)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Mask:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Polarity:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long MessageType:3;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x3
        unsigned long RequestEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long DestinationMode:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MessageType3:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long Destination:8;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x8
        unsigned long Vector:8;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x8
        unsigned long ExtendedAddress:8;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x8
    };
};

union _unnamed_777// Size=0x4 (Id=777)
{
    struct _unnamed_776 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _unnamed_778// Size=0x4 (Id=778)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedDestination:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long PassPW:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WaitingForEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_779// Size=0x4 (Id=779)
{
    struct _unnamed_778 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_HT_INTR_INFO// Size=0x8 (Id=780)
{
    union _unnamed_777 LowPart;// Offset=0x0 Size=0x4
    union _unnamed_779 HighPart;// Offset=0x4 Size=0x4
};
