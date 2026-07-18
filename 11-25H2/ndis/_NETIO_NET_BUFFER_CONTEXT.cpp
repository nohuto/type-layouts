struct _NETIO_NET_BUFFER_CONTEXT// Size=0x20 (Id=210)
{
    unsigned long OriginalDataOffset;// Offset=0x0 Size=0x4
    unsigned long OriginalDataLength;// Offset=0x4 Size=0x4
    unsigned long TruncatedLength;// Offset=0x8 Size=0x4
    union // Size=0x4 (Id=0)
    {
        unsigned long Flags;// Offset=0xc Size=0x4
        struct // Size=0x4 (Id=0)
        {
            unsigned long EcnField:2;// Offset=0xc Size=0x4 BitOffset=0x0 BitSize=0x2
            unsigned long EcnForceNotEct:1;// Offset=0xc Size=0x4 BitOffset=0x2 BitSize=0x1
            unsigned long NdPriority:1;// Offset=0xc Size=0x4 BitOffset=0x3 BitSize=0x1
            unsigned long IpsnpiForwardInjection:1;// Offset=0xc Size=0x4 BitOffset=0x4 BitSize=0x1
            unsigned long IpsnpiForwardInjectionCopy:1;// Offset=0xc Size=0x4 BitOffset=0x5 BitSize=0x1
            unsigned long SecondMdlAllocatedByTransport:1;// Offset=0xc Size=0x4 BitOffset=0x6 BitSize=0x1
            unsigned long LastMdlAllocatedForEspTrailer:1;// Offset=0xc Size=0x4 BitOffset=0x7 BitSize=0x1
            unsigned long ReachedTCP:1;// Offset=0xc Size=0x4 BitOffset=0x8 BitSize=0x1
            unsigned long FlsnpiMdlAllocated:1;// Offset=0xc Size=0x4 BitOffset=0x9 BitSize=0x1
            unsigned long TransportHdrSize:6;// Offset=0xc Size=0x4 BitOffset=0xa BitSize=0x6
        };
    };
    void * Scratch[2];// Offset=0x10 Size=0x10
};
