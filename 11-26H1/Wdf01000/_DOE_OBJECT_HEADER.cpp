union _DOE_HEADER_1// Size=0x8 (Id=3446)
{
    union // Size=0x8 (Id=0)
    {
        struct // Size=0x8 (Id=0)
        {
            unsigned short DataObjectVendorId:16;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x10
            unsigned char DataObjectType:8;// Offset=0x2 Size=0x1 BitOffset=0x0 BitSize=0x8
            unsigned long Reserved:8;// Offset=0x4 Size=0x4 BitOffset=0x0 BitSize=0x8
        };
        unsigned long AsULONG;// Offset=0x0 Size=0x4
    };
};

union _DOE_HEADER_2// Size=0x4 (Id=4122)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Length:18;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x12
        unsigned long Reserved:14;// Offset=0x0 Size=0x4 BitOffset=0x12 BitSize=0xe
    };
    unsigned long AsULONG;// Offset=0x0 Size=0x4
};

union _DOE_OBJECT_HEADER// Size=0x10 (Id=3992)
{
    union // Size=0xc (Id=0)
    {
        union _DOE_HEADER_1 header1;// Offset=0x0 Size=0x8
        union _DOE_HEADER_2 header2;// Offset=0x8 Size=0x4
        unsigned long long AsULONGLONG;// Offset=0x0 Size=0x8
    };
};
