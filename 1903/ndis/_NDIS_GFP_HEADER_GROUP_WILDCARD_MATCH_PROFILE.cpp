struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
    NdisGfpWildcardMatchTypeUndefined=0,
    NdisGfpWildcardMatchTypeEqual=1,
    NdisGfpWildcardMatchTypeMaskEqual=2,
    NdisGfpWildcardMatchTypeInRange=3,
    NdisGfpWildcardMatchTypeMax=4
};

struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE// Size=0x38 (Id=692)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long HeadersPresent;// Offset=0x8 Size=0x4
    unsigned long long MatchFields;// Offset=0x10 Size=0x8
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE SourceIPv4AddressMatchType;// Offset=0x18 Size=0x4
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE DestinationIPv4AddressMatchType;// Offset=0x1c Size=0x4
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE SourceIPv6AddressMatchType;// Offset=0x20 Size=0x4
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE DestinationIPv6AddressMatchType;// Offset=0x24 Size=0x4
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE SourcePortMatchType;// Offset=0x28 Size=0x4
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE DestinationPortMatchType;// Offset=0x2c Size=0x4
    unsigned char TcpFlags;// Offset=0x30 Size=0x1
};
