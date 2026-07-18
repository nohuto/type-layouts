struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=227)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_SRIOV_VF_CONFIG_STATE// Size=0x10 (Id=1513)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned short VFId;// Offset=0x4 Size=0x2
    unsigned long BlockId;// Offset=0x8 Size=0x4
    unsigned long Length;// Offset=0xc Size=0x4
};
