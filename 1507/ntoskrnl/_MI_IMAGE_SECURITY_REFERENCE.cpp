struct _IMAGE_SECURITY_CONTEXT// Size=0x8 (Id=1020)
{
    union // Size=0x8 (Id=0)
    {
        void * PageHashes;// Offset=0x0 Size=0x8
        unsigned long long Value;// Offset=0x0 Size=0x8
        struct // Size=0x8 (Id=0)
        {
            unsigned long long SecurityBeingCreated:2;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x2
            unsigned long long SecurityMandatory:1;// Offset=0x0 Size=0x8 BitOffset=0x2 BitSize=0x1
            unsigned long long PageHashPointer:61;// Offset=0x0 Size=0x8 BitOffset=0x3 BitSize=0x3d
        };
    };
};

struct _MI_IMAGE_SECURITY_REFERENCE// Size=0x18 (Id=544)
{
    void * DynamicRelocations;// Offset=0x0 Size=0x8
    struct _IMAGE_SECURITY_CONTEXT SecurityContext;// Offset=0x8 Size=0x8
    unsigned long long StrongImageReference;// Offset=0x10 Size=0x8
};
