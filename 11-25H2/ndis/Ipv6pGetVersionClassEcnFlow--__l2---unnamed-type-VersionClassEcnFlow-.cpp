union Ipv6pGetVersionClassEcnFlow::__l2::<unnamed-type-VersionClassEcnFlow>// Size=0x4 (Id=200)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned int Flow:20;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x14
        unsigned int EcnField:2;// Offset=0x0 Size=0x4 BitOffset=0x14 BitSize=0x2
        unsigned int Class:6;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x6
        unsigned int Version:4;// Offset=0x0 Size=0x4 BitOffset=0x1c BitSize=0x4
    };
    unsigned int Value;// Offset=0x0 Size=0x4
};
