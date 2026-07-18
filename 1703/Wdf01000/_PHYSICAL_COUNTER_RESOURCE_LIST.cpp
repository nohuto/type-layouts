enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE
{
    ResourceTypeSingle=0,
    ResourceTypeRange=1,
    ResourceTypeExtendedCounterConfiguration=2,
    ResourceTypeOverflow=3,
    ResourceTypeMax=4
};

struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR// Size=0x10 (Id=2232)
{
    union // Size=0x8 (Id=0)
    {
        enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE Type;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        union <unnamed-type-u>// Size=0x8 (Id=13010)
        {
            unsigned long CounterIndex;// Offset=0x0 Size=0x4
            unsigned long ExtendedRegisterAddress;// Offset=0x0 Size=0x4
            struct <unnamed-type-Range>// Size=0x8 (Id=13013)
            {
                unsigned long Begin;// Offset=0x0 Size=0x4
                unsigned long End;// Offset=0x4 Size=0x4
            };
            struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Range> Range;// Offset=0x0 Size=0x8
        };
    };
    union _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR::<unnamed-type-u> u;// Offset=0x8 Size=0x8
};

struct _PHYSICAL_COUNTER_RESOURCE_LIST// Size=0x14 (Id=3454)
{
    unsigned long Count;// Offset=0x0 Size=0x4
    struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR Descriptors[1];// Offset=0x4 Size=0x10
};
