struct _unnamed_161// Size=0x10 (Id=161)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_162// Size=0x10 (Id=162)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_163// Size=0x10 (Id=163)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_164// Size=0x10 (Id=164)
{
    struct _unnamed_161 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_162 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_163 HandleType;// Offset=0x0 Size=0x10
};
