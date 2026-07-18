struct _unnamed_144// Size=0x10 (Id=144)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_145// Size=0x10 (Id=145)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_146// Size=0x10 (Id=146)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_147// Size=0x10 (Id=147)
{
    struct _unnamed_144 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_145 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_146 HandleType;// Offset=0x0 Size=0x10
};
