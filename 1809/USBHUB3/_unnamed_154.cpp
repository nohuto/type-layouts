struct _unnamed_151// Size=0x10 (Id=151)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_152// Size=0x10 (Id=152)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_153// Size=0x10 (Id=153)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_154// Size=0x10 (Id=154)
{
    struct _unnamed_151 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_152 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_153 HandleType;// Offset=0x0 Size=0x10
};
