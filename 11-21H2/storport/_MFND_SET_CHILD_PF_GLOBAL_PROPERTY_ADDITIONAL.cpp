struct _MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES// Size=0x200 (Id=663)
{
    unsigned short Version;// Offset=0x0 Size=0x2
    unsigned short SizeInBytes;// Offset=0x2 Size=0x2
    unsigned short Flags;// Offset=0x4 Size=0x2
    unsigned short NamespaceMetadataSize;// Offset=0x6 Size=0x2
    unsigned char NamespaceLBADataSize;// Offset=0x8 Size=0x1
    unsigned char NamespaceDPS;// Offset=0x9 Size=0x1
    unsigned char NamespaceNMIC;// Offset=0xa Size=0x1
    unsigned char Reserved[501];// Offset=0xb Size=0x1f5
};

struct _MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL// Size=0x210 (Id=438)
{
    unsigned long Version;// Offset=0x0 Size=0x4
    unsigned long Size;// Offset=0x4 Size=0x4
    unsigned long Flags;// Offset=0x8 Size=0x4
    unsigned long Reserved;// Offset=0xc Size=0x4
    struct _MFND_PHYSICAL_FUNCTION_GLOBAL_PROPERTIES Properties;// Offset=0x10 Size=0x200
};
