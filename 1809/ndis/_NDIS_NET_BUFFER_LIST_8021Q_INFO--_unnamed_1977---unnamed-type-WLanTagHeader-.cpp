struct _NDIS_NET_BUFFER_LIST_8021Q_INFO::_unnamed_1977::<unnamed-type-WLanTagHeader>// Size=0x4 (Id=1977)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int UserPriority:3;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x3
        unsigned int CanonicalFormatId:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned int VlanId:12;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0xc
        unsigned int WMMInfo:4;// Offset=0x0 Size=0x4 BitOffset=0x10 BitSize=0x4
        unsigned int Reserved:12;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0xc
    };
};
