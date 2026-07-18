union NVME_CDW11_MFND_CHILD_CONTROLLER_PROPERTY_FEATURE// Size=0x4 (Id=421)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long NamespacePropertyFlag:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AsUlong;// Offset=0x0 Size=0x4
};
