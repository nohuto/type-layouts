union _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR::<unnamed-type-u>// Size=0x8 (Id=1809)
{
    unsigned long CounterIndex;// Offset=0x0 Size=0x4
    unsigned long ExtendedRegisterAddress;// Offset=0x0 Size=0x4
    struct <unnamed-type-Range>// Size=0x8 (Id=11633)
    {
        unsigned long Begin;// Offset=0x0 Size=0x4
        unsigned long End;// Offset=0x4 Size=0x4
    };
    struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Range> Range;// Offset=0x0 Size=0x8
};
