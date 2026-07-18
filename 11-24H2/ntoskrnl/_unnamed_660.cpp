struct _MMPFNENTRY1// Size=0x1 (Id=1397)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char PageLocation:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char WriteInProgress:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char Modified:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char ReadInProgress:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char CacheAttribute:2;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x2
    };
};

struct _MMPFNENTRY3// Size=0x1 (Id=1444)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char Priority:3;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x3
        unsigned char OnProtectedStandby:1;// Offset=0x0 Size=0x1 BitOffset=0x3 BitSize=0x1
        unsigned char InPageError:1;// Offset=0x0 Size=0x1 BitOffset=0x4 BitSize=0x1
        unsigned char SystemChargedPage:1;// Offset=0x0 Size=0x1 BitOffset=0x5 BitSize=0x1
        unsigned char RemovalRequested:1;// Offset=0x0 Size=0x1 BitOffset=0x6 BitSize=0x1
        unsigned char ParityError:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
};

struct _unnamed_658// Size=0x2 (Id=658)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
};

struct _MI_PFN_FLAGS// Size=0x4 (Id=659)
{
    union // Size=0x4 (Id=0)
    {
        unsigned short ReferenceCount;// Offset=0x0 Size=0x2
        struct // Size=0x2 (Id=0)
        {
            unsigned char PageLocation:3;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char WriteInProgress:1;// Offset=0x2 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char Modified:1;// Offset=0x2 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char ReadInProgress:1;// Offset=0x2 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char CacheAttribute:2;// Offset=0x2 Size=0x1 BitOffset=0x6 BitSize=0x2
            unsigned char Priority:3;// Offset=0x3 Size=0x1 BitOffset=0x0 BitSize=0x3
            unsigned char OnProtectedStandby:1;// Offset=0x3 Size=0x1 BitOffset=0x3 BitSize=0x1
            unsigned char InPageError:1;// Offset=0x3 Size=0x1 BitOffset=0x4 BitSize=0x1
            unsigned char SystemChargedPage:1;// Offset=0x3 Size=0x1 BitOffset=0x5 BitSize=0x1
            unsigned char RemovalRequested:1;// Offset=0x3 Size=0x1 BitOffset=0x6 BitSize=0x1
            unsigned char ParityError:1;// Offset=0x3 Size=0x1 BitOffset=0x7 BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

union _unnamed_660// Size=0x4 (Id=660)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
    struct _MMPFNENTRY1 e1;// Offset=0x2 Size=0x1
    struct _MMPFNENTRY3 e3;// Offset=0x3 Size=0x1
    struct _unnamed_658 e2;// Offset=0x0 Size=0x2
    struct _MI_PFN_FLAGS e4;// Offset=0x0 Size=0x4
};
