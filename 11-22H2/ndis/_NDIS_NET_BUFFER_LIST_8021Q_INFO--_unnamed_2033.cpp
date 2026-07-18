union _NDIS_NET_BUFFER_LIST_8021Q_INFO::_unnamed_2033// Size=0x8 (Id=2033)
{
    struct <unnamed-type-TagHeader>// Size=0x4 (Id=9138)
    {
        unsigned int UserPriority:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned int CanonicalFormatId:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int VlanId:12;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0xc
        unsigned int Reserved:16;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x10
    };
    struct _NDIS_NET_BUFFER_LIST_8021Q_INFO::_unnamed_2034::<unnamed-type-TagHeader> TagHeader;// Offset=0x0 Size=0x4
    struct <unnamed-type-WLanTagHeader>// Size=0x4 (Id=9144)
    {
        unsigned int UserPriority:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned int CanonicalFormatId:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int VlanId:12;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0xc
        unsigned int WMMInfo:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned int Reserved:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
    struct _NDIS_NET_BUFFER_LIST_8021Q_INFO::_unnamed_2035::<unnamed-type-WLanTagHeader> WLanTagHeader;// Offset=0x0 Size=0x4
    void * Value;// Offset=0x0 Size=0x8
};
