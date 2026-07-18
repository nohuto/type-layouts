struct _unnamed_188// Size=0x10 (Id=188)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_189// Size=0x10 (Id=189)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_190// Size=0x10 (Id=190)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_191// Size=0x10 (Id=191)
{
    struct _unnamed_188 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_189 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_190 HandleType;// Offset=0x0 Size=0x10
};
