struct _MI_PFN_FLAGS// Size=0x4 (Id=679)
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
