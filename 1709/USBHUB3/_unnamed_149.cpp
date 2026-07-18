struct _unnamed_146// Size=0x10 (Id=146)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_147// Size=0x10 (Id=147)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_148// Size=0x10 (Id=148)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_149// Size=0x10 (Id=149)
{
    struct _unnamed_146 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_147 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_148 HandleType;// Offset=0x0 Size=0x10
};
