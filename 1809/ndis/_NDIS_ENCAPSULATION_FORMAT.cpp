enum _NDIS_ENCAPSULATION
{
    UNSPECIFIED_Encapsulation=0,
    NULL_Encapsulation=1,
    IEEE_802_3_Encapsulation=2,
    IEEE_802_5_Encapsulation=3,
    LLC_SNAP_ROUTED_Encapsulation=4,
    LLC_SNAP_BRIDGED_Encapsulation=5
};

struct _NDIS_ENCAPSULATION_FORMAT// Size=0xc (Id=996)
{
    union // Size=0x4 (Id=0)
    {
        enum _NDIS_ENCAPSULATION Encapsulation;// Offset=0x0 Size=0x4
        struct <unnamed-type-Flags>// Size=0x4 (Id=6221)
        {
            unsigned long FixedHeaderSize:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
            unsigned long Reserved:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
        };
    };
    struct _NDIS_ENCAPSULATION_FORMAT::<unnamed-type-Flags> Flags;// Offset=0x4 Size=0x4
    unsigned long EncapsulationHeaderSize;// Offset=0x8 Size=0x4
};
