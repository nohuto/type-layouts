union _MSOS20_FLAGS// Size=0x4 (Id=574)
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
    };
};
