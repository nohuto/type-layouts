struct _unnamed_143// Size=0x10 (Id=143)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_144// Size=0x10 (Id=144)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_145// Size=0x10 (Id=145)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_146// Size=0x10 (Id=146)
{
    struct _unnamed_143 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_144 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_145 HandleType;// Offset=0x0 Size=0x10
};
