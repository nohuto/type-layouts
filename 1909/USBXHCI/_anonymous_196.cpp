struct _anonymous_193// Size=0x10 (Id=193)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_194// Size=0x10 (Id=194)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _anonymous_195// Size=0x10 (Id=195)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _anonymous_196// Size=0x10 (Id=196)
{
    struct _anonymous_193 BufferType;// Offset=0x0 Size=0x10
    struct _anonymous_194 MdlType;// Offset=0x0 Size=0x10
    struct _anonymous_195 HandleType;// Offset=0x0 Size=0x10
};
