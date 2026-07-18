struct _unnamed_217// Size=0x10 (Id=217)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_218// Size=0x10 (Id=218)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_219// Size=0x10 (Id=219)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_220// Size=0x10 (Id=220)
{
    struct _unnamed_217 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_218 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_219 HandleType;// Offset=0x0 Size=0x10
};
