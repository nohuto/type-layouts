struct _unnamed_214// Size=0x10 (Id=214)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_215// Size=0x10 (Id=215)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_216// Size=0x10 (Id=216)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_217// Size=0x10 (Id=217)
{
    struct _unnamed_214 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_215 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_216 HandleType;// Offset=0x0 Size=0x10
};
