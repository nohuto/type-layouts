struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_NIC_SWITCH_INFO_ARRAY// Size=0x10 (Id=1574)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long FirstElementOffset;// Offset=0x4 Size=0x4
    unsigned long NumElements;// Offset=0x8 Size=0x4
    unsigned long ElementSize;// Offset=0xc Size=0x4
};
