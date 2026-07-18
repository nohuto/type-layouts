union _WDF_MEMORY_DESCRIPTOR_V1_0::<unnamed-type-u>// Size=0x10 (Id=3650)
{
    struct <unnamed-type-BufferType>// Size=0x10 (Id=16994)
    {
        void * Buffer;// Offset=0x0 Size=0x8
        unsigned long Length;// Offset=0x8 Size=0x4
    };
    struct _WDF_MEMORY_DESCRIPTOR_V1_0::<unnamed-type-u>::<unnamed-type-BufferType> BufferType;// Offset=0x0 Size=0x10
    struct <unnamed-type-MdlType>// Size=0x10 (Id=16998)
    {
        struct _MDL * Mdl;// Offset=0x0 Size=0x8
        unsigned long BufferLength;// Offset=0x8 Size=0x4
    };
    struct _WDF_MEMORY_DESCRIPTOR_V1_0::<unnamed-type-u>::<unnamed-type-MdlType> MdlType;// Offset=0x0 Size=0x10
    struct <unnamed-type-HandleType>// Size=0x10 (Id=17002)
    {
        struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
        struct _WDFMEMORY_OFFSET_V1_0 * Offsets;// Offset=0x8 Size=0x8
    };
    struct _WDF_MEMORY_DESCRIPTOR_V1_0::<unnamed-type-u>::<unnamed-type-HandleType> HandleType;// Offset=0x0 Size=0x10
};
