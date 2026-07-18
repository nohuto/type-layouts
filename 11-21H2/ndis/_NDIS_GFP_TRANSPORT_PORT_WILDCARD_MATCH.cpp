enum _NDIS_GFP_WILDCARD_MATCH_TYPE
{
    NdisGfpWildcardMatchTypeUndefined=0,
    NdisGfpWildcardMatchTypeEqual=1,
    NdisGfpWildcardMatchTypeMaskEqual=2,
    NdisGfpWildcardMatchTypeInRange=3,
    NdisGfpWildcardMatchTypeMax=4
};

struct _NDIS_GFP_TRANSPORT_PORT_WILDCARD_MATCH// Size=0x8 (Id=1149)
{
    enum _NDIS_GFP_WILDCARD_MATCH_TYPE MatchType;// Offset=0x0 Size=0x4
    unsigned short Port;// Offset=0x4 Size=0x2
    unsigned short Range;// Offset=0x6 Size=0x2
};
