struct _unnamed_196// Size=0x10 (Id=196)
{
    void * Buffer;// Offset=0x0 Size=0x8
    unsigned long Length;// Offset=0x8 Size=0x4
};

struct _unnamed_197// Size=0x10 (Id=197)
{
    struct _MDL * Mdl;// Offset=0x0 Size=0x8
    unsigned long BufferLength;// Offset=0x8 Size=0x4
};

struct _unnamed_198// Size=0x10 (Id=198)
{
    struct WDFMEMORY__ * Memory;// Offset=0x0 Size=0x8
    struct _WDFMEMORY_OFFSET * Offsets;// Offset=0x8 Size=0x8
};

union _unnamed_199// Size=0x10 (Id=199)
{
    struct _unnamed_196 BufferType;// Offset=0x0 Size=0x10
    struct _unnamed_197 MdlType;// Offset=0x0 Size=0x10
    struct _unnamed_198 HandleType;// Offset=0x0 Size=0x10
};
