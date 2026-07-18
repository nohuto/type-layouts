enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
    NdisGfpWildcardMatchTypeUndefined=0,
    NdisGfpWildcardMatchTypeEqual=1,
    NdisGfpWildcardMatchTypeMaskEqual=2,
    NdisGfpWildcardMatchTypeInRange=3,
    NdisGfpWildcardMatchTypeMax=4
};

struct _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH// Size=0xc (Id=1680)
{
    union // Size=0x8 (Id=0)
    {
        enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
        struct in_addr IPAddress;// Offset=0x4 Size=0x4
        union <unnamed-type-MatchValue>// Size=0x4 (Id=6653)
        {
            unsigned long PrefixLength;// Offset=0x0 Size=0x4
            unsigned long RangeSize;// Offset=0x0 Size=0x4
        };
        union _NDIS_GFP_IPV4_ADDRESS_WILDCARD_MATCH::<unnamed-type-MatchValue> MatchValue;// Offset=0x8 Size=0x4
    };
};
