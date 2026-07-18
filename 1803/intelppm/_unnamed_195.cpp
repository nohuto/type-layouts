struct _unnamed_192// Size=0x10 (Id=192)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_193// Size=0x10 (Id=193)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_194// Size=0x10 (Id=194)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_195// Size=0x10 (Id=195)
{
    struct _unnamed_192 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_193 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_194 HandleType;// Offset=0x0 Size=0x10
};
