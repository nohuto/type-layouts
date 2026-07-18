struct _unnamed_147// Size=0x10 (Id=147)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_148// Size=0x10 (Id=148)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_149// Size=0x10 (Id=149)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_150// Size=0x10 (Id=150)
{
    struct _unnamed_147 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_148 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_149 HandleType;// Offset=0x0 Size=0x10
};
