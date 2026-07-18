struct _unnamed_216// Size=0x10 (Id=216)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_217// Size=0x10 (Id=217)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_218// Size=0x10 (Id=218)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_219// Size=0x10 (Id=219)
{
    struct _unnamed_216 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_217 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_218 HandleType;// Offset=0x0 Size=0x10
};
