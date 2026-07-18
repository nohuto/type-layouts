struct _unnamed_220// Size=0x10 (Id=220)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_221// Size=0x10 (Id=221)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_222// Size=0x10 (Id=222)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_223// Size=0x10 (Id=223)
{
    struct _unnamed_220 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_221 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_222 HandleType;// Offset=0x0 Size=0x10
};
