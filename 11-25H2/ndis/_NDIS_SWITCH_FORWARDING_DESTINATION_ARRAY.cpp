struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_SWITCH_FORWARDING_DESTINATION_ARRAY// Size=0x18 (Id=828)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned int ElementSize;// Offset=0x4 Size=0x4
    unsigned int NumElements;// Offset=0x8 Size=0x4
    unsigned int NumDestinations;// Offset=0xc Size=0x4
    void * FirstElement;// Offset=0x10 Size=0x8
};
