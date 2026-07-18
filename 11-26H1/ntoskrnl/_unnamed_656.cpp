struct _MMPFNENTRY1// Size=0x1 (Id=1459)
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

struct _MMPFNENTRY3// Size=0x1 (Id=1507)
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

struct _unnamed_654// Size=0x2 (Id=654)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
};

struct _MI_PFN_FLAGS// Size=0x4 (Id=655)
{
    union // Size=0x4 (Id=0)
    {
        struct // Size=0x4 (Id=0)
        {
            unsigned long ReferenceCount:16;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x10
            unsigned long PageLocation:3;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x3
            unsigned long WriteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x13 BitSize=0x1
            unsigned long Modified:1;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x1
            unsigned long ReadInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x15 BitSize=0x1
            unsigned long CacheAttribute:2;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x2
            unsigned long Priority:3;// Offset=0x0 Size=0x4 BitOffset=0x18 BitSize=0x3
            unsigned long OnProtectedStandby:1;// Offset=0x0 Size=0x4 BitOffset=0x1b BitSize=0x1
            unsigned long InPageError:1;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x1
            unsigned long SystemChargedPage:1;// Offset=0x0 Size=0x4 BitOffset=0x1d BitSize=0x1
            unsigned long RemovalRequested:1;// Offset=0x0 Size=0x4 BitOffset=0x1e BitSize=0x1
            unsigned long ParityError:1;// Offset=0x0 Size=0x4 BitOffset=0x1f BitSize=0x1
        };
        unsigned long EntireField;// Offset=0x0 Size=0x4
    };
};

union _unnamed_656// Size=0x4 (Id=656)
{
    unsigned short ReferenceCount;// Offset=0x0 Size=0x2
    struct _MMPFNENTRY1 e1;// Offset=0x2 Size=0x1
    struct _MMPFNENTRY3 e3;// Offset=0x3 Size=0x1
    struct _unnamed_654 e2;// Offset=0x0 Size=0x2
    struct _MI_PFN_FLAGS e4;// Offset=0x0 Size=0x4
};
