struct _unnamed_184// Size=0x10 (Id=184)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_185// Size=0x10 (Id=185)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_186// Size=0x10 (Id=186)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_187// Size=0x10 (Id=187)
{
    struct _unnamed_184 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_185 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_186 HandleType;// Offset=0x0 Size=0x10
};
