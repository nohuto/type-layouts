struct _unnamed_157// Size=0x10 (Id=157)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_158// Size=0x10 (Id=158)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_159// Size=0x10 (Id=159)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_160// Size=0x10 (Id=160)
{
    struct _unnamed_157 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_158 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_159 HandleType;// Offset=0x0 Size=0x10
};
