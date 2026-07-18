struct _unnamed_218// Size=0x10 (Id=218)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_219// Size=0x10 (Id=219)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_220// Size=0x10 (Id=220)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_221// Size=0x10 (Id=221)
{
    struct _unnamed_218 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_219 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_220 HandleType;// Offset=0x0 Size=0x10
};
