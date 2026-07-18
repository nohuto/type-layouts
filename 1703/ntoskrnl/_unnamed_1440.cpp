struct _unnamed_1512// Size=0x4 (Id=1512)
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

union _unnamed_1513// Size=0x4 (Id=1513)
{
    struct _unnamed_1512 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _unnamed_1514// Size=0x4 (Id=1514)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long ExtendedDestination:24;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x18
        unsigned long Reserved:6;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x6
        unsigned long PassPW:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
        unsigned long WaitingForEOI:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
    };
};

union _unnamed_1515// Size=0x4 (Id=1515)
{
    struct _unnamed_1514 bits;// Offset=0x0 Size=0x4
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

struct _INTERRUPT_HT_INTR_INFO// Size=0x8 (Id=1516)
{
    union _unnamed_1513 LowPart;// Offset=0x0 Size=0x4
    union _unnamed_1515 HighPart;// Offset=0x4 Size=0x4
};

struct _unnamed_1440// Size=0x8 (Id=1440)
{
    struct _INTERRUPT_HT_INTR_INFO IntrInfo;// Offset=0x0 Size=0x8
};
