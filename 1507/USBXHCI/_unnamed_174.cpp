struct _unnamed_171// Size=0x10 (Id=171)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_172// Size=0x10 (Id=172)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_173// Size=0x10 (Id=173)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_174// Size=0x10 (Id=174)
{
    struct _unnamed_171 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_172 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_173 HandleType;// Offset=0x0 Size=0x10
};
