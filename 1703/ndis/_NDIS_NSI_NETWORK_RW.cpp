struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _IF_COUNTED_STRING_LH// Size=0x204 (Id=1010)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    wchar_t String[257];// Offset=0x2 Size=0x202
};

struct _NDIS_NSI_NETWORK_RW// Size=0x210 (Id=1569)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned int CompartmentId;// Offset=0x4 Size=0x4
    unsigned long SiteId;// Offset=0x8 Size=0x4
    struct _IF_COUNTED_STRING_LH NetworkName;// Offset=0xc Size=0x204
};
