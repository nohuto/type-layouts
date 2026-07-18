union _MSOS20_FLAGS// Size=0x4 (Id=340)
{
    unsigned long AsUlong32;// Offset=0x0 Size=0x4
    struct // Size=0x4 (Id=0)
    {
        unsigned long DescriptorSetInfo:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DescriptorSetHeader:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long AlternateEnumeration:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ConfigurationSubset:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long FunctionSubset:1;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x1
        unsigned long CompatibleId:1;// Offset=0x0 Size=0x4 BitOffset=0x5 BitSize=0x1
        unsigned long RegistryProperty:1;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1
        unsigned long MinResumeTime:1;// Offset=0x0 Size=0x4 BitOffset=0x7 BitSize=0x1
        unsigned long ModelId:1;// Offset=0x0 Size=0x4 BitOffset=0x8 BitSize=0x1
        unsigned long CcgpDevice:1;// Offset=0x0 Size=0x4 BitOffset=0x9 BitSize=0x1
        unsigned long VendorRevision:1;// Offset=0x0 Size=0x4 BitOffset=0xa BitSize=0x1
    };
};

struct _MSOS20_INFO// Size=0x40 (Id=306)
{
    union _MSOS20_FLAGS Flags;// Offset=0x0 Size=0x4
    unsigned short BytesReturned;// Offset=0x4 Size=0x2
    unsigned char * EndOfDescriptorSet;// Offset=0x8 Size=0x8
    struct _MSOS20_DESCRIPTOR_SET_HEADER * DescriptorSet;// Offset=0x10 Size=0x8
    struct _MSOS20_FEATURE_COMPATIBLE_ID_DESCRIPTOR * CompatibleIdDescriptor;// Offset=0x18 Size=0x8
    struct _MSOS20_FEATURE_MINIMUM_RESUME_TIME_DESCRIPTOR * MinResumeTimeDescriptor;// Offset=0x20 Size=0x8
    struct _MSOS20_FEATURE_MODEL_ID_DESCRIPTOR * ModelIdDescriptor;// Offset=0x28 Size=0x8
    struct _MSOS20_FEATURE_CCGP_DEVICE_DESCRIPTOR * CcgpDeviceDescriptor;// Offset=0x30 Size=0x8
    struct _MSOS20_FEATURE_VENDOR_REVISION_DESCRIPTOR * VendorRevisionDescriptor;// Offset=0x38 Size=0x8
};
