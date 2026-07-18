struct _unnamed_182// Size=0x10 (Id=182)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_183// Size=0x10 (Id=183)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_184// Size=0x10 (Id=184)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_185// Size=0x10 (Id=185)
{
    struct _unnamed_182 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_183 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_184 HandleType;// Offset=0x0 Size=0x10
};
