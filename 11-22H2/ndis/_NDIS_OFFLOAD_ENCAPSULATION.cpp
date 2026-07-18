struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_OFFLOAD_ENCAPSULATION// Size=0x1c (Id=1605)
{
    union // Size=0x10 (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        struct <unnamed-type-IPv4>// Size=0xc (Id=9373)
        {
            unsigned long Enabled;// Offset=0x0 Size=0x4
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
        struct _NDIS_OFFLOAD_ENCAPSULATION::<unnamed-type-IPv4> IPv4;// Offset=0x4 Size=0xc
        struct <unnamed-type-IPv6>// Size=0xc (Id=9378)
        {
            unsigned long Enabled;// Offset=0x0 Size=0x4
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
        struct _NDIS_OFFLOAD_ENCAPSULATION::<unnamed-type-IPv6> IPv6;// Offset=0x10 Size=0xc
    };
};
