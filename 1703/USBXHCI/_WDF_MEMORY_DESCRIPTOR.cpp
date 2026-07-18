enum _WDF_MEMORY_DESCRIPTOR_TYPE
{
    WdfMemoryDescriptorTypeInvalid=0,
    WdfMemoryDescriptorTypeBuffer=1,
    WdfMemoryDescriptorTypeMdl=2,
    WdfMemoryDescriptorTypeHandle=3
};

struct _unnamed_174// Size=0x10 (Id=174)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_175// Size=0x10 (Id=175)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_176// Size=0x10 (Id=176)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_177// Size=0x10 (Id=177)
{
    struct _unnamed_174 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_175 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_176 HandleType;// Offset=0x0 Size=0x10
};

struct _WDF_MEMORY_DESCRIPTOR// Size=0x18 (Id=178)
{
    enum _WDF_MEMORY_DESCRIPTOR_TYPE Type;// Offset=0x0 Size=0x4
    union _unnamed_177 u;// Offset=0x8 Size=0x10
};
