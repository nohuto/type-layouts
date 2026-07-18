enum _WDF_MEMORY_DESCRIPTOR_TYPE
{
    WdfMemoryDescriptorTypeInvalid=0,
    WdfMemoryDescriptorTypeBuffer=1,
    WdfMemoryDescriptorTypeMdl=2,
    WdfMemoryDescriptorTypeHandle=3
};

struct _anonymous_199// Size=0x10 (Id=199)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_200// Size=0x10 (Id=200)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _anonymous_201// Size=0x10 (Id=201)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _anonymous_202// Size=0x10 (Id=202)
{
    struct _anonymous_199 BufferType;// Offset=0x0 Size=0x10
    struct _anonymous_200 MdlType;// Offset=0x0 Size=0x10
    struct _anonymous_201 HandleType;// Offset=0x0 Size=0x10
};

struct _WDF_MEMORY_DESCRIPTOR// Size=0x18 (Id=203)
{
    enum _WDF_MEMORY_DESCRIPTOR_TYPE Type;// Offset=0x0 Size=0x4
    union _anonymous_202 u;// Offset=0x8 Size=0x10
};
