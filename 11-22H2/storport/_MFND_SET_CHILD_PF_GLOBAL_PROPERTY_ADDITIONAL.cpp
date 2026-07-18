union _unnamed_453// Size=0x1 (Id=453)
{
    struct // Size=0x1 (Id=0)
    {
        unsigned char IndexValue:7;// Offset=0x0 Size=0x1 BitOffset=0x0 BitSize=0x7
        unsigned char IndexValid:1;// Offset=0x0 Size=0x1 BitOffset=0x7 BitSize=0x1
    };
    unsigned char AsUCHAR;// Offset=0x0 Size=0x1
};

struct _MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES// Size=0x10 (Id=454)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short Size;// Offset=0x2 Size=0x2
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short NamespaceMetadataSize;// Offset=0x6 Size=0x2
    unsigned char NamespaceLBADataSize;// Offset=0x8 Size=0x1
    unsigned char NamespaceDPS;// Offset=0x9 Size=0x1
    unsigned char NamespaceNMIC;// Offset=0xa Size=0x1
    union _unnamed_453 LBAFormatIndex;// Offset=0xb Size=0x1
    unsigned char Reserved[4];// Offset=0xc Size=0x4
};

struct _MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL// Size=0x20 (Id=464)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned char Reserved0[2];// Offset=0x2 Size=0x2
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long Reserved1;// Offset=0xc Size=0x4
    struct _MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES Properties;// Offset=0x10 Size=0x10
};
