struct _anonymous_153// Size=0x10 (Id=153)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_154// Size=0x10 (Id=154)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _anonymous_155// Size=0x10 (Id=155)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _anonymous_156// Size=0x10 (Id=156)
{
    struct _anonymous_153 BufferType;// Offset=0x0 Size=0x10
    struct _anonymous_154 MdlType;// Offset=0x0 Size=0x10
    struct _anonymous_155 HandleType;// Offset=0x0 Size=0x10
};
