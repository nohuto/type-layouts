struct _unnamed_191// Size=0x10 (Id=191)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_192// Size=0x10 (Id=192)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_193// Size=0x10 (Id=193)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_194// Size=0x10 (Id=194)
{
    struct _unnamed_191 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_192 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_193 HandleType;// Offset=0x0 Size=0x10
};
