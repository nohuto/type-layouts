enum _WDF_MEMORY_DESCRIPTOR_TYPE
{
    WdfMemoryDescriptorTypeInvalid=0,
    WdfMemoryDescriptorTypeBuffer=1,
    WdfMemoryDescriptorTypeMdl=2,
    WdfMemoryDescriptorTypeHandle=3
};

struct _WDF_MEMORY_DESCRIPTOR_V1_17// Size=0x18 (Id=2497)
{
    union // Size=0x4 (Id=0)
    {
        enum _WDF_MEMORY_DESCRIPTOR_TYPE Type;// Offset=0x0 Size=0x4
        union <unnamed-type-u>// Size=0x10 (Id=20529)
        {
            struct <unnamed-type-BufferType>// Size=0x10 (Id=20530)
            {
                void * Buffer;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _WDF_MEMORY_DESCRIPTOR_V1_17::<unnamed-type-u>::<unnamed-type-BufferType> BufferType;// Offset=0x0 Size=0x10
            struct <unnamed-type-MdlType>// Size=0x10 (Id=20534)
            {
                struct _MDL * Mdl;// Offset=0x0 Size=0x8
                unsigned long BufferLength;// Offset=0x8 Size=0x4
            };
            struct _WDF_MEMORY_DESCRIPTOR_V1_17::<unnamed-type-u>::<unnamed-type-MdlType> MdlType;// Offset=0x0 Size=0x10
            struct <unnamed-type-HandleType>// Size=0x10 (Id=20538)
            {
                struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
                struct _WDFMEMORY_OFFSET_V1_17 * Offsets;// Offset=0x8 Size=0x8
            };
            struct _WDF_MEMORY_DESCRIPTOR_V1_17::<unnamed-type-u>::<unnamed-type-HandleType> HandleType;// Offset=0x0 Size=0x10
        };
    };
    union _WDF_MEMORY_DESCRIPTOR_V1_17::<unnamed-type-u> u;// Offset=0x8 Size=0x10
};
