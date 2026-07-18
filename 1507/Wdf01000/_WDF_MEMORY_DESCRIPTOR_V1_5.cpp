enum _WDF_MEMORY_DESCRIPTOR_TYPE
{
    WdfMemoryDescriptorTypeInvalid=0,
    WdfMemoryDescriptorTypeBuffer=1,
    WdfMemoryDescriptorTypeMdl=2,
    WdfMemoryDescriptorTypeHandle=3
};

struct _WDF_MEMORY_DESCRIPTOR_V1_5// Size=0x18 (Id=3837)
{
    union // Size=0x4 (Id=0)
    {
        enum _WDF_MEMORY_DESCRIPTOR_TYPE Type;// Offset=0x0 Size=0x4
        union <unnamed-type-u>// Size=0x10 (Id=17057)
        {
            struct <unnamed-type-BufferType>// Size=0x10 (Id=17058)
            {
                void * Buffer;// Offset=0x0 Size=0x8
                unsigned long Length;// Offset=0x8 Size=0x4
            };
            struct _WDF_MEMORY_DESCRIPTOR_V1_5::<unnamed-type-u>::<unnamed-type-BufferType> BufferType;// Offset=0x0 Size=0x10
            struct <unnamed-type-MdlType>// Size=0x10 (Id=17062)
            {
                struct _MDL * Mdl;// Offset=0x0 Size=0x8
                unsigned long BufferLength;// Offset=0x8 Size=0x4
            };
            struct _WDF_MEMORY_DESCRIPTOR_V1_5::<unnamed-type-u>::<unnamed-type-MdlType> MdlType;// Offset=0x0 Size=0x10
            struct <unnamed-type-HandleType>// Size=0x10 (Id=17066)
            {
                struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
                struct _WDFMEMORY_OFFSET_V1_5 * Offsets;// Offset=0x8 Size=0x8
            };
            struct _WDF_MEMORY_DESCRIPTOR_V1_5::<unnamed-type-u>::<unnamed-type-HandleType> HandleType;// Offset=0x0 Size=0x10
        };
    };
    union _WDF_MEMORY_DESCRIPTOR_V1_5::<unnamed-type-u> u;// Offset=0x8 Size=0x10
};
