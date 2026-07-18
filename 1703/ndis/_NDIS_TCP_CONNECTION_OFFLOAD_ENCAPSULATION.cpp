struct _NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION// Size=0x18 (Id=952)
{
    union // Size=0xc (Id=0)
    {
        struct <unnamed-type-V4>// Size=0xc (Id=10279)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
        struct _NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION::<unnamed-type-V4> V4;// Offset=0x0 Size=0xc
        struct <unnamed-type-V6>// Size=0xc (Id=10284)
        {
            unsigned char Enabled;// Offset=0x0 Size=0x1
            unsigned long EncapsulationType;// Offset=0x4 Size=0x4
            unsigned long HeaderSize;// Offset=0x8 Size=0x4
        };
    };
    struct _NDIS_TCP_CONNECTION_OFFLOAD_ENCAPSULATION::<unnamed-type-V6> V6;// Offset=0xc Size=0xc
};
