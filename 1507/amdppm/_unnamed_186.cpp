struct _unnamed_183// Size=0x10 (Id=183)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_184// Size=0x10 (Id=184)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_185// Size=0x10 (Id=185)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_186// Size=0x10 (Id=186)
{
    struct _unnamed_183 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_184 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_185 HandleType;// Offset=0x0 Size=0x10
};
