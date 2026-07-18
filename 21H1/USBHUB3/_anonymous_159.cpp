struct _anonymous_156// Size=0x10 (Id=156)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _anonymous_157// Size=0x10 (Id=157)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _anonymous_158// Size=0x10 (Id=158)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _anonymous_159// Size=0x10 (Id=159)
{
    struct _anonymous_156 BufferType;// Offset=0x0 Size=0x10
    struct _anonymous_157 MdlType;// Offset=0x0 Size=0x10
    struct _anonymous_158 HandleType;// Offset=0x0 Size=0x10
};
