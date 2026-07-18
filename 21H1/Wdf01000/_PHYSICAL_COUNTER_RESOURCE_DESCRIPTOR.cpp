enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE
{
    ResourceTypeSingle=0,
    ResourceTypeRange=1,
    ResourceTypeExtendedCounterConfiguration=2,
    ResourceTypeOverflow=3,
    ResourceTypeEventBuffer=4,
    ResourceTypeMax=5
};

struct _PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION// Size=0x10 (Id=2385)
{
    void  ( * OverflowHandler)(void * ,unsigned long long ,unsigned long long ,void * );// Offset=0x0 Size=0x8
    unsigned long CustomEventBufferEntrySize;// Offset=0x8 Size=0x4
    unsigned long EventThreshold;// Offset=0xc Size=0x4
};

struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR// Size=0x18 (Id=2082)
{
    union // Size=0x8 (Id=0)
    {
        enum _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR_TYPE Type;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        union <unnamed-type-u>// Size=0x10 (Id=12877)
        {
            unsigned long CounterIndex;// Offset=0x0 Size=0x4
            struct <unnamed-type-Range>// Size=0x8 (Id=12879)
            {
                unsigned long Begin;// Offset=0x0 Size=0x4
                unsigned long End;// Offset=0x4 Size=0x4
            };
            struct _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR::<unnamed-type-u>::<unnamed-type-Range> Range;// Offset=0x0 Size=0x8
            void  ( * OverflowHandler)(unsigned long long ,void * );// Offset=0x0 Size=0x8
            struct _PHYSICAL_COUNTER_EVENT_BUFFER_CONFIGURATION EventBufferConfiguration;// Offset=0x0 Size=0x10
        };
    };
    union _PHYSICAL_COUNTER_RESOURCE_DESCRIPTOR::<unnamed-type-u> u;// Offset=0x8 Size=0x10
};
