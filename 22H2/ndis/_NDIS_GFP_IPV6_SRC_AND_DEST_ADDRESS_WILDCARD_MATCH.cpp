enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
    NdisGfpWildcardMatchTypeUndefined=0,
    NdisGfpWildcardMatchTypeEqual=1,
    NdisGfpWildcardMatchTypeMaskEqual=2,
    NdisGfpWildcardMatchTypeInRange=3,
    NdisGfpWildcardMatchTypeMax=4
};

struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH// Size=0x18 (Id=1663)
{
    union // Size=0x14 (Id=0)
    {
        enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
        struct in6_addr IPAddress;// Offset=0x4 Size=0x10
        union <unnamed-type-MatchValue>// Size=0x4 (Id=6478)
        {
            unsigned long PrefixLength;// Offset=0x0 Size=0x4
            unsigned long RangeSize;// Offset=0x0 Size=0x4
        };
        union _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH::<unnamed-type-MatchValue> MatchValue;// Offset=0x14 Size=0x4
    };
};

struct _NDIS_GFP_IPV6_SRC_AND_DEST_ADDRESS_WILDCARD_MATCH// Size=0x30 (Id=1461)
{
    struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH SourceIPv6Address;// Offset=0x0 Size=0x18
    struct _NDIS_GFP_IPV6_ADDRESS_WILDCARD_MATCH DestinationIPv6Address;// Offset=0x18 Size=0x18
};
