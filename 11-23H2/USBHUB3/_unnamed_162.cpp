struct _unnamed_159// Size=0x10 (Id=159)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_160// Size=0x10 (Id=160)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_161// Size=0x10 (Id=161)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_162// Size=0x10 (Id=162)
{
    struct _unnamed_159 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_160 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_161 HandleType;// Offset=0x0 Size=0x10
};
