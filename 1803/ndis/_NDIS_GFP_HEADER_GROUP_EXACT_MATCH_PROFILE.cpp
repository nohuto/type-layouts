struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=334)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFP_HEADER_GROUP_EXACT_MATCH_PROFILE// Size=0x18 (Id=536)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long HeadersPresent;// Offset=0x8 Size=0x4
    unsigned long long MatchFields;// Offset=0x10 Size=0x8
};
